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
 
   if(CDS >=700)     
       ActionRobot(241); //POWER ON
   
   else if(CDS <700) 
       ActionRobot(240); // POWER OFF
     
}
