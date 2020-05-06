#include "Robot.h"

void setup() {
  Serial.begin(9600);
  BT.begin(115200);
  pinMode(A0,INPUT);
}

void loop() {
  int Vol;
   Vol = analogRead(A0);
   Serial.println(Vol);
 
   delay(1000);    
}
