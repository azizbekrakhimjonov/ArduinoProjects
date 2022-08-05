#include <Servo.h>
const int BUTTON_PIN = 7; 
const int SERVO_PIN  = 9; 
Servo servo; 
int angle = 0;         
int lastButtonState;  
int currentButtonState; 

void setup() {
  Serial.begin(9600);                
  pinMode(BUTTON_PIN, INPUT_PULLUP); // set arduino pin to input pull-up mode
  servo.attach(SERVO_PIN);           // attaches the servo on pin 9 to the servo object

  servo.write(angle);
  currentButtonState = digitalRead(BUTTON_PIN);
}
void loop() {
  lastButtonState    = currentButtonState;      
  currentButtonState = digitalRead(BUTTON_PIN); 
  if(lastButtonState == HIGH && currentButtonState == LOW) {
    if(angle == 0)
      angle = 25;
    servo.write(angle);
    delay(75);
    servo.write(0);
  }
}
