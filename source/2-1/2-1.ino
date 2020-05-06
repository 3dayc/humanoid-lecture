 #include "Robot.h"

void setup() {
  Serial.begin(9600);// PC로 데이터를 보낼것 
 BT.begin(115200); // 휴머노이드로 데이터를 보냄
  pinMode(A1,INPUT);
}

void loop() {
  int CDS;
   CDS = analogRead(A1);
   Serial.println(CDS);
    
   delay(500); // 0.5초 시간 지연        
}
