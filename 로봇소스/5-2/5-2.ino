#include "Robot.h"

int SW = 10;
int StandFlag = 1;
void setup() {
 pinMode(SW, INPUT);
 Serial.begin(9600) ;
 BT.begin(115200);

 ActionRobot(102);
}

void loop() {
 int sw_value ;
 
 sw_value = digitalRead(SW);
 
 if(sw_value==1) Serial.println("SW ON");
 else if(sw_value==0) Serial.println("SW OFF");

 if(sw_value== 1 && StandFlag == 1) {
                       StandFlag = 0; 
                       ActionRobot(115);  
                                        
 }
 else if(sw_value==0 && StandFlag==0){
                        StandFlag = 1 ;
                        ActionRobot(116);   
                       
 }
}
