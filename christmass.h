#ifndef __christmass_H__
#define __christmass_H__
#include "variables.h"



    void christmass(){
   
        for(int l = 144;l>=0;l = l-12){
         for(int i = 0;i <=12;i++){

    digitalWrite(layers[0],0);
    digitalWrite(layers[1],0);
    digitalWrite(layers[2],0);
    digitalWrite(layers[3],0);
    digitalWrite(layers[4],0);
    digitalWrite(layers[5],0);
    digitalWrite(layers[6],0);
    digitalWrite(layers[7],0);

    myByte = B10101010;

    digitalWrite(latchPin1,0);
    shiftOut(dataPin1,clockPin1,LSBFIRST,myByte);
    digitalWrite(latchPin1,1);
    digitalWrite(latchPin2,0);
    shiftOut(dataPin2,clockPin2,LSBFIRST,myByte);
    digitalWrite(latchPin2,1);
    digitalWrite(latchPin3,0);
    shiftOut(dataPin3,clockPin3,LSBFIRST,myByte);
    digitalWrite(latchPin3,1);
    digitalWrite(latchPin4,0);
    shiftOut(dataPin4,clockPin4,LSBFIRST,myByte);
    digitalWrite(latchPin4,1);
    digitalWrite(latchPin5,0);
    shiftOut(dataPin5,clockPin5,LSBFIRST,myByte);
    digitalWrite(latchPin5,1);
    digitalWrite(latchPin6,0);
    shiftOut(dataPin6,clockPin6,LSBFIRST,myByte);
    digitalWrite(latchPin6,1);
    digitalWrite(latchPin7,0);
    shiftOut(dataPin7,clockPin7,LSBFIRST,myByte);
    digitalWrite(latchPin7,1);
    digitalWrite(latchPin8,0);
    shiftOut(dataPin8,clockPin8,LSBFIRST,myByte);
    digitalWrite(latchPin8,1);
    delay(l);

    flipped = myByte/2;

    digitalWrite(latchPin1,0);
    shiftOut(dataPin1,clockPin1,LSBFIRST,flipped);
    digitalWrite(latchPin1,1);
    digitalWrite(latchPin2,0);
    shiftOut(dataPin2,clockPin2,LSBFIRST,flipped);
    digitalWrite(latchPin2,1);
    digitalWrite(latchPin3,0);
    shiftOut(dataPin3,clockPin3,LSBFIRST,flipped);
    digitalWrite(latchPin3,1);
    digitalWrite(latchPin4,0);
    shiftOut(dataPin4,clockPin4,LSBFIRST,flipped);
    digitalWrite(latchPin4,1);
    digitalWrite(latchPin5,0);
    shiftOut(dataPin5,clockPin5,LSBFIRST,flipped);
    digitalWrite(latchPin5,1);
    digitalWrite(latchPin6,0);
    shiftOut(dataPin6,clockPin6,LSBFIRST,flipped);
    digitalWrite(latchPin6,1);
    digitalWrite(latchPin7,0);
    shiftOut(dataPin7,clockPin7,LSBFIRST,flipped);
    digitalWrite(latchPin7,1);
    digitalWrite(latchPin8,0);
    shiftOut(dataPin8,clockPin8,LSBFIRST,flipped);
    digitalWrite(latchPin8,1);
    delay(l);

    }
    }
    }

#endif


