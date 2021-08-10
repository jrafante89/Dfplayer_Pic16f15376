/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F15376
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"
#include "dfplayer.h"


/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    initPlayer();
    char Buff[11];
    
    while (1)
    {
        if (EUSART1_is_rx_ready())
        {
            int b;
            for(b=0;b<10;b++){
                if (EUSART1_is_rx_ready())
                {
                    Buff[b] = EUSART1_Read();
                    __delay_ms(5);
                }
                        
            }
            switch(Buff[3])
            {
                case 0x40:
                    
                    switch(Buff[6])
                    {
                        case 0x01:
                            
                            printf("Module busy\n");
                            
                        case 0x02:
                            
                            printf("Currently sleep mode\n");
                        
                        case 0x03:
                            
                            printf("Serial receiving error\n");
                            
                        case 0x04:
                            
                            printf("Checksum incorrect\n");
                            
                        case 0x05:
                            
                            printf("Specified track is out of current track scope\n");
                            
                        case 0x06:
                            
                            printf("Specified track is not found\n");
                            
                        case 0x07:
                            
                            printf("Insertion error - an inserting operation only can be done when a track is being played\n");
                            
                        case 0x08:
                            
                            printf("SD card reading failed - SD card pulled out or damaged\n");
                            
                        case 0x0A:
                            
                            printf("Entered into sleep mode\n");
                    } 
                    
                    LED_SetHigh();
                    __delay_ms(1000);
                    LED_SetLow();
                                      
                case 0x3F:
                    switch(Buff[6])
                    {
                        case 0x01:
                            
                            printf("USB flash drive online\n");
                            
                        case 0x02:
                            
                            printf("SD card online\n");
                        
                        case 0x03:
                            
                            printf("PC online\n");
                            
                        case 0x04:
                            
                            printf("USB flash drive and SD card online\n");
                            
                    }
                    
                case 0x3C:
                    
                    printf("Track is finished playing in USB flash drive\n");
                
                case 0x3D:
                    
                    printf("Track is finished playing in SD card\n");
                    
                case 0x41:
                    
                    printf("module has successfully received the command\n");
                    EUSART2_Write(Buff[0]);
                    
            }    
            
        }
        
        if (MUS_01_GetValue()==0)
        {
            Play_music(0x01);
            __delay_ms(100);
        }
        if (MUS_02_GetValue()==0)
        {
            Play_music(0x02);
            __delay_ms(100);
        }
        if (MUS_03_GetValue()==0)
        {
            Play_music(0x03);
            __delay_ms(100);
        }
        if (MUS_04_GetValue()==0)
        {
            Play_music(0x04);
            __delay_ms(100);
        }
        if (MUS_05_GetValue()==0)
        {
            Play_music(0x05);
            __delay_ms(100);
        }
        if (MUS_06_GetValue()==0)
        {
            Play_music(0x06);
            __delay_ms(100);
        }
        if (MUS_07_GetValue()==0)
        {
            Play_music(0x07);
            __delay_ms(100);
        }
        if (MUS_08_GetValue()==0)
        {
            Play_music(0x08);
            __delay_ms(100);
        }
        if (MUS_09_GetValue()==0)
        {
            Play_music(0x09);
            __delay_ms(100);
        }
        if (MUS_10_GetValue()==0)
        {
            Play_music(0x0A);
            __delay_ms(100);
        }
        if (VOL_MAIS_GetValue()==0)
        {
            incr_Volume();
            __delay_ms(100);
        }
        if (VOL_MENOS_GetValue()==0)
        {
            decr_Volume();
            __delay_ms(100);
        }
        LED_Toggle();
        __delay_ms(100);
        // Add your application code
    }
}
/**
 End of File
*/