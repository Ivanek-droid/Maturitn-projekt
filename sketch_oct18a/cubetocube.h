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

long interval = 200;
long current = millis();
long prev = 0;
int stav = 8;

void kostkatokostka(){

for(int i = 0;i<=8;i++){
  /*----------------------------------------------------------8*/
while(stav == 8){
  current = millis();
  if(current - prev>= interval){
    prev = current;
    stav=7;
    break;
  }
    kostka8();
}
/*----------------------------------------------------------7*/
while(stav == 7){
  current = millis();
  if(current -  prev>= interval){
    prev = current;
    stav= 6;
    break;
  }
    kostka7();
}
/*----------------------------------------------------------6*/
while(stav == 6){
  current = millis();
  if(current - prev>= interval){
    prev = current;
    stav=5;
    break;
  }
    kostka6();
}
/*----------------------------------------------------------5*/
while(stav == 5){
  current = millis();
  if(current -  prev>= interval){
    prev = current;
    stav= 4;
    break;
  }
    kostka5();
}
/*----------------------------------------------------------4*/
while(stav == 4){
  current = millis();
  if(current - prev>= interval){
    prev = current;
    stav=3;
    break;
  }
    kostka4();
}
/*----------------------------------------------------------3*/
while(stav == 3){
  current = millis();
  if(current -  prev>= interval){
    prev = current;
    stav= 2;
    break;
  }
    kostka3();
}
/*----------------------------------------------------------2*/
while(stav == 2){
  current = millis();
  if(current - prev>= interval){
    prev = current;
    stav=1;
    break;
  }
    kostka2();
}
/*----------------------------------------------------------1*/
while(stav == 1){
  current = millis();
  if(current -  prev>= interval){
    prev = current;
    stav= 2;
    break;
  }
    kostka1();
}
/*----------------------------------------------------------2*/
while(stav == 2){
  current = millis();
  if(current -  prev>= interval){
    prev = current;
    stav= 3;
    break;
  }
    kostka2();
}
/*----------------------------------------------------------3*/
while(stav == 3){
  current = millis();
  if(current -  prev>= interval){
    prev = current;
    stav= 4;
    break;
  }
    kostka3();
}
/*----------------------------------------------------------4*/
while(stav == 4){
  current = millis();
  if(current -  prev>= interval){
    prev = current;
    stav= 5;
    break;
  }
    kostka4();
}
/*----------------------------------------------------------5*/
while(stav == 5){
  current = millis();
  if(current -  prev>= interval){
    prev = current;
    stav= 6;
    break;
  }
    kostka5();
}
/*----------------------------------------------------------6*/
while(stav == 6){
  current = millis();
  if(current -  prev>= interval){
    prev = current;
    stav= 7;
    break;
  }
    kostka6();
}
/*----------------------------------------------------------7*/
while(stav == 7){
  current = millis();
  if(current -  prev>= interval){
    prev = current;
    stav= 8;
    break;
  }
    kostka7();
}


}
}
#endif