#include "Robot.h"

#define OFF  0
#define ON   1

char Power = ON ;

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
  
 if(PIR==0 && Power ==ON){
         ActionRobot(240); // POWER OFF
         Power = OFF;  
         Serial.println("POWER OFF");  
   }

  else if(PIR == 1 && Power==OFF) {
         ActionRobot(241); //POWER ON
         Power = ON;  
         Serial.println("POWER ON");                      
   }
  

  if(Power==ON) {
     ActionRobot(18);
     ActionRobot(19);   
  }     
}
