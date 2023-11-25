/*/////////////////////////////////////////////////////////////////////////////include/////////////////////////////////////////////////////////////////////*/

#include "sign.h"
#include "abc.h"
#include "ascii.h"
#include "full.h"
#include "none.h"
#include "pivo.h"
#include "num.h"
#include "layerall.h"


#include "variables.h"


/*/////////////////////////////////////////////////////////////////////////////include/////////////////////////////////////////////////////////////////////*/
void setup(){

  Serial.begin(9600);

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
  delay(1000);
  Serial.println("Led cube startuje");
}

void loop(){
  /*
if(Serial.available()>0){
  income = Serial.read();
  Serial.println(income);

  if(slovo == '0'){
    none();
  }
  if(slovo == '1'){
    full();
  }
  if(slovo == 'Z'){
    Serial.println(slovo);
   
    ascii();
  }



}
*/


  while (Serial.available() == 0) {}     //wait for data available
  slovo = Serial.readString();  //read until timeout



  if (slovo == "off") {
    none();

  } 
  if (slovo == "on") {
    full();

  } 

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
}