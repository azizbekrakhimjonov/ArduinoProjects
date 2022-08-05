#include <Servo.h>
int button = 9;
int switchstate = 0 ; 

Servo servo;

void setup(){
  servo.attach(13);
  servo.write(0);
  

  pinMode(9,INPUT);
  
}
void loop(){
  switchstate = digitalRead(button);
if (switchstate == LOW)
 {servo.write (0);}

else

  {servo.write (360);
  delay (2000);
  servo.write (0);}
  
}
