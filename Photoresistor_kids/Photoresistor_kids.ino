#include <Servo.h>
const int LIGHT_SENSOR_PIN = A0;
const int SERVO_PIN  = 9; 
Servo servo; 


int analogValue;

void setup() {
  pinMode(SERVO_PIN, OUTPUT); 
  Serial.begin(9600);
    servo.attach(SERVO_PIN);           // attaches the servo on pin 9 to the servo object

  servo.write(0);
}

void loop() {
  analogValue = analogRead(LIGHT_SENSOR_PIN); 
  Serial.println(analogValue);
  if(analogValue > 1)
    servo.write(90);
  else
    servo.write(0);
    }
















//
//void setup() {
//  pinMode(8, OUTPUT);
//  Serial.begin(9600);
//}
//void loop() {
//  int analogValue = analogRead(A0);
//  if (analogValue < 10) {
//    Serial.println("Qorong`u");
//    digitalWrite(8, HIGH); 
//    
//
//  delay(1000);
//}
