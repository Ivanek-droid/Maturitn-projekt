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

  /*delay(1000);
  Serial.println("Led cube startuje");
  delay(50);
  none();
  delay(50);
  sign();
  delay(50);*/

}

void loop(){


cross();

  if (Serial.available() > 0) {   //wait for data available
  slovo = Serial.readString();  //read until timeout
  Serial.println(slovo);
/*****************************************************************************************************/
  //funkce rychly vyber
  if(slovo == "rychly"){
    while(true){
       slovo = Serial.readString();
       
       if(slovo =="num"){
         none();
         num();
         none();

       }
       if(slovo =="none"){
         none();
         none();
         none();

       }
       if(slovo =="pivo"){
         none();
         pivo();
         none();

       }
       if(slovo =="layerall"){
         none();
         layerall();
         none();

       }
       if(slovo =="sign"){
         none();
         sign();
         none();

       }
       if(slovo =="full"){
         none();
         full();
         none();
       }
       if(slovo =="zpet"){
         none();
         break;
       }
    }

  }

/*****************************************************************************************************/
  //funkce nahodne mody
  if(slovo == "nahodny"){
    while(true){
    slovo = Serial.readString();
    Serial.println("jsem tu");
    for(int i =0;i<=pocetcisel;i++){
       slovo = Serial.readString();
      polecisel[i] = random(1,6);    
      Serial.println(polecisel[i]); 
      delay(50); 
    }
    
     
    for(int i = 0;i<=pocetcisel;i++){
       slovo = Serial.readString();
       prochazenicisel = polecisel[i];
      Serial.println(prochazenicisel);
      switch(prochazenicisel){
        case 1:
          abc();
          none();
        break;
        case 2:
          full();
          none();
        break;
        case 3:
          none();
        break;
        case 4:
          pivo();
          none();
        break;
        case 5:
          num();
          none();
        break;
      }
      delay(50);
    }
  }
  }

/*****************************************************************************************************/
  //funkce rychly vyber


/*****************************************************************************************************/
  //funkce on off

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
