#include "Robot.h"

int SW = 10;
int StandFlag = 1; // 1=> 일어서기, 0=> 앉기
void setup() {
 pinMode(SW, INPUT);
 Serial.begin(9600) ;
 BT.begin(115200);

 ActionRobot(116); //일어서기
}

void loop() {
 int sw_value ;
 
 sw_value = digitalRead(SW);
 
 if(sw_value==1) Serial.println("SW ON");
 else if(sw_value==0) Serial.println("SW OFF");

 if(sw_value== 1 && StandFlag == 1) {
                       StandFlag = 0; //앉아 있는 상태를 표시  
                       ActionRobot(115);  //앉기
                                        
 }
 else if(sw_value==0 && StandFlag==0){
                        StandFlag = 1 ; // 서 있는 상태를 표시 
                        ActionRobot(116); //일어서기  
                       
 }
}
