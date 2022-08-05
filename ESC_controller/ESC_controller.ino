#include <Servo.h>
Servo ESC;
int Speed;
void setup() {
  ESC.attach(9, 1000, 2000);
}

void loop() {
  Speed = 1000;
  ESC.write(Speed);
}
