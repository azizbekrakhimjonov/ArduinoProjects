int potPin = 2; 
int ledPin = 13;

int val = 0; 
void setup() {
 pinMode(ledPin, OUTPUT); 
}
void loop() {
 val = analogRead(potPin); 
 digitalWrite(ledPin, HIGH); 
 delay(val); 
 digitalWrite(ledPin, LOW); 
 delay(val);
}
