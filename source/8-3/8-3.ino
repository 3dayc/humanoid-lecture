

#include "Robot.h"
int Tilt=9 ;

int FAction[9] ={ 22, 30, 23, 33, 31, 34, 32, 35, 36 };
int BAction[9] ={ 39, 40, 42, 43, 44, 48, 49, 50, 51 };

int Fcnt, Bcnt ;

void setup() {
 Serial.begin(9600);
 pinMode(Tilt, INPUT);
 BT.begin(115200);
 ActionRobot(1);
 Fcnt = 0;
 Bcnt = 0;
 delay(10000);
}

void loop() {
int Tilt_val;

  Tilt_val=digitalRead(Tilt);
  Serial.println(Tilt_val);

  if(Tilt_val==1) {
                 ActionRobot(FAction[Fcnt]); 
                 Fcnt++;
                 if(Fcnt >8 ) Fcnt = 0;
                                
  }

  else {         ActionRobot(BAction[Bcnt]); 
                 Bcnt++;
                 if(Bcnt >8 ) Bcnt = 0; 
                            
 }
}  
