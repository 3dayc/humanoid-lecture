#include "Robot.h"

int Action[16] ={  31, 32, 33, 34, 48, 49, 50, 51,
                   66, 67, 70, 71, 84, 85, 86, 87 };

int cnt = 0;                  
void setup() {
  Serial.begin(9600);
  BT.begin(115200);
  ActionRobot(1);
}

void loop() {
int IR_val;
 IR_val= analogRead(A1);
 Serial.println(IR_val);

if(IR_val >250) {
   ActionRobot(Action[cnt]);
   cnt++ ;
   if(cnt > 16 ) cnt = 0; 
}
else {
   ActionRobot(1);
}
}
