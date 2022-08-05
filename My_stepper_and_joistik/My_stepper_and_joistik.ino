//this project is made by BEASTIDREES62 https://id.arduino.cc/?code=MTxqeHweG6vL2cur&state=amxEcTB2bnNiYjluTUxmRExWaWZnOXIzUk1BLWRqZTZYUGtJNGtxODB%2Bdg%3D%3D

 
// include Arduino stepper motor library
#include <Stepper.h>
 
// define number of steps per revolution
#define STEPS 32
 
// define stepper motor control pins
#define IN1  11
#define IN2  10
#define IN3   9
#define IN4   8
 
// initialize stepper library
Stepper stepper(STEPS, IN4, IN2, IN3, IN1);
 
// joystick pot output is connected to Arduino A0
#define joystick  A0
 
void setup()
{
  
}
 
void loop()
{
  // read analog value from the potentiometer
  int val = analogRead(joystick);
 
  // if the joystic is in the middle ===> stop the motor
  if(  (val > 500) && (val < 523) )
  {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
  }
 
  else
  {
    // move the motor in the first direction
    while (val >= 523)
    {
      // map the speed between 5 and 500 rpm
      int speed_ = map(val, 523, 1023, 5, 500);
      // set motor speed
      stepper.setSpeed(speed_);
 
      // move the motor (1 step)
      stepper.step(1);
 
      val = analogRead(joystick);
    }
 
    // move the motor in the other direction
    while (val <= 500)
    {
      // map the speed between 5 and 500 rpm
      int speed_ = map(val, 500, 0, 5, 500);
      // set motor speed
      stepper.setSpeed(speed_);
 
      // move the motor (1 step)
      stepper.step(-1);
 
      val = analogRead(joystick);
    }
 
  }
 
}
