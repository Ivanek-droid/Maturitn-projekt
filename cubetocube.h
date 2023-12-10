#ifndef __cubetocube_H__
#define __cubetocube_H__
#include "variables.h"
#include "cube8.h"
#include "cube7.h"
#include "cube6.h"
#include "cube5.h"
#include "cube4.h"
#include "cube3.h"
#include "cube2.h"
#include "cube1.h"

const unsigned long interval = 2000;
unsigned long  prev = 0;
const unsigned long interval1 = 2000;
unsigned long  prev1 = 0;
int cubecount = 0;
int state =1;
 unsigned long start = millis();


void kostkatokostka(){
 



while(state == 1){
   start = millis();
  if(start - prev >= interval){
    start = 0;   
    state = 0;
  }
    kostka8();
}
while(state ==0){

  if(start - prev1 >= interval){
    start = 0;
    state = 1;
  }
    kostka7();
}

}
#endif