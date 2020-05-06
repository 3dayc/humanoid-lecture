#include "Robot.h"

int SW = 10;
int sw_value = 0, sw_value1 = 0;
int cnt = 13;

void setup() {
 pinMode(SW, INPUT);
 Serial.begin(9600) ;
 BT.begin(115200);

 ActionRobot(cnt);
}

void loop() {

 sw_value = digitalRead(SW);
 if(sw_value1==0 && sw_value==1) {
                    cnt++ ;
                    if(cnt > 36 ) cnt = 13; 
                    Serial.println(cnt);
                     ActionRobot(cnt);
 }
}
