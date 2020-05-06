#include "Robot.h"

int Mode = 1; 
void setup() {
  Serial.begin(9600);
  BT.begin(115200);
  ActionRobot(Mode); 
}

void loop() {
int val;
val = analogRead(A0);
Serial.println(val);

if(val <550 && Mode==22) {
   Mode = 1;
   ActionRobot(Mode);
}
else if(val >=550 && Mode==1 ){
    Mode = 22;
    ActionRobot(Mode);   
 }   
}
