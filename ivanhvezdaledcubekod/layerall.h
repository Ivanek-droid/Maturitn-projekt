#ifndef __layerall_H__
#define __layerall_H__
#include "variables.h"

int layeralldelay = 500;

void layerall(){
myByte = B00000000;
myByte1 = B00000000;


    digitalWrite(layers[0],0);
    digitalWrite(layers[1],0);
    digitalWrite(layers[2],0);
    digitalWrite(layers[3],0);
    digitalWrite(layers[4],0);
    digitalWrite(layers[5],0);
    digitalWrite(layers[6],0);
    digitalWrite(layers[7],0);


          for(int l = 0;l<=8;l++){
            digitalWrite(latchPin3,0);
            shiftOut(dataPin3,clockPin3,LSBFIRST,myByte);
            digitalWrite(latchPin3,1);
            delay(layeralldelay);
            myByte = myByte/2;
          }
          

            




}

#endif