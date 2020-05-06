
#include "Robot.h"
int Tilt=9 ;

void setup() {
 Serial.begin(9600);
pinMode(Tilt, INPUT);
 BT.begin(115200);
}

void loop() {
int Tilt_val;

Tilt_val=digitalRead(Tilt);
Serial.println(Tilt_val);

delay(500);
}
