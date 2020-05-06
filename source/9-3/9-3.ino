
#include "Robot.h"

int FAction[9] ={ 22, 30, 23, 24, 31, 34, 32, 35, 36 };
int Fcnt ;

void setup() {
 Serial.begin(9600);
 BT.begin(115200);
 ActionRobot(1);
 Fcnt = 0;
}

void loop() {
int Sound_val;
 Sound_val= analogRead(A0);
 Serial.println(Sound_val);
 if(Sound_val> 600){
        for( Fcnt = 0; Fcnt < 9; Fcnt++) 
                      ActionRobot(FAction[Fcnt]);
                      
        ActionRobot(1); 
 }
}
