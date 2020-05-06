
#include "Robot.h"
int Tilt=9 ;

int FAction[9] ={ 22, 30, 23, 24, 31, 34, 32, 35, 36 };
int BAction[9] ={ 55, 56, 58, 60, 61, 64, 65, 66, 67 };

int Fcnt, Bcnt, FFlag ;
void setup() {
 Serial.begin(9600);
 pinMode(Tilt, INPUT);
 BT.begin(115200);
 ActionRobot(1);
 Fcnt = 0;
 Bcnt = 0;
 FFlag = 0;
}

void loop() {
int Tilt_val;

  Tilt_val=digitalRead(Tilt);
  Serial.println(Tilt_val);

  if(Tilt_val==1) {
                 if(FFlag == 0) Fcnt = 0;
                 ActionRobot(FAction[Fcnt]); 
                 Fcnt++;
                 if(Fcnt >8 ) Fcnt = 0;
                 FFlag = 1 ;
                                
  }

  else {         if(FFlag==1) Bcnt = 0;
                 ActionRobot(BAction[Bcnt]); 
                 Bcnt++;
                 if(Bcnt >8 ) Bcnt = 0; 
                 FFlag = 0;  
               
 }

}           
