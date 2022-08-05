#include <Servo.h> 
const int SERVO_PIN  = 9; 
Servo servo; 
int angle = 0;         
int a = 5;
void setup() {
  Serial.begin(9600);                
  servo.attach(SERVO_PIN);       
  servo.write(angle);

}
void loop() {
    if(angle == 90);

else{
  servo.write(angle+=a);
  servo.write(0);
  delay(500);
  a+=5;
}

   
    
    delay(500);
   
  }
