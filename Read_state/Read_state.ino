int outputPin = 13;
int val;
void setup()
{
 Serial.begin(9600);
 pinMode(outputPin, OUTPUT);
}
void loop()
{
 if (Serial.available()) {
 val = Serial.read();
 if (val == 'H') {
 digitalWrite(outputPin, HIGH);
 }
 if (val == 'L') {
 digitalWrite(outputPin, LOW);
 }
 }
}
