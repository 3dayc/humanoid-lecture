
#include "Robot.h"
int Tilt=9 ;

void setup() {
 Serial.begin(9600);
 pinMode(Tilt, INPUT);
 BT.begin(115200);
 ActionRobot(22);
 delay(10000);
}

void loop() {
int Tilt_val;

Tilt_val=digitalRead(Tilt);
Serial.println(Tilt_val);

if(Tilt_val==1)
           ActionRobot(27); //오른쪽으로 이동 

else 
         ActionRobot(26); // 왼쪽으로 이동 
  
  delay(500);           
}
