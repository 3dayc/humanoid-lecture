#include "Robot.h"

void setup() {
  BT.begin(115200);
}

void loop() {
       ActionRobot(22); // Front 파이터 준비포즈
       ActionRobot(23); //막기(방어)
       ActionRobot(30); // 잽
       ActionRobot(31); //왼손 훅
       ActionRobot(32); // 왼손 어퍼
       ActionRobot(33); // 스트레이트 
       ActionRobot(34); // 오른손 훅
       ActionRobot(35); // 오른손 어퍼
       ActionRobot(36); // 원투 스트레이트 
       ActionRobot(24);  // 앞쪽과 싸우기 
}
