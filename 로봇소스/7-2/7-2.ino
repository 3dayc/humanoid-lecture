#include "Robot.h"
   
void setup() {
  Serial.begin(9600);
  BT.begin(115200);
  ActionRobot(1); 
}

void loop() {
int val;
val = analogRead(A0);
Serial.println(val);

if(val <550) 
    ActionRobot(1);
else 
    ActionRobot(22);   
}
