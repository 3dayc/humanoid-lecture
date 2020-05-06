#include "Robot.h"

void setup() {
  Serial.begin(9600);
  BT.begin(115200);

  pinMode(4,INPUT); //4 = PIR
  ActionRobot(22);
}

void loop() {
 
  int PIR ;

  PIR = digitalRead(4);
  
  if(PIR == 1 ) {
     Serial.println("PIR Sensing");
     ActionRobot(36);
  }
  else {
    Serial.println("PIR NOT Sensing");
   }
     
}
