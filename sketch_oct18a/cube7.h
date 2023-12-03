#ifndef __cube7_H__
#define __cube7_H__
#include "variables.h"



void kostka7(){

for(int j = 0;j<=2;j++){             //pocet prvku, ktere se maji printovat
 for (int k = 0; k <= 2; k++) {       //poradi steny                       
 //  for (int l = 0; l <= 4; l++) {   //casovy delay                           muzu zmenit
     for (int i = 0; i <= 7; i++) {   //prepinani radku, aby to bylo plynule   nemenit

   switch(j){
    case 1:
    currentElement = cube71[i];
    break;
    case 2:
    anotherelement = cube72[i];
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

    digitalWrite(latchPin7,0);
    shiftOut(dataPin7,clockPin7,LSBFIRST,currentElement);
    digitalWrite(latchPin7,1);

    digitalWrite(latchPin7,0);
    shiftOut(dataPin7,clockPin7,LSBFIRST,nott);
    digitalWrite(latchPin7,1);

    
    break;
    case 2:
    digitalWrite(latchPin2,0);
    shiftOut(dataPin2,clockPin2,LSBFIRST,anotherelement);
    digitalWrite(latchPin2,1);

    digitalWrite(latchPin2,0);
    shiftOut(dataPin2,clockPin2,LSBFIRST,nott);
    digitalWrite(latchPin2,1);

    digitalWrite(latchPin3,0);
    shiftOut(dataPin3,clockPin3,LSBFIRST,anotherelement);
    digitalWrite(latchPin3,1);

    digitalWrite(latchPin3,0);
    shiftOut(dataPin3,clockPin3,LSBFIRST,nott);
    digitalWrite(latchPin3,1);
  
    digitalWrite(latchPin4,0);
    shiftOut(dataPin4,clockPin4,LSBFIRST,anotherelement);
    digitalWrite(latchPin4,1);

    digitalWrite(latchPin4,0);
    shiftOut(dataPin4,clockPin4,LSBFIRST,nott);
    digitalWrite(latchPin4,1);
  
    digitalWrite(latchPin5,0);
    shiftOut(dataPin5,clockPin5,LSBFIRST,anotherelement);
    digitalWrite(latchPin5,1);

    digitalWrite(latchPin5,0);
    shiftOut(dataPin5,clockPin5,LSBFIRST,nott);
    digitalWrite(latchPin5,1);
    
    digitalWrite(latchPin6,0);
    shiftOut(dataPin6,clockPin6,LSBFIRST,anotherelement);
    digitalWrite(latchPin6,1);

    digitalWrite(latchPin6,0);
    shiftOut(dataPin6,clockPin6,LSBFIRST,nott);
    digitalWrite(latchPin6,1);
   
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
//}
}
}


#endif