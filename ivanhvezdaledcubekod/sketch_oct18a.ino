/*/////////////////////////////////////////////////////////////////////////////include/////////////////////////////////////////////////////////////////////*/

#include "sign.h"
#include "abc.h"
#include "ascii.h"
#include "full.h"
#include "none.h"
#include "pivo.h"
#include "num.h"
#include "temp1.h"
#include "temp2.h"
#include "layerall.h"
#include "celsia.h"
#include "procento.h"
#include "datum.h"
#include "cas.h"
#include "snakelayered.h"
#include "xyz.h"
#include "front.h"
#include "side.h"
#include "christmass.h"
#include "cross.h"
#include "stairs.h"
#include "top.h"
#include "rain.h"
#include "fall.h"
#include "cube8.h"
#include "cube7.h"
#include "cube6.h"
#include "cube5.h"
#include "cube4.h"
#include "cube3.h"
#include "cube2.h"
#include "cube1.h"
#include "cubetocube.h"
#include "ball.h"

#include "variables.h"


/*/////////////////////////////////////////////////////////////////////////////include/////////////////////////////////////////////////////////////////////*/

void setup(){

  Serial.begin(9600);

  pinMode(led_start, OUTPUT);
  
  randomSeed(analogRead(A1));

  for(int i = 0; i <=24;i++){
    pinMode(pins[i],OUTPUT);
    delay(5);
  }

  for(int i  = 0;i <=layersNum;i++){
    pinMode(layers[i],OUTPUT);
    delay(5);
  }
  for(int i  = 0;i <=layersNum;i++){
    digitalWrite(layers[i],1);
    delay(5);
  }

  delay(50);
  Serial.println("Led cube startuje");
  delay(50);
  none();
  delay(50);
  //sign();
  delay(50);

}

