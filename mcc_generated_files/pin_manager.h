/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F15376
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RB6 procedures
#define RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define RB6_GetValue()              PORTBbits.RB6
#define RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define RB6_SetPullup()             do { WPUBbits.WPUB6 = 1; } while(0)
#define RB6_ResetPullup()           do { WPUBbits.WPUB6 = 0; } while(0)
#define RB6_SetAnalogMode()         do { ANSELBbits.ANSB6 = 1; } while(0)
#define RB6_SetDigitalMode()        do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set RB7 procedures
#define RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define RB7_GetValue()              PORTBbits.RB7
#define RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define RB7_SetPullup()             do { WPUBbits.WPUB7 = 1; } while(0)
#define RB7_ResetPullup()           do { WPUBbits.WPUB7 = 0; } while(0)
#define RB7_SetAnalogMode()         do { ANSELBbits.ANSB7 = 1; } while(0)
#define RB7_SetDigitalMode()        do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set VOL_MAIS aliases
#define VOL_MAIS_TRIS                 TRISCbits.TRISC3
#define VOL_MAIS_LAT                  LATCbits.LATC3
#define VOL_MAIS_PORT                 PORTCbits.RC3
#define VOL_MAIS_WPU                  WPUCbits.WPUC3
#define VOL_MAIS_OD                   ODCONCbits.ODCC3
#define VOL_MAIS_ANS                  ANSELCbits.ANSC3
#define VOL_MAIS_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define VOL_MAIS_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define VOL_MAIS_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define VOL_MAIS_GetValue()           PORTCbits.RC3
#define VOL_MAIS_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define VOL_MAIS_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define VOL_MAIS_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define VOL_MAIS_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define VOL_MAIS_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define VOL_MAIS_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define VOL_MAIS_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define VOL_MAIS_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set LED aliases
#define LED_TRIS                 TRISCbits.TRISC4
#define LED_LAT                  LATCbits.LATC4
#define LED_PORT                 PORTCbits.RC4
#define LED_WPU                  WPUCbits.WPUC4
#define LED_OD                   ODCONCbits.ODCC4
#define LED_ANS                  ANSELCbits.ANSC4
#define LED_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define LED_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define LED_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define LED_GetValue()           PORTCbits.RC4
#define LED_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define LED_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define LED_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define LED_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set VOL_MENOS aliases
#define VOL_MENOS_TRIS                 TRISCbits.TRISC5
#define VOL_MENOS_LAT                  LATCbits.LATC5
#define VOL_MENOS_PORT                 PORTCbits.RC5
#define VOL_MENOS_WPU                  WPUCbits.WPUC5
#define VOL_MENOS_OD                   ODCONCbits.ODCC5
#define VOL_MENOS_ANS                  ANSELCbits.ANSC5
#define VOL_MENOS_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define VOL_MENOS_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define VOL_MENOS_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define VOL_MENOS_GetValue()           PORTCbits.RC5
#define VOL_MENOS_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define VOL_MENOS_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define VOL_MENOS_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define VOL_MENOS_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define VOL_MENOS_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define VOL_MENOS_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define VOL_MENOS_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define VOL_MENOS_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set MUS_01 aliases
#define MUS_01_TRIS                 TRISDbits.TRISD0
#define MUS_01_LAT                  LATDbits.LATD0
#define MUS_01_PORT                 PORTDbits.RD0
#define MUS_01_WPU                  WPUDbits.WPUD0
#define MUS_01_OD                   ODCONDbits.ODCD0
#define MUS_01_ANS                  ANSELDbits.ANSD0
#define MUS_01_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define MUS_01_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define MUS_01_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define MUS_01_GetValue()           PORTDbits.RD0
#define MUS_01_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define MUS_01_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define MUS_01_SetPullup()          do { WPUDbits.WPUD0 = 1; } while(0)
#define MUS_01_ResetPullup()        do { WPUDbits.WPUD0 = 0; } while(0)
#define MUS_01_SetPushPull()        do { ODCONDbits.ODCD0 = 0; } while(0)
#define MUS_01_SetOpenDrain()       do { ODCONDbits.ODCD0 = 1; } while(0)
#define MUS_01_SetAnalogMode()      do { ANSELDbits.ANSD0 = 1; } while(0)
#define MUS_01_SetDigitalMode()     do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set MUS_02 aliases
#define MUS_02_TRIS                 TRISDbits.TRISD1
#define MUS_02_LAT                  LATDbits.LATD1
#define MUS_02_PORT                 PORTDbits.RD1
#define MUS_02_WPU                  WPUDbits.WPUD1
#define MUS_02_OD                   ODCONDbits.ODCD1
#define MUS_02_ANS                  ANSELDbits.ANSD1
#define MUS_02_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define MUS_02_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define MUS_02_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define MUS_02_GetValue()           PORTDbits.RD1
#define MUS_02_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define MUS_02_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define MUS_02_SetPullup()          do { WPUDbits.WPUD1 = 1; } while(0)
#define MUS_02_ResetPullup()        do { WPUDbits.WPUD1 = 0; } while(0)
#define MUS_02_SetPushPull()        do { ODCONDbits.ODCD1 = 0; } while(0)
#define MUS_02_SetOpenDrain()       do { ODCONDbits.ODCD1 = 1; } while(0)
#define MUS_02_SetAnalogMode()      do { ANSELDbits.ANSD1 = 1; } while(0)
#define MUS_02_SetDigitalMode()     do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set MUS_03 aliases
#define MUS_03_TRIS                 TRISDbits.TRISD2
#define MUS_03_LAT                  LATDbits.LATD2
#define MUS_03_PORT                 PORTDbits.RD2
#define MUS_03_WPU                  WPUDbits.WPUD2
#define MUS_03_OD                   ODCONDbits.ODCD2
#define MUS_03_ANS                  ANSELDbits.ANSD2
#define MUS_03_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define MUS_03_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define MUS_03_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define MUS_03_GetValue()           PORTDbits.RD2
#define MUS_03_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define MUS_03_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define MUS_03_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define MUS_03_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define MUS_03_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define MUS_03_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define MUS_03_SetAnalogMode()      do { ANSELDbits.ANSD2 = 1; } while(0)
#define MUS_03_SetDigitalMode()     do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set MUS_04 aliases
#define MUS_04_TRIS                 TRISDbits.TRISD3
#define MUS_04_LAT                  LATDbits.LATD3
#define MUS_04_PORT                 PORTDbits.RD3
#define MUS_04_WPU                  WPUDbits.WPUD3
#define MUS_04_OD                   ODCONDbits.ODCD3
#define MUS_04_ANS                  ANSELDbits.ANSD3
#define MUS_04_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define MUS_04_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define MUS_04_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define MUS_04_GetValue()           PORTDbits.RD3
#define MUS_04_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define MUS_04_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define MUS_04_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define MUS_04_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define MUS_04_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define MUS_04_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define MUS_04_SetAnalogMode()      do { ANSELDbits.ANSD3 = 1; } while(0)
#define MUS_04_SetDigitalMode()     do { ANSELDbits.ANSD3 = 0; } while(0)

