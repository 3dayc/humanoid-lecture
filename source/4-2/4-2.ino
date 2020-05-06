#include "Robot.h"

void setup() {
  Serial.begin(9600);
  BT.begin(115200);
  pinMode(A0,INPUT);
  ActionRobot(241); // Power ON
 }

void loop() {
  int vol;
   vol = analogRead(A0);
   Serial.println(vol);
   if(vol <=10 ) {
        Serial.println("Power OFF");
        ActionRobot(240); // Power OFF
   }
   else if(vol >=1020){
     Serial.println("Power ON");
    ActionRobot(241); // Power ON
   }
    delay(500);    
}
