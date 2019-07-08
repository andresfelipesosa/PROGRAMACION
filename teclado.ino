#include <Servo.h>
 
int val = 0; //Variable de entrada del Serial
int val1=0;  
char x;
Servo servo; //Creamos un objeto Servo de nombre... servo

void setup()
{
   Serial.begin(9600); //Iniciamos el serial
   servo.attach(3); //Conectamos el servo al pin digital 3
   
}
 
void loop()
{
   if(Serial.available() > 0) //Detecta si hay alguna entrada por serial
   {

    if(char==a){
      val=94
      }
      val = Serial.parseInt();
      if(val != 0)
      {
         servo.write(val); //Mueve el servo a la posición entrada (excepto si es 0)
         
      }
   }

   

   
   delay(500);
}