// get/set MUS_05 aliases
#define MUS_05_TRIS                 TRISDbits.TRISD4
#define MUS_05_LAT                  LATDbits.LATD4
#define MUS_05_PORT                 PORTDbits.RD4
#define MUS_05_WPU                  WPUDbits.WPUD4
#define MUS_05_OD                   ODCONDbits.ODCD4
#define MUS_05_ANS                  ANSELDbits.ANSD4
#define MUS_05_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define MUS_05_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define MUS_05_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define MUS_05_GetValue()           PORTDbits.RD4
#define MUS_05_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define MUS_05_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define MUS_05_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define MUS_05_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define MUS_05_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define MUS_05_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define MUS_05_SetAnalogMode()      do { ANSELDbits.ANSD4 = 1; } while(0)
#define MUS_05_SetDigitalMode()     do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set MUS_06 aliases
#define MUS_06_TRIS                 TRISDbits.TRISD5
#define MUS_06_LAT                  LATDbits.LATD5
#define MUS_06_PORT                 PORTDbits.RD5
#define MUS_06_WPU                  WPUDbits.WPUD5
#define MUS_06_OD                   ODCONDbits.ODCD5
#define MUS_06_ANS                  ANSELDbits.ANSD5
#define MUS_06_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define MUS_06_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define MUS_06_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define MUS_06_GetValue()           PORTDbits.RD5
#define MUS_06_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define MUS_06_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define MUS_06_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define MUS_06_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define MUS_06_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define MUS_06_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define MUS_06_SetAnalogMode()      do { ANSELDbits.ANSD5 = 1; } while(0)
#define MUS_06_SetDigitalMode()     do { ANSELDbits.ANSD5 = 0; } while(0)

