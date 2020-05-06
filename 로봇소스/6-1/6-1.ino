#include "Robot.h"

void setup() {
  Serial.begin(9600);
  BT.begin(115200);
}

void loop() {
int IR_val;
 IR_val= analogRead(A1);
 Serial.println(IR_val);
 delay(500);
}
