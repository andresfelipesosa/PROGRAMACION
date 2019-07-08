#include <Servo.h>
Servo servo1; 
char rxChar;
int ang=100;
void setup() {
// put your setup code here, to run once:
 servo1.attach(3,600,2400);
 Serial.begin(9600);
}

void loop() {
if(Serial.available()){
  rxChar= Serial.read();

  if(rxChar== 'a'){
    ang= ang+5;
    Serial.print(ang);
    }

    else if(rxChar== 'h'){
   ang= ang-5;
      }

      ang=constrain(ang,0,180);
    
  }

  servo1.write(ang);
  delay(1000);
}