// get/set MUS_07 aliases
#define MUS_07_TRIS                 TRISDbits.TRISD6
#define MUS_07_LAT                  LATDbits.LATD6
#define MUS_07_PORT                 PORTDbits.RD6
#define MUS_07_WPU                  WPUDbits.WPUD6
#define MUS_07_OD                   ODCONDbits.ODCD6
#define MUS_07_ANS                  ANSELDbits.ANSD6
#define MUS_07_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define MUS_07_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define MUS_07_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define MUS_07_GetValue()           PORTDbits.RD6
#define MUS_07_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define MUS_07_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define MUS_07_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define MUS_07_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define MUS_07_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define MUS_07_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define MUS_07_SetAnalogMode()      do { ANSELDbits.ANSD6 = 1; } while(0)
#define MUS_07_SetDigitalMode()     do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set MUS_08 aliases
#define MUS_08_TRIS                 TRISDbits.TRISD7
#define MUS_08_LAT                  LATDbits.LATD7
#define MUS_08_PORT                 PORTDbits.RD7
#define MUS_08_WPU                  WPUDbits.WPUD7
#define MUS_08_OD                   ODCONDbits.ODCD7
#define MUS_08_ANS                  ANSELDbits.ANSD7
#define MUS_08_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define MUS_08_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define MUS_08_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define MUS_08_GetValue()           PORTDbits.RD7
#define MUS_08_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define MUS_08_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define MUS_08_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define MUS_08_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define MUS_08_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define MUS_08_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define MUS_08_SetAnalogMode()      do { ANSELDbits.ANSD7 = 1; } while(0)
#define MUS_08_SetDigitalMode()     do { ANSELDbits.ANSD7 = 0; } while(0)

// get/set MUS_09 aliases
#define MUS_09_TRIS                 TRISEbits.TRISE0
#define MUS_09_LAT                  LATEbits.LATE0
#define MUS_09_PORT                 PORTEbits.RE0
#define MUS_09_WPU                  WPUEbits.WPUE0
#define MUS_09_OD                   ODCONEbits.ODCE0
#define MUS_09_ANS                  ANSELEbits.ANSE0
#define MUS_09_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define MUS_09_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define MUS_09_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define MUS_09_GetValue()           PORTEbits.RE0
#define MUS_09_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define MUS_09_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define MUS_09_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define MUS_09_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define MUS_09_SetPushPull()        do { ODCONEbits.ODCE0 = 0; } while(0)
#define MUS_09_SetOpenDrain()       do { ODCONEbits.ODCE0 = 1; } while(0)
#define MUS_09_SetAnalogMode()      do { ANSELEbits.ANSE0 = 1; } while(0)
#define MUS_09_SetDigitalMode()     do { ANSELEbits.ANSE0 = 0; } while(0)

// get/set MUS_10 aliases
#define MUS_10_TRIS                 TRISEbits.TRISE1
#define MUS_10_LAT                  LATEbits.LATE1
#define MUS_10_PORT                 PORTEbits.RE1
#define MUS_10_WPU                  WPUEbits.WPUE1
#define MUS_10_OD                   ODCONEbits.ODCE1
#define MUS_10_ANS                  ANSELEbits.ANSE1
#define MUS_10_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define MUS_10_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define MUS_10_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define MUS_10_GetValue()           PORTEbits.RE1
#define MUS_10_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define MUS_10_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define MUS_10_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define MUS_10_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define MUS_10_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define MUS_10_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define MUS_10_SetAnalogMode()      do { ANSELEbits.ANSE1 = 1; } while(0)
#define MUS_10_SetDigitalMode()     do { ANSELEbits.ANSE1 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/