#include <Servo.h>
int pos;
Servo myservo; 
void setup() {
  myservo.attach(9);  
}

void loop() {
  for (pos = 0; pos <= 270; pos += 1) { 
    myservo.write(pos);          
    delay(5);
             
  }
    for (pos = 270; pos >=0; pos -= 1) { 
    myservo.write(pos);          
    delay(5);
             
  }
}
