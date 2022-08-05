

#include <Servo.h>
const int TRIG_PIN  = 6;  //Ultrasonic Sensor's TRIG pin
const int ECHO_PIN  = 7;  //Ultrasonic Sensor's ECHO pin
const int SERVO_PIN = 9; // Servo Motor's pin
const int DISTANCE_THRESHOLD = 10; // cantimeters

Servo servo;


float duration_us, distance_cm;

void setup() {
  Serial.begin (9600);      
  pinMode(TRIG_PIN, OUTPUT); 
  pinMode(ECHO_PIN, INPUT);  
  servo.attach(SERVO_PIN);   
  servo.write(0);
}

void loop() {

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  
  duration_us = pulseIn(ECHO_PIN, HIGH);
 
  distance_cm = 0.017 * duration_us;

  if(distance_cm < DISTANCE_THRESHOLD)
    servo.write(359); 
  else
    servo.write(0);  
      
  Serial.print("distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");
  delay(500);
}
