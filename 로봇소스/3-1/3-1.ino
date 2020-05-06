#include "Robot.h"

void setup() {
  Serial.begin(9600);
  BT.begin(115200);
  ActionRobot(1);
  pinMode(4,INPUT); //4 = PIR
}

void loop() {
 
  int PIR ;

  PIR = digitalRead(4);
  
  if(PIR == 1 ) {
     Serial.println("PIR Sensing");
  }
  else {
    Serial.println("PIR NOT Sensing");
   }
   delay(500);
}
