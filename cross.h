#ifndef __cross_H__
#define __cross_H__
#include "variables.h"



 void cross(){

    digitalWrite(layers[0],0);
    digitalWrite(layers[1],0);
    digitalWrite(layers[2],0);
    digitalWrite(layers[3],0);
    digitalWrite(layers[4],0);
    digitalWrite(layers[5],0);
    digitalWrite(layers[6],0);
    digitalWrite(layers[7],0);

    leds1s = B10000001;

    digitalWrite(latchPin1,0);
    shiftOut(dataPin1,clockPin1,LSBFIRST,leds1s);
    digitalWrite(latchPin1,1);

      //delay(Mid);
      leds2s = B01000010;
    digitalWrite(latchPin2,0);
    shiftOut(dataPin2,clockPin2,LSBFIRST,leds2s);
    digitalWrite(latchPin2,1);

      //delay(Mid);
      leds3s = B00100100;
    digitalWrite(latchPin3,0);
    shiftOut(dataPin3,clockPin3,LSBFIRST,leds3s);
    digitalWrite(latchPin3,1);

      //delay(Mid);
      leds4s = B00011000;
    digitalWrite(latchPin4,0);
    shiftOut(dataPin4,clockPin4,LSBFIRST,leds4s);
    digitalWrite(latchPin4,1);

      //delay(Mid); 
      leds5s = B00011000;
    digitalWrite(latchPin5,0);
    shiftOut(dataPin5,clockPin5,LSBFIRST,leds5s);
    digitalWrite(latchPin5,1);

      //delay(Mid);
      leds6s = B00100100;
    digitalWrite(latchPin6,0);
    shiftOut(dataPin6,clockPin6,LSBFIRST,leds6s);
    digitalWrite(latchPin6,1);

      //delay(Mid);
      leds7s = B01000010;
    digitalWrite(latchPin7,0);
    shiftOut(dataPin7,clockPin7,LSBFIRST,leds7s);
    digitalWrite(latchPin7,1);

      //delay(Mid); 
      leds8s = B10000001;
    digitalWrite(latchPin8,0);
    shiftOut(dataPin8,clockPin8,LSBFIRST,leds8s);
    digitalWrite(latchPin8,1);

      //delay(Mid);
  }


   

#endif


