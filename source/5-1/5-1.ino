
// #include "Robot.h"
int SW = 10;

void setup() {
 pinMode(SW, INPUT);
 Serial.begin(9600) ;
// BT.begin(115200);
}

void loop() {
 int sw_value ;
 
 sw_value = digitalRead(SW);
 
 if(sw_value==0) Serial.println("SW OFF");
 else if(sw_value==1) Serial.println("SW ON");

 delay(500);
}
