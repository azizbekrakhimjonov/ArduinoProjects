#include<Servo.h>
Servo servo1;
void setup(){
servo1.attach(9);
}
void loop(){
int lightValue = analogRead(A0);
lightValue = map(lightValue,0,1023,0,180,);
servo1.write(lightValue);
}













,.
