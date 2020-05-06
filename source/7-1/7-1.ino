//#include "Robot.h"
       
void setup() {
  Serial.begin(9600);
 // BT.begin(115200);
}

void loop() {
int val;
val = analogRead(A0);
Serial.println(val);
delay(500);
}
