//
////int pinStateCurrent   = LOW; 
int pinStatePrevious  = LOW; 
const int qizil = 12;
const int yashil = 11;
const int harakat = 2; 
void setup() {
  Serial.begin(9600);            
  pinMode(harakat, INPUT); 
  pinMode(qizil, OUTPUT);
  pinMode(yashil, OUTPUT);
}
void loop() {
//  pinStatePrevious = pinStateCurrent; 
  pinStatePrevious = digitalRead(harakat);   

  if (pinStatePrevious == HIGH) {  
    Serial.println("Harakat bor!!!");
    digitalWrite(qizil, HIGH);
    digitalWrite(yashil, LOW);
    

  }
  else
  if (pinStatePrevious == LOW ) {  
    Serial.println("Harakat yoq!!!");
    digitalWrite(yashil, HIGH);
    digitalWrite(qizil, LOW);
   
  }
}


/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-motion-sensor
 */

?
