#include "Robot.h"

#define OFF  0
#define ON   1

char PWR = ON ;

void setup() {
  
  Serial.begin(9600);
  BT.begin(115200);

  pinMode(4,INPUT); //4 = PIR
  ActionRobot(241);
}

void loop() {
 
  int PIR ;

  PIR = digitalRead(4);
  if(PIR==1)   Serial.println("PIR Sensing");
  else         Serial.println("PIR NOT Sensing");
  
  
  if(PIR == 1 && PWR==OFF) {
         ActionRobot(241);
         PWR = ON;  
         Serial.println("POWER ON");                      
   }
    
  else if(PIR==0 && PWR ==ON){
         ActionRobot(240);
         PWR = OFF;  
         Serial.println("POWER OFF");  
    
   }

  if(PWR==ON) {
     ActionRobot(18);
     ActionRobot(19);
      
  }
  
     
}
