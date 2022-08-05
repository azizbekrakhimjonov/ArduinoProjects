#include <Servo.h>
const int MOTION_SENSOR_PIN = 7; // Arduino pin connected to motion sensor's pin
const int SERVO_PIN         = 9; // Arduino pin connected to servo motor's pin

Servo servo;
int angle = 0;          
int lastMotionState;   
int currentMotionState;
void setup() {
  Serial.begin(9600);                // initialize serial
  pinMode(MOTION_SENSOR_PIN, INPUT); // set arduino pin to input mode
  servo.attach(SERVO_PIN);           // attaches the servo on pin 9 to the servo object

  servo.write(angle);
  currentMotionState = digitalRead(MOTION_SENSOR_PIN);
}

void loop() {
  lastMotionState    = currentMotionState;             // save the last state
  currentMotionState = digitalRead(MOTION_SENSOR_PIN); // read new state

  if (currentMotionState == LOW && lastMotionState == HIGH) { // pin state change: LOW -> HIGH
    Serial.println("Motion detected!");
    servo.write(180);
  }
  else
  if (currentMotionState == HIGH && lastMotionState == LOW) { // pin state change: HIGH -> LOW
    Serial.println("Motion stopped!");
    servo.write(0);
  }
}
