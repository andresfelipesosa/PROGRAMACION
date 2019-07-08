#include <Servo.h>
#include <SoftwareSerial.h>

Servo garra;
Servo codo;
Servo brazo;
Servo giro;

SoftwareSerial BT(2,3);
void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
BT.begin(9600);
garra.attach(5);
codo.attach(10);
brazo.attach(11);
giro.attach(9);


 
}


char s[6];
int X,Y,Z;
void loop() 

{
  
if(Serial.available()>0&&Serial.available()<=6)

 {
  
  Serial.readBytes(s,6);
  Serial.println(s);
  switch(s[0])
  
  {
    case'b':
    X=(s[1]-48)*100;
    Y=(s[2]-48)*10;
    Z=X+Y+(s[3]-48);
    
    brazo.write(Z);
    Serial.println(Z);
    break;
   }

   switch(s[0])
   {

    case'g':
    X=(s[1]-48)*100;
    Y=(s[2]-48)*10;
    Z=X+Y+(s[3]-48);
    
    giro.write(Z);
    Serial.println(Z);
    break;
    
    }


switch(s[0])
   {

    case'c':
    X=(s[1]-48)*100;
    Y=(s[2]-48)*10;
    Z=X+Y+(s[3]-48);
    
    codo.write(Z);
    Serial.println(Z);
    break;
    
    }


    switch(s[0])
   {

    case'j':
    X=(s[1]-48)*100;
    Y=(s[2]-48)*10;
    Z=X+Y+(s[3]-48);
    
    garra.write(Z);
    Serial.println(Z);
    break;
    
    }


   
    
   }




   if(BT.available()>0&&BT.available()<=6)

 {
  
  BT.readBytes(s,6);
  BT.println(s);
  switch(s[0])
  
  {
    case'b':
    X=(s[1]-48)*100;
    Y=(s[2]-48)*10;
    Z=X+Y+(s[3]-48);
    
    brazo.write(Z);
    BT.println(Z);
    break;
   }

   switch(s[0])
   {

    case'g':
    X=(s[1]-48)*100;
    Y=(s[2]-48)*10;
    Z=X+Y+(s[3]-48);
    
    giro.write(Z);
    BT.println(Z);
    break;
    
    }


switch(s[0])
   {

    case'c':
    X=(s[1]-48)*100;
    Y=(s[2]-48)*10;
    Z=X+Y+(s[3]-48);
    
    codo.write(Z);
    BT.println(Z);
    break;
    
    }


    switch(s[0])
   {

    case'j':
    X=(s[1]-48)*100;
    Y=(s[2]-48)*10;
    Z=X+Y+(s[3]-48);
    
    garra.write(Z);
    BT.println(Z);
    break;
    
    }


   
    
   }



   
}
