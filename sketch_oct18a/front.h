#ifndef __front_H__
#define __front_H__
#include "variables.h"




void front(){
        for(int l = 0;l<=8;l++){

    digitalWrite(layers[0],0);
    digitalWrite(layers[1],0);
    digitalWrite(layers[2],0);
    digitalWrite(layers[3],0);
    digitalWrite(layers[4],0);
    digitalWrite(layers[5],0);
    digitalWrite(layers[6],0);
    digitalWrite(layers[7],0);

    digitalWrite(latchPin1,0);
    shiftOut(dataPin1,clockPin1,LSBFIRST,myByte1);
    digitalWrite(latchPin1,1);
    digitalWrite(latchPin2,0);
    shiftOut(dataPin2,clockPin2,LSBFIRST,myByte1);
    digitalWrite(latchPin2,1);
    digitalWrite(latchPin3,0);
    shiftOut(dataPin3,clockPin3,LSBFIRST,myByte1);
    digitalWrite(latchPin3,1);
    digitalWrite(latchPin4,0);
    shiftOut(dataPin4,clockPin4,LSBFIRST,myByte1);
    digitalWrite(latchPin4,1);
    digitalWrite(latchPin5,0);
    shiftOut(dataPin5,clockPin5,LSBFIRST,myByte1);
    digitalWrite(latchPin5,1);
    digitalWrite(latchPin6,0);
    shiftOut(dataPin6,clockPin6,LSBFIRST,myByte1);
    digitalWrite(latchPin6,1);
    digitalWrite(latchPin7,0);
    shiftOut(dataPin7,clockPin7,LSBFIRST,myByte1);
    digitalWrite(latchPin7,1);
    digitalWrite(latchPin8,0);
    shiftOut(dataPin8,clockPin8,LSBFIRST,myByte1);
    digitalWrite(latchPin8,1);

    myByte1 = myByte1/2;
    delay(150);
        }
       myByte1 =0b10000000;     
    }
  

#endif


