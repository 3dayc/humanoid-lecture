#include "Robot.h"

int Trig = 4 ;   // 초음파 송신핀
int Echo = 5 ; // 초음파 수신핀

int FAction[9] ={ 22, 23, 30, 31, 32, 33, 34, 35, 36 };
int Fcnt = 0 ;

void setup() {
  Serial.begin(9600);
  BT.begin(115200);
  pinMode(Trig,OUTPUT);
  pinMode(Echo,INPUT);
  ActionRobot(1);
 
}

void loop() {
  int dur ;
  float dis ;
 digitalWrite(Trig,HIGH); // 초음파 발사
 delayMicroseconds(10); // 10 마이크로 초 정도만 초음파를 발생
 digitalWrite(Trig,LOW) ; // 초음파 발사 중지

 dur = pulseIn(Echo, HIGH); // 초음파가 반사해서 돌아오는 시간을 기다린다.
 dis = (float) dur *0.017 ;  // 반사된 초음파가 측정된 시간을 cm로 변환 
 Serial.print(dis);
 Serial.println("[Cm]");

 if(dis <=10 )  {
      ActionRobot(FAction[Fcnt]);
      Fcnt++;
      if(Fcnt>8) Fcnt = 0; 
 }
  else  {
    ActionRobot(1);
   }  
 }
