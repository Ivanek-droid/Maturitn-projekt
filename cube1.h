#ifndef __cube1_H__
#define __cube1_H__
#include "variables.h"

void kostka1(){

byte cube1__byte = 0b10000000;

 
    
    digitalWrite(latchPin1,0);
    shiftOut(dataPin1,clockPin1,LSBFIRST,cube1__byte);
    digitalWrite(latchPin1,1);
   
    digitalWrite(latchPin2,0);
    shiftOut(dataPin2,clockPin2,LSBFIRST,nott);
    digitalWrite(latchPin2,1);
    
    digitalWrite(latchPin3,0);
    shiftOut(dataPin3,clockPin3,LSBFIRST,nott);
    digitalWrite(latchPin3,1);

    digitalWrite(latchPin4,0);
    shiftOut(dataPin4,clockPin4,LSBFIRST,nott);
    digitalWrite(latchPin4,1);

    digitalWrite(latchPin5,0);
    shiftOut(dataPin5,clockPin5,LSBFIRST,nott);
    digitalWrite(latchPin5,1);

    digitalWrite(latchPin6,0);
    shiftOut(dataPin6,clockPin6,LSBFIRST,nott);
    digitalWrite(latchPin6,1);

    digitalWrite(latchPin7,0);
    shiftOut(dataPin7,clockPin7,LSBFIRST,nott);
    digitalWrite(latchPin7,1);

    digitalWrite(latchPin8,0);
    shiftOut(dataPin8,clockPin8,LSBFIRST,nott);
    digitalWrite(latchPin8,1);
 
    digitalWrite(layers[0],1);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],0);
}

#endif