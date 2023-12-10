#ifndef __snakelayered_H__
#define __snakelayered_H__
#include "variables.h"


void snake__layered(){
    leds__none = B00000000;

    digitalWrite(latchPin1,0);
    shiftOut(dataPin1,clockPin1,LSBFIRST,leds__none);
    digitalWrite(latchPin1,1);
    digitalWrite(latchPin2,0);
    shiftOut(dataPin2,clockPin2,LSBFIRST,leds__none);
    digitalWrite(latchPin2,1);
    digitalWrite(latchPin3,0);
    shiftOut(dataPin3,clockPin3,LSBFIRST,leds__none);
    digitalWrite(latchPin3,1);
    digitalWrite(latchPin4,0);
    shiftOut(dataPin4,clockPin4,LSBFIRST,leds__none);
    digitalWrite(latchPin4,1);
    digitalWrite(latchPin5,0);
    shiftOut(dataPin5,clockPin5,LSBFIRST,leds__none);
    digitalWrite(latchPin5,1);
    digitalWrite(latchPin6,0);
    shiftOut(dataPin6,clockPin6,LSBFIRST,leds__none);
    digitalWrite(latchPin6,1);
    digitalWrite(latchPin7,0);
    shiftOut(dataPin7,clockPin7,LSBFIRST,leds__none);
    digitalWrite(latchPin7,1);
    digitalWrite(latchPin8,0);
    shiftOut(dataPin8,clockPin8,LSBFIRST,leds__none);
    digitalWrite(latchPin8,1);

    digitalWrite(layers[0],1);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],1);

    int myDelay = 50;

    for(int i = 0;i<=7;i++){

        digitalWrite(layers[i],0);
          myByte = B10000000;
          for(int l = 0;l<=8;l++){
            digitalWrite(latchPin1,0);
            shiftOut(dataPin1,clockPin1,LSBFIRST,myByte);
            digitalWrite(latchPin1,1);
            delay(myDelay);
            myByte = myByte/2;
          }
          myByte = B10000000;
          for(int k = 0;k<=8;k++){
            digitalWrite(latchPin2,0);
            shiftOut(dataPin2,clockPin2,LSBFIRST,myByte);
            digitalWrite(latchPin2,1);
            delay(myDelay);
            myByte = myByte/2;
          }
          myByte = B10000000;
          for(int l = 0;l<=8;l++){
            digitalWrite(latchPin3,0);
            shiftOut(dataPin3,clockPin3,LSBFIRST,myByte);
            digitalWrite(latchPin3,1);
            delay(myDelay);
            myByte = myByte/2;
          }
          myByte = B10000000;
          for(int l = 0;l<=8;l++){
            digitalWrite(latchPin4,0);
            shiftOut(dataPin4,clockPin4,LSBFIRST,myByte);
            digitalWrite(latchPin4,1);
            delay(myDelay);
            myByte = myByte/2;
          }
          myByte = B10000000;
          for(int l = 0;l<=8;l++){
            digitalWrite(latchPin5,0);
            shiftOut(dataPin5,clockPin5,LSBFIRST,myByte);
            digitalWrite(latchPin5,1);
            delay(myDelay);
            myByte = myByte/2;
          }
          myByte = B10000000;
          for(int l = 0;l<=8;l++){
            digitalWrite(latchPin6,0);
            shiftOut(dataPin6,clockPin6,LSBFIRST,myByte);
            digitalWrite(latchPin6,1);
            delay(myDelay);
            myByte = myByte/2;
          }
           myByte = B10000000;
          for(int l = 0;l<=8;l++){
            digitalWrite(latchPin7,0);
            shiftOut(dataPin7,clockPin7,LSBFIRST,myByte);
            digitalWrite(latchPin7,1);
            delay(myDelay);
            myByte = myByte/2;
          }
          myByte = B10000000;
          for(int l = 0;l<=8;l++){
            digitalWrite(latchPin8,0);
            shiftOut(dataPin8,clockPin8,LSBFIRST,myByte);
            digitalWrite(latchPin8,1);
            delay(myDelay);
            myByte = myByte/2;
          }
    }
  }


#endif