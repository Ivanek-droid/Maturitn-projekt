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


  if(Serial.available() > 0) {   //wait for data available
  Serial.println("start");
  slovo = Serial.readString();  //read until timeout
  Serial.println(slovo);

/*****************************************************************************************************/
  //funkce fullmode

  if(slovo == "fullmode"){
    while(true){
          slovo = Serial.readString(); 

      while(slovo == "fullzap"){
          slovo = Serial.readString(); 
 if(slovo == "fullvyp"){
        break;
      }         

            kostkatokostka(); //-----------1
 if(slovo == "fullvyp"){
        break;
      }
            none();
             if(slovo == "fullvyp"){
        break;
      }
            delay(delayfulltime);
 if(slovo == "fullvyp"){
        break;
      }
            full();           //-----------2
 if(slovo == "fullvyp"){
        break;
      }
            none();
             if(slovo == "fullvyp"){
        break;
      }
            delay(delayfulltime);
 if(slovo == "fullvyp"){
        break;
      }
            kostkatokostka(); //-----------1
 if(slovo == "fullvyp"){
        break;
      }
            none();
             if(slovo == "fullvyp"){
        break;
      }
            delay(delayfulltime);
 if(slovo == "fullvyp"){
        break;
      }
            full();           //-----------2
 if(slovo == "fullvyp"){
        break;
      }
            none();
             if(slovo == "fullvyp"){
        break;
      }
            delay(delayfulltime);

            break;
      if(slovo == "fullvyp"){
        break;
      }
      }
      if(slovo == "zpet"){
        break;
      }
    }
  }

/*****************************************************************************************************/
  //funkce rychly vyber
  if(slovo == "rychly"){
      long intervalnahoda = 12000;
      long currentnahoda = millis();
      long prevnahoda = 0;
      int stavnahoda = 5454516;
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
         stavnahoda = 0;
         while(stavnahoda == 0){
          currentnahoda = millis();
          if(currentnahoda - prevnahoda>= intervalnahoda){
            prevnahoda = currentnahoda;
            stavnahoda = 65464644;
            break;
  }
    kostka1();
}

         none();
       }
       if(slovo =="cube2"){
         none();
         stavnahoda = 0;
         while(stavnahoda == 0){
          currentnahoda = millis();
          if(currentnahoda - prevnahoda>= intervalnahoda){
            prevnahoda = currentnahoda;
            stavnahoda = 65464644;
            break;
  }
    kostka2();
}

         none();

       }
       if(slovo =="cube3"){
         none();
         stavnahoda = 0;
         while(stavnahoda == 0){
          currentnahoda = millis();
          if(currentnahoda - prevnahoda>= intervalnahoda){
            prevnahoda = currentnahoda;
            stavnahoda = 65464644;
            break;
  }
    kostka3();
}

         none();

       }
       if(slovo =="cube4"){
         none();
         stavnahoda = 0;
         while(stavnahoda == 0){
          currentnahoda = millis();
          if(currentnahoda - prevnahoda>= intervalnahoda){
            prevnahoda = currentnahoda;
            stavnahoda = 65464644;
            break;
  }
    kostka4();
}

         none();

       }
       if(slovo =="cube5"){
         none();
         stavnahoda = 0;
         while(stavnahoda == 0){
          currentnahoda = millis();
          if(currentnahoda - prevnahoda>= intervalnahoda){
            prevnahoda = currentnahoda;
            stavnahoda = 65464644;
            break;
  }
    kostka5();
}

         none();

       }
       if(slovo =="cube6"){
         none();
         stavnahoda = 0;
         while(stavnahoda == 0){
          currentnahoda = millis();
          if(currentnahoda - prevnahoda>= intervalnahoda){
            prevnahoda = currentnahoda;
            stavnahoda = 65464644;
            break;
  }
    kostka6();
}

         none();
       }
       if(slovo =="cube7"){
         none();
         stavnahoda = 0;
         while(stavnahoda == 0){
          currentnahoda = millis();
          if(currentnahoda - prevnahoda>= intervalnahoda){
            prevnahoda = currentnahoda;
            stavnahoda = 65464644;
            break;
  }
    kostka7();
}

         none();
       }
       if(slovo =="cube8"){
         none();
         stavnahoda = 0;
         while(stavnahoda == 0){
          currentnahoda = millis();
          if(currentnahoda - prevnahoda>= intervalnahoda){
            prevnahoda = currentnahoda;
            stavnahoda = 65464644;
            break;
  }
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
         none();

       }
       if(slovo =="temp2"){
         none();
         temp2();
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
         stavnahoda = 0;
         while(stavnahoda == 0){
          currentnahoda = millis();
          if(currentnahoda - prevnahoda>= intervalnahoda){
            prevnahoda = currentnahoda;
            stavnahoda = 65464644;
            break;
  }
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
       if(slovo =="layerall"){
         none();
         layerall();
         none();

       }
       if(slovo =="ball"){
         none();
          stavnahoda = 0;
         while(stavnahoda == 0){
          currentnahoda = millis();
          if(currentnahoda - prevnahoda>= intervalnahoda){
            prevnahoda = currentnahoda;
            stavnahoda = 65464644;
            break;
  }
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
      long intervalnahoda = 12000;
      long currentnahoda = millis();
      long prevnahoda = 0;
      int stavnahoda = 5454516;
       if(slovo == "zpet"){
         break;
       }
      if(slovo == "nahodazap"){
  
      prochazenicisel = random(1,30); 
      delay(300);
      Serial.println(prochazenicisel);
      delay(300);

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
        break;
        case 4:
          none();
          pivo();
          none();
        break;
        case 5:
          none();
          num();
          none();
        break;
        case 6:
          none();
         while(true){
          currentnahoda = millis();
          if(currentnahoda - prevnahoda>= intervalnahoda){
            prevnahoda = currentnahoda;
            stavnahoda = 65464644;
            break;
  }
    kostka1();
}
          none();
        break;
        case 7:
          none();
         while(true){
          currentnahoda = millis();
          if(currentnahoda - prevnahoda>= intervalnahoda){
            prevnahoda = currentnahoda;
            stavnahoda = 65464644;
            break;
  }
    kostka2();
}
          none();
        break;
        case 8:
          none();
         while(true){
          currentnahoda = millis();
          if(currentnahoda - prevnahoda>= intervalnahoda){
            prevnahoda = currentnahoda;
            stavnahoda = 65464644;
            break;
  }
    kostka3();
}
          none();
        break;
        case 9:
          none();
         while(true){
          currentnahoda = millis();
          if(currentnahoda - prevnahoda>= intervalnahoda){
            prevnahoda = currentnahoda;
            stavnahoda = 65464644;
            break;
  }
    kostka4();
}
          none();
        break;
        case 10:
          none();
         while(true){
          currentnahoda = millis();
          if(currentnahoda - prevnahoda>= intervalnahoda){
            prevnahoda = currentnahoda;
            stavnahoda = 65464644;
            break;
  }
    kostka5();
}
          none();
        break;
        case 11:
          none();
         while(true){
          currentnahoda = millis();
          if(currentnahoda - prevnahoda>= intervalnahoda){
            prevnahoda = currentnahoda;
            stavnahoda = 65464644;
            break;
  }
    kostka6();
}
          none();
        break;
        case 12:
          none();
           
         while(true){
          currentnahoda = millis();
          if(currentnahoda - prevnahoda>= intervalnahoda){
            prevnahoda = currentnahoda;
            stavnahoda = 65464644;
            break;
  }
    kostka7();
}
          none();
        break;
        case 13:
          none();
         while(true){
          currentnahoda = millis();
          if(currentnahoda - prevnahoda>= intervalnahoda){
            prevnahoda = currentnahoda;
            stavnahoda = 65464644;
            break;
  }
    kostka8();
}
          none();
        break;
        case 14:
          none();
          kostkatokostka();
          none();
        break;
        case 15:
          none();
         while(true){
          currentnahoda = millis();
          if(currentnahoda - prevnahoda>= intervalnahoda){
            prevnahoda = currentnahoda;
            stavnahoda = 65464644;
            break;
  }
    koule();
}
          none();
        break;
        case 16:
          none();
          layerall();
          none();
        break;
        case 17:
          none();
          temp1();
          none();
        break;
        case 18:
          none();
          temp2();
          none();
        break;
        case 19:
          none();
          date();
          none();
        break;
        case 20:  
          none();
          time();
          none();
        break;
        case 21:
          none();
          xyz();
          none();
        break;
        case 22:
          none();
          snake__layered();
          none();
        break;
        case 23:
          none();
          front();
          none();
        break;
        case 24:
          none();
          side();
          none();
        break;
        case 25:
          none();
          top();
          none();
        break;
        case 26:
          none();
          christmass();
          none();
        break;
        case 27:
          none();
          stairs();
          none();
        break;
        case 28:
          none();
         while(true){
          currentnahoda = millis();
          if(currentnahoda - prevnahoda>= intervalnahoda){
            prevnahoda = currentnahoda;
            stavnahoda = 65464644;
            break;
  }
    cross();
}
          none();
        break;
        case 29:
          none();
          rain();
          none();
        break;
        case 30:
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
/*
      slovo = Serial.readString(); 
      Serial.println(slovo);

      kostkatokostka(); //-----------1

      none();
      delay(delayfulltime);

      full();           //-----------2

      none();
      delay(delayfulltime);

      cross(); //-----------3

      none();
      delay(delayfulltime);

      kostka1(); //-----------4

      none();
      delay(delayfulltime);

      num(); //-----------5

      none();
      delay(delayfulltime);

      kostka2(); //-----------6

      none();
      delay(delayfulltime);

      front(); //-----------7

      none();
      delay(delayfulltime);

      kostka3(); //-----------8

      none();
      delay(delayfulltime);

      side(); //-----------9

      none();
      delay(delayfulltime);

      kostka4(); //-----------10

      none();
      delay(delayfulltime);

      top(); //-----------11

      none();
      delay(delayfulltime);

      kostka5(); //-----------12

      none();
      delay(delayfulltime);

      christmass(); //-----------13

      none();
      delay(delayfulltime);

      kostka6(); //-----------14

      none();
      delay(delayfulltime);

      stairs(); //-----------15

      none();
      delay(delayfulltime);

      kostka7(); //-----------16

      none();
      delay(delayfulltime);

      temp1(); //-----------17

      none();
      delay(delayfulltime);

      kostka8(); //-----------18

      none();
      delay(delayfulltime);

      temp2(); //-----------19
      
      none();
      delay(delayfulltime);

      snake__layered(); //-----------20

      none();
      delay(delayfulltime);

      xyz(); //-----------21

      none();
      delay(delayfulltime);

      layerall(); //-----------22

      none();
      delay(delayfulltime);

      pivo(); //-----------23

      none();
      delay(delayfulltime);

      abc(); //-----------24

      none();
      delay(delayfulltime);

      sign(); //-----------25

      none();
      delay(delayfulltime);

      time(); //-----------26

      none();
      delay(delayfulltime);

      date(); //-----------27

      none();
      delay(delayfulltime);

      rain(); //-----------28

      none();
      delay(delayfulltime);

      fall(); //-----------29

      none();
      delay(delayfulltime);

      koule(); //-----------30

      none();
      delay(delayfulltime);


*/


