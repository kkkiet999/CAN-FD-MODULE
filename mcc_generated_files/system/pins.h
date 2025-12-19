/**
 * PINS Generated Driver Header File 
 * 
 * @file      pins.h
 *            
 * @defgroup  pinsdriver Pins Driver
 *            
 * @brief     The Pin Driver directs the operation and function of 
 *            the selected device pins using dsPIC MCUs.
 *
 * @skipline @version   Firmware Driver Version 1.0.2
 *
 * @skipline @version   PLIB Version 1.4.1
 *
 * @skipline  Device : dsPIC33CK256MC502
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H
// Section: Includes
#include <xc.h>

// Section: Device Pin Macros

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB2 GPIO Pin which has a custom name of Button1 to High
 * @pre      The RB2 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Button1_SetHigh()          (_LATB2 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB2 GPIO Pin which has a custom name of Button1 to Low
 * @pre      The RB2 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Button1_SetLow()           (_LATB2 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RB2 GPIO Pin which has a custom name of Button1
 * @pre      The RB2 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Button1_Toggle()           (_LATB2 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RB2 GPIO Pin which has a custom name of Button1
 * @param    none
 * @return   none  
 */
#define Button1_GetValue()         _RB2

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB2 GPIO Pin which has a custom name of Button1 as Input
 * @param    none
 * @return   none  
 */
#define Button1_SetDigitalInput()  (_TRISB2 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB2 GPIO Pin which has a custom name of Button1 as Output
 * @param    none
 * @return   none  
 */
#define Button1_SetDigitalOutput() (_TRISB2 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB3 GPIO Pin which has a custom name of Button2 to High
 * @pre      The RB3 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Button2_SetHigh()          (_LATB3 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB3 GPIO Pin which has a custom name of Button2 to Low
 * @pre      The RB3 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Button2_SetLow()           (_LATB3 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RB3 GPIO Pin which has a custom name of Button2
 * @pre      The RB3 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Button2_Toggle()           (_LATB3 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RB3 GPIO Pin which has a custom name of Button2
 * @param    none
 * @return   none  
 */
#define Button2_GetValue()         _RB3

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB3 GPIO Pin which has a custom name of Button2 as Input
 * @param    none
 * @return   none  
 */
#define Button2_SetDigitalInput()  (_TRISB3 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB3 GPIO Pin which has a custom name of Button2 as Output
 * @param    none
 * @return   none  
 */
#define Button2_SetDigitalOutput() (_TRISB3 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB4 GPIO Pin which has a custom name of Button3 to High
 * @pre      The RB4 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Button3_SetHigh()          (_LATB4 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB4 GPIO Pin which has a custom name of Button3 to Low
 * @pre      The RB4 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Button3_SetLow()           (_LATB4 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RB4 GPIO Pin which has a custom name of Button3
 * @pre      The RB4 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Button3_Toggle()           (_LATB4 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RB4 GPIO Pin which has a custom name of Button3
 * @param    none
 * @return   none  
 */
#define Button3_GetValue()         _RB4

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB4 GPIO Pin which has a custom name of Button3 as Input
 * @param    none
 * @return   none  
 */
#define Button3_SetDigitalInput()  (_TRISB4 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB4 GPIO Pin which has a custom name of Button3 as Output
 * @param    none
 * @return   none  
 */
#define Button3_SetDigitalOutput() (_TRISB4 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB7 GPIO Pin which has a custom name of STB to High
 * @pre      The RB7 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define STB_SetHigh()          (_LATB7 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB7 GPIO Pin which has a custom name of STB to Low
 * @pre      The RB7 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define STB_SetLow()           (_LATB7 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RB7 GPIO Pin which has a custom name of STB
 * @pre      The RB7 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define STB_Toggle()           (_LATB7 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RB7 GPIO Pin which has a custom name of STB
 * @param    none
 * @return   none  
 */
#define STB_GetValue()         _RB7

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB7 GPIO Pin which has a custom name of STB as Input
 * @param    none
 * @return   none  
 */
#define STB_SetDigitalInput()  (_TRISB7 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB7 GPIO Pin which has a custom name of STB as Output
 * @param    none
 * @return   none  
 */
#define STB_SetDigitalOutput() (_TRISB7 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB13 GPIO Pin which has a custom name of LED3 to High
 * @pre      The RB13 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define LED3_SetHigh()          (_LATB13 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB13 GPIO Pin which has a custom name of LED3 to Low
 * @pre      The RB13 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define LED3_SetLow()           (_LATB13 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RB13 GPIO Pin which has a custom name of LED3
 * @pre      The RB13 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define LED3_Toggle()           (_LATB13 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RB13 GPIO Pin which has a custom name of LED3
 * @param    none
 * @return   none  
 */
#define LED3_GetValue()         _RB13

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB13 GPIO Pin which has a custom name of LED3 as Input
 * @param    none
 * @return   none  
 */
#define LED3_SetDigitalInput()  (_TRISB13 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB13 GPIO Pin which has a custom name of LED3 as Output
 * @param    none
 * @return   none  
 */
#define LED3_SetDigitalOutput() (_TRISB13 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB14 GPIO Pin which has a custom name of LED2 to High
 * @pre      The RB14 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define LED2_SetHigh()          (_LATB14 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB14 GPIO Pin which has a custom name of LED2 to Low
 * @pre      The RB14 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define LED2_SetLow()           (_LATB14 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RB14 GPIO Pin which has a custom name of LED2
 * @pre      The RB14 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define LED2_Toggle()           (_LATB14 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RB14 GPIO Pin which has a custom name of LED2
 * @param    none
 * @return   none  
 */
#define LED2_GetValue()         _RB14

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB14 GPIO Pin which has a custom name of LED2 as Input
 * @param    none
 * @return   none  
 */
#define LED2_SetDigitalInput()  (_TRISB14 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB14 GPIO Pin which has a custom name of LED2 as Output
 * @param    none
 * @return   none  
 */
#define LED2_SetDigitalOutput() (_TRISB14 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB15 GPIO Pin which has a custom name of LED1 to High
 * @pre      The RB15 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define LED1_SetHigh()          (_LATB15 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB15 GPIO Pin which has a custom name of LED1 to Low
 * @pre      The RB15 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define LED1_SetLow()           (_LATB15 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RB15 GPIO Pin which has a custom name of LED1
 * @pre      The RB15 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define LED1_Toggle()           (_LATB15 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RB15 GPIO Pin which has a custom name of LED1
 * @param    none
 * @return   none  
 */
#define LED1_GetValue()         _RB15

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB15 GPIO Pin which has a custom name of LED1 as Input
 * @param    none
 * @return   none  
 */
#define LED1_SetDigitalInput()  (_TRISB15 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB15 GPIO Pin which has a custom name of LED1 as Output
 * @param    none
 * @return   none  
 */
#define LED1_SetDigitalOutput() (_TRISB15 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Initializes the PINS module
 * @param    none
 * @return   none  
 */
void PINS_Initialize(void);



#endif
