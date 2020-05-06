#include "Robot.h"

void setup() {
  BT.begin(115200);
}

void loop() {
       ActionRobot(1); //기본 모드 준비포즈
       ActionRobot(18);// 하이(손흔들기 인사)
       ActionRobot(19);// 인사하기      
}
