#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/system/pins.h"
#include "mcc_generated_files/can/can1.h"
#include "mcc_generated_files/can/can_types.h"
#include <stdint.h>
#include <stdbool.h>

// ==== ??I 2 DÒNG NÀY GI?A HAI BOARD ====
// Board A:
//#define THIS_NODE_ID   0x20u
//#define OTHER_NODE_ID  0x10u
// Board B thì ??o l?i:
#define THIS_NODE_ID   0x10u
#define OTHER_NODE_ID  0x20u

// L?nh ??n gi?n: 1 byte command
#define CMD_BTN1_PRESS  0x01u
#define CMD_BTN2_PRESS  0x02u
#define CMD_BTN3_PRESS  0x03u

// Dùng static cho ch?c ch?n vùng nh? t?n t?i
static struct CAN_MSG_OBJ txMsg;
static uint8_t txData[8];

static struct CAN_MSG_OBJ rxMsg;
static uint8_t rxData[8];

int main(void)
{
    SYSTEM_Initialize();
    PINS_Initialize();

    // Kích transceiver
    STB_SetDigitalOutput();
    STB_SetLow();          // NCV7344 active

    // LED output
    LED1_SetDigitalOutput(); LED1_SetLow();
    LED2_SetDigitalOutput(); LED2_SetLow();
    LED3_SetDigitalOutput(); LED3_SetLow();

    // Nút nh?n (MCC ?ã b?t pull-up n?i + debounce HW)
    Button1_SetDigitalInput();
    Button2_SetDigitalInput();
    Button3_SetDigitalInput();

    // CAN FD init theo MCC
    CAN1_Initialize();
    CAN1_OperationModeSet(CAN_NORMAL_FD_MODE);

    // ==== TX message object theo guide ====
    txMsg.msgId            = THIS_NODE_ID;
    txMsg.field.idType     = CAN_FRAME_STD;
    txMsg.field.frameType  = CAN_FRAME_DATA;
    txMsg.field.formatType = CAN_FD_FORMAT;
    txMsg.field.brs        = CAN_BRS_MODE;   // BRS on vì ?ang dùng FD
    txMsg.field.dlc        = DLC_1;          // g?i ?úng 1 byte l?nh
    txMsg.data             = txData;

    // ==== RX message object: CH? c?n gán data buffer ====
    rxMsg.data = rxData;   // driver s? t? ?i?n msgId, field, dlc?

    uint8_t lastBtn1 = 1u, curBtn1 = 1u;
    uint8_t lastBtn2 = 1u, curBtn2 = 1u;
    uint8_t lastBtn3 = 1u, curBtn3 = 1u;

    while (1)
    {
        // ===== ??C NÚT VÀ G?I CAN =====
        curBtn1 = Button1_GetValue();
        curBtn2 = Button2_GetValue();
        curBtn3 = Button3_GetValue();

        // BTN1: c?nh xu?ng 1 -> 0
        if ((lastBtn1 == 1u) && (curBtn1 == 0u))
        {
            txData[0] = CMD_BTN1_PRESS;
            if (CAN1_TransmitFIFOStatusGet(CAN1_TX_TXQ) == CAN_TX_FIFO_AVAILABLE)
            {
                CAN1_Transmit(CAN1_TX_TXQ, &txMsg);
            }
        }

        // BTN2
        if ((lastBtn2 == 1u) && (curBtn2 == 0u))
        {
            txData[0] = CMD_BTN2_PRESS;
            if (CAN1_TransmitFIFOStatusGet(CAN1_TX_TXQ) == CAN_TX_FIFO_AVAILABLE)
            {
                CAN1_Transmit(CAN1_TX_TXQ, &txMsg);
            }
        }

        // BTN3
        if ((lastBtn3 == 1u) && (curBtn3 == 0u))
        {
            txData[0] = CMD_BTN3_PRESS;
            if (CAN1_TransmitFIFOStatusGet(CAN1_TX_TXQ) == CAN_TX_FIFO_AVAILABLE)
            {
                CAN1_Transmit(CAN1_TX_TXQ, &txMsg);
            }
        }

        lastBtn1 = curBtn1;
        lastBtn2 = curBtn2;
        lastBtn3 = curBtn3;

        // ===== NH?N THEO ?ÚNG FLOW MICROCHIP =====
        // 1) check t?ng s? message trong t?t c? RX FIFO
        if (CAN1_ReceivedMessageCountGet() > 0u)
        {
            // 2) ??c message ti?p theo vào rxMsg
            if (CAN1_Receive(&rxMsg) == true)
            {
                // L?c theo ID node còn l?i (tránh t? ?n frame c?a mình n?u có loopback)
                if (rxMsg.msgId == OTHER_NODE_ID)
                {
                    uint8_t cmd = rxMsg.data[0];   // l?nh ? byte 0

                    switch (cmd)
                    {
                        case CMD_BTN1_PRESS:
                            LED1_Toggle();
                            break;

                        case CMD_BTN2_PRESS:
                            LED2_Toggle();
                            break;

                        case CMD_BTN3_PRESS:
                            LED3_Toggle();
                            break;

                        default:
                            // Frame khác thì b? qua
                            break;
                    }
                }
            }
        }

        // Polling driver theo tài li?u
        CAN1_Tasks();
    }

    return 0;
}
