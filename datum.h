#ifndef __time_H__
#define __time_H__
#include "variables.h"
#include "virtuabotixRTC.h"


virtuabotixRTC myRTC(3, 4, 5);



void date(){
// seconds, minutes, hours, day of the week, day of the month, month, year
//myRTC.setDS1302Time(18, 28, 21, 6, 2, 12, 2023);
 myRTC.updateTime();

  int int_mesic = myRTC.month;
  int int_rok = myRTC.year;
  int int_hodiny = myRTC.hours;
  int int_minuty = myRTC.minutes;
  int int_den = myRTC.dayofmonth;

  String str_rok = String(int_rok);
  String str_den = String(int_den);
  String str_mesic = String(int_mesic);
  String str_hodiny = String(int_hodiny);
  String str_minuty = String(int_minuty);

String str_datum = str_den + "." + str_mesic + "." + str_rok + "";

for (int i = 0; i < slovo.length(); i++) {
  char znak = slovo.charAt(i);

}

for(int j = 0;j< str_datum.length();j++){
    char znak = str_datum.charAt(j);
 for (int k = 0; k <= 7; k++) {
   for (int l = 0; l <= 40; l++) {
     for (int i = 0; i <= 7; i++) {

   switch(znak){
    case '0':
    currentElement = zero[i];
    break;
    case '1':
    currentElement = one[i];
    break;
    case '2':
    currentElement = two[i];
    break;
    case '3':
    currentElement = three[i];
    break;
    case '4':
    currentElement = four[i];
    break;
    case '5':
    currentElement = five[i];
    break;
    case '6':
    currentElement = six[i];
    break;
    case '7':
    currentElement = seven[i];
    break;
    case '8':
    currentElement = eight[i];
    break;
    case '9':
    currentElement = nine[i];
    break;
    case '.':
    currentElement = tecka[i];
    break;
  }
  switch(k){
    case 0:
     
    digitalWrite(latchPin1,0);
    shiftOut(dataPin1,clockPin1,LSBFIRST,currentElement);
    digitalWrite(latchPin1,1);
    
     digitalWrite(latchPin1,0);
    shiftOut(dataPin1,clockPin1,LSBFIRST,nott);
    digitalWrite(latchPin1,1);
    break;
    case 1:
    digitalWrite(latchPin2,0);
    shiftOut(dataPin2,clockPin2,LSBFIRST,currentElement);
    digitalWrite(latchPin2,1);

    digitalWrite(latchPin2,0);
    shiftOut(dataPin2,clockPin2,LSBFIRST,nott);
    digitalWrite(latchPin2,1);
    break;
    case 2:
    digitalWrite(latchPin3,0);
    shiftOut(dataPin3,clockPin3,LSBFIRST,currentElement);
    digitalWrite(latchPin3,1);

    digitalWrite(latchPin3,0);
    shiftOut(dataPin3,clockPin3,LSBFIRST,nott);
    digitalWrite(latchPin3,1);
    break;
    case 3:
    digitalWrite(latchPin4,0);
    shiftOut(dataPin4,clockPin4,LSBFIRST,currentElement);
    digitalWrite(latchPin4,1);

    digitalWrite(latchPin4,0);
    shiftOut(dataPin4,clockPin4,LSBFIRST,nott);
    digitalWrite(latchPin4,1);
    break;
    case 4:
    digitalWrite(latchPin5,0);
    shiftOut(dataPin5,clockPin5,LSBFIRST,currentElement);
    digitalWrite(latchPin5,1);

    digitalWrite(latchPin5,0);
    shiftOut(dataPin5,clockPin5,LSBFIRST,nott);
    digitalWrite(latchPin5,1);
    break;
    case 5:
    digitalWrite(latchPin6,0);
    shiftOut(dataPin6,clockPin6,LSBFIRST,currentElement);
    digitalWrite(latchPin6,1);

    digitalWrite(latchPin6,0);
    shiftOut(dataPin6,clockPin6,LSBFIRST,nott);
    digitalWrite(latchPin6,1);
    break;
    case 6:
    digitalWrite(latchPin7,0);
    shiftOut(dataPin7,clockPin7,LSBFIRST,currentElement);
    digitalWrite(latchPin7,1);

    digitalWrite(latchPin7,0);
    shiftOut(dataPin7,clockPin7,LSBFIRST,nott);
    digitalWrite(latchPin7,1);
    break;
    case 7:
    digitalWrite(latchPin8,0);
    shiftOut(dataPin8,clockPin8,LSBFIRST,currentElement);
    digitalWrite(latchPin8,1);

    digitalWrite(latchPin8,0);
    shiftOut(dataPin8,clockPin8,LSBFIRST,nott);
    digitalWrite(latchPin8,1);
    break;

  }
    switch(i){
    case 0:
    digitalWrite(layers[0],0);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],1);
    break;
    case 1:
digitalWrite(layers[0],1);
    digitalWrite(layers[1],0);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],1);
    break;
    case 2:
digitalWrite(layers[0],1);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],0);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],1);
    break;
    case 3:
digitalWrite(layers[0],1);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],0);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],1);
    break;
    case 4:
digitalWrite(layers[0],1);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],0);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],1);
    break;
    case 5:
digitalWrite(layers[0],1);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],0);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],1);
    break;
    case 6:
digitalWrite(layers[0],1);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],0);
    digitalWrite(layers[7],1);
    break;
    case 7:
digitalWrite(layers[0],1);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],0);
    break;

}
    //delay(5);
  }
} 
}
}

}





#endif