
#include "Robot.h"

void setup() {
 Serial.begin(9600);
 BT.begin(115200);
}

void loop() {
int Sound_val;
 Sound_val= analogRead(A0);
 Serial.println(Sound_val);
 delay(10);
}
