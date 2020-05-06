#include "Robot.h"

void setup() {
  Serial.begin(9600);
  BT.begin(115200);
  pinMode(A0,INPUT);
  ActionRobot(22); // Fighter Mode Ready
 }

void loop() {
  int vol;
   vol = analogRead(A0);
   Serial.println(vol);
   if(vol <=300 ) {
        Serial.println("Left Turn And Upper");
        ActionRobot(28);
        ActionRobot(31);
   }
   else if(vol >300 && vol <700 ){
          Serial.println("Ready & Defense");
           ActionRobot(22);
           ActionRobot(23);
   }


   else if(vol >=700 ) {
     Serial.println("Right Turn And One-two");
        ActionRobot(29); 
        ActionRobot(36);
   }
 
  
}
