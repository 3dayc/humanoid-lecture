#include "Robot.h"

void setup() {
  Serial.begin(9600);
  BT.begin(115200);
  pinMode(A0, INPUT);
  ActionRobot(22); // Front 파이터 모드 준비
 }

void loop() {
  int vol;
   vol = analogRead(A0);
   Serial.println(vol);
   if(vol <=300 ) {
        Serial.println("Left Turn And Upper");
        ActionRobot(28); //왼쪽으로 돌기
        ActionRobot(31); //왼손 훅
   }
   else if(vol >300 && vol <700 ){
          Serial.println("Ready & Defense");
           ActionRobot(22);// Front 파이터 모드 준비
           ActionRobot(23);// 막기(방어)
   }
   else if(vol >=700 ) {
     Serial.println("Right Turn And One-two");
        ActionRobot(29); //오른쪽으로 돌기
        ActionRobot(36); //원투 스트레이트 
   }
}
