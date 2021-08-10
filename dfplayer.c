/*
 * File:   dfplayer.c
 * Author: junior
 *
 * Created on August 4, 2021, 1:19 AM
 */


#include <xc.h>
#include "mcc_generated_files/mcc.h"
#include "dfplayer.h"

uint8_t volume = 10; //-- playback volume

void sendCommand(uint8_t command, uint8_t data) {
    
    char t[] = {0x7E, 0xFF, 0x06, command, 0x01, 0x00, data, 0xEF};
   
    int i;
        for (i = 0; i < 8; i++){
         
         EUSART1_Write(t[i]);
     }
}
void setVolume(void) {
    //-- write volume to DFPlayer
    //-- write to DFPlayer
    sendCommand(0x06, volume);
}

void incr_Volume(void) {
    sendCommand(0x04, 0x00);
}
void decr_Volume(void) {
    sendCommand(0x05, 0x00);
}
void Play_music(uint8_t trackNumber) {
    sendCommand(0x03, trackNumber);
}
void initPlayer(void) {
    //-- initialize DFPlayer
    volume = 10;

    __delay_ms(2000); //-- delay to give the DFPlayer time to boot
    setVolume();
}