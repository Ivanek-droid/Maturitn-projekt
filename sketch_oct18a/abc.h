#ifndef __abc_H__
#define __abc_H__
#include "variables.h"


void abc(){


for(int j = 0;j<=28;j++){
 for (int k = 0; k <= 7; k++) {
   for (int l = 0; l <= 40; l++) {
     for (int i = 0; i <= 7; i++) {

   switch(j){
    case 1:
    currentElement = A[i];
    break;
    case 2:
    currentElement = B[i];
    break;
    case 3:
    currentElement = C[i];
    break;
    case 4:
    currentElement = D[i];
    break;
    case 5:
    currentElement = E[i];
    break;
    case 6:
    currentElement = F[i];
    break;
    case 7:
    currentElement = G[i];
    break;
    case 8:
    currentElement = H[i];
    break;
    case 9:
    currentElement = I[i];
    break;
    case 10:
    currentElement = J[i];
    break;
    case 11:
    currentElement = K[i];
    break;
    case 12:
    currentElement = L[i];
    break;
    case 13:
    currentElement = M[i];
    break;
    case 14:
    currentElement = N[i];
    break;
    case 15:
    currentElement = O[i];
    break;
    case 16:
    currentElement = P[i];
    break;
    case 17:
    currentElement = Q[i];
    break;
    case 18:
    currentElement = R[i];
    break;
    case 19:
    currentElement = S[i];
    break;
    case 20:
    currentElement = T[i];
    break;
    case 21:
    currentElement = U[i];
    break;
    case 22:
    currentElement = V[i];
    break;
    case 23:
    currentElement = W[i];
    break;
    case 24:
    currentElement = X[i];
    break;
    case 25:
    currentElement = Y[i];
    break;
    case 26:
    currentElement = Z[i];
    break;
    case 27:
    currentElement = zero[i];
    break;
    case 28:
    currentElement = one[i];
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