void loop(){

 currentmain = millis();
  if(currentmain-prevmain>intervalmain){
    prevmain = currentmain;
     if (led_state==0) led_state=1; else led_state=0;
    digitalWrite(led_start,led_state);
   }
  if(Serial.available() > 0) {   //wait for data available
  while(true){
  digitalWrite(led_start,1);
  Serial.println("start");
  slovo = Serial.readString();  //read until timeout
  Serial.println(slovo);

/*****************************************************************************************************/
  //funkce rychly vyber
  if(slovo == "rychly"){
    while(true){
       slovo = Serial.readString();
      Serial.println(slovo);

       if(slovo =="num"){
         none();
         num();
         none();

       }
       if(slovo == "zpet"){
         Serial.println("zpet");
         none();
         break;
       }
       if(slovo =="abc"){
         none();
         abc();
         none();

       }
       if(slovo =="pivo"){
         none();
         pivo();
         none();

       }
       if(slovo =="sign"){
         none();
         sign();
         none();

       }
       if(slovo =="rain"){
         none();
         rain();
         none();

       }
       if(slovo =="full"){
         none();
         full();
         delay(5000);   
         none();
       }
       if(slovo =="cube1"){
        none();
          for(int i = 0;i<=200;i++){
            kostka1();
          }
         none();
       }
       if(slovo =="cube2"){
          none();
           for(int i = 0;i<=200;i++){
            kostka2();
          }
          none();
       }
       if(slovo =="cube3"){
         none();
          for(int i = 0;i<=200;i++){
            kostka3();
          }
         none();

       }
       if(slovo =="cube4"){
         none();
          for(int i = 0;i<=200;i++){
            kostka4();
          }
         none();
       }
       if(slovo =="cube5"){
         none();
          for(int i = 0;i<=200;i++){
            kostka5();
          }
         none();
       }
       if(slovo =="cube6"){
         none();
          for(int i = 0;i<=200;i++){
            kostka6();
          }
         none();
       }
       if(slovo =="cube7"){
         none();
          for(int i = 0;i<=200;i++){
            kostka7();
          }
         none();
       }
       if(slovo =="cube8"){
         none();
          for(int i = 0;i<=200;i++){
            kostka8();
          }
         none();
       }
       if(slovo =="cubetocube"){
         none();
         kostkatokostka();
         none();

       }
       if(slovo =="temp1"){
         none();
         temp1();
         cels();
         none();

       }
       if(slovo =="temp2"){
         none();
         temp2();
         procent();
         none();

       }
       if(slovo =="snakelayered"){
         none();
         snake__layered();
         none();
       }
       if(slovo =="xyz"){
         none();
         xyz();
         none();
       }
       if(slovo =="cas"){
         none();
         time();
         none();

       }
       if(slovo =="datum"){
         none();
         date();
         none();

       }
       if(slovo =="front"){
         none();
         front();
         none();

       }
       if(slovo =="side"){
         none();
         side();
         none();

       }
       if(slovo =="top"){
         none();
         top();
         none();
       }
       if(slovo =="christmass"){
         none();
         christmass();
         none();
       }
       if(slovo =="cross"){
         none();
          for(int i = 0;i<=200;i++){
            cross();
          }
         none();
       }
       if(slovo =="stairs"){
         none();
         stairs();
         none();

       }
       if(slovo =="fall"){
         none();
         fall();
         none();

       }
       if(slovo =="ball"){
         none();
          for(int i = 0;i<=200;i++){
            koule();
          }
         none();
       }
     }
   }

/*****************************************************************************************************/
  //funkce nahodne mody
  if(slovo == "nahodny"){
    while(true){
      slovo = Serial.readString();
        
       if(slovo == "zpet"){
         break;
       }
      if(slovo == "nahodazap"){
  
      prochazenicisel = random(1,28); 
      Serial.println(prochazenicisel);

        

            switch(prochazenicisel){
        case 1:
          none();
          abc();
          none();
        break;
        case 2:
          none();
          full();
          delay(5000);
          none();
        break;
        case 3:
          none();
          pivo();
          none();
        break;
        case 4:
          none();
          num();
          none();
        break;
        case 5:
          none();
          for(int i = 0;i<=200;i++){
            kostka1();
          }
         none();
        break;
        case 6:
         none();
          for(int i = 0;i<=200;i++){
            kostka2();
          }
         none();
        break;
        case 7:
          none();
          for(int i = 0;i<=200;i++){
            kostka3();
          }
         none();
        break;
        case 8:
          none();
          for(int i = 0;i<=200;i++){
            kostka4();
          }
         none();
        break;
        case 9:
          none();
          for(int i = 0;i<=200;i++){
            kostka5();
          }
         none();
        break;
        case 10:
          none();
          for(int i = 0;i<=200;i++){
            kostka6();
          }
         none();
        break;
        case 11:
          none();
          for(int i = 0;i<=200;i++){
            kostka7();
          }
         none();
        break;
        case 12:
          none();
          for(int i = 0;i<=200;i++){
            kostka8();
          }
         none();
        break;
        case 13:
          none();
          kostkatokostka();
          none();
        break;
        case 14:
          none();
          for(int i = 0;i<=200;i++){
            koule();
          }
         none();
        break;
        case 15:
          none();
          temp1();
          cels();
          none();
        break;
        case 16:
          none();
          temp2();
          procent();
          none();
        break;
        case 17:
          none();
          date();
          none();
        break;
        case 18:  
          none();
          time();
          none();
        break;
        case 19:
          none();
          xyz();
          none();
        break;
        case 20:
          none();
          snake__layered();
          none();
        break;
        case 21:
          none();
          front();
          none();
        break;
        case 22:
          none();
          side();
          none();
        break;
        case 23:
          none();
          top();
          none();
        break;
        case 24:
          none();
          christmass();
          none();
        break;
        case 25:
          none();
          stairs();
          none();
        break;
        case 26:
          none();
          for(int i = 0;i<=200;i++){
            cross();
          }
         none();
        break;
        case 27:
          none();
          rain();
          none();
        break;
        case 28:
          none();
          fall();
          none();
        break;
      }
    }
  }
  }

/*****************************************************************************************************/
  //funkce on ,off

  if (slovo == "off") {
    none();
  } 
  if (slovo == "on") {
    full();
  } 

/*****************************************************************************************************/
  //funkce ovladani textem,hlasem

  if(slovo == "text"){
    none();
   
while(true){
  slovo = Serial.readString();  //read until timeout
  if(slovo == "zpet"){  
      break;
    }else{
      ascii();
    }
  }
  }
  /*****************************************************************************************************/
}
}
}

