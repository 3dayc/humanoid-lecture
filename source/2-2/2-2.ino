#include "Robot.h"

void setup() {
  Serial.begin(9600); // PC로 CDS값
  BT.begin(115200); // 휴머노이드로 블루투스를 통해 명령 코드 줌
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
