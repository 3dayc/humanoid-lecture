#include "Robot.h"

#define OFF 0
#define ON 1

char PWR = ON ;
void setup() {
  Serial.begin(9600);
  BT.begin(115200);
  pinMode(A1,INPUT);
}

void loop() {
 
  int CDS;
  
   CDS = analogRead(A1);
   Serial.println(CDS);
   
   if(CDS >=700 && PWR == OFF) {    
       ActionRobot(241); //POWER ON
       PWR = ON ;
       Serial.println("POWER ON");
   }
   else if(CDS <700 && PWR ==ON) { 
       ActionRobot(240); // POWER OFF
       PWR = OFF ;
       Serial.println("POWER OFF");
   }    
     
}
