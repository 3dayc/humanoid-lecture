#include "Robot.h"

void setup() {
  Serial.begin(9600);
  BT.begin(115200);
  pinMode(A1,INPUT);
}

void loop() {
  int CDS;
   CDS = analogRead(A1);
   Serial.println(CDS);
    
   delay(500);        
}
