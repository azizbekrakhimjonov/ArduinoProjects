#include <Servo.h>
Servo servo;

void setup() {
  servo.attach(13);  // servo mator signal pini  
  servo.write(0);  // servoni holatini dastlabgi holatga nol holatga burish
 
  pinMode(8,INPUT);
  pinMode(9,INPUT);
 
}

void loop(){
  int swt_1 = 8;
  int swt_2 = 9;
  if(digitalRead(1) == HIGH){
    servo.write(180);
  }
}




 
