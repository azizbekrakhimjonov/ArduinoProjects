int ledPin1= 13; //Adding the LED's and sensor.
int ledPin2= 12;
int ledPin3= 11;
int ledPin4= 10;
int ledPin5= 9;
int ledPin6= 8;
int ledPin7= 7;
int ledPin8= 6;
int sensorPin= A0; //The sensor selecting as Analog pin. The Analog Pin is better for projects as this one.
int val = 0;

void setup(){
  pinMode(ledPin1, OUTPUT); //Selecting LEDs as outputs to push the results in LEDs of sound detector
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin8, OUTPUT);
  pinMode(sensorPin, INPUT); //Selecting the sensor as input to send results into Arduino
  Serial.begin (9600);
}
  
void loop (){
  val =analogRead(sensorPin);
  Serial.println (val);
  // when the sensor detects a signal, LED flashes
  
  //1
  if (val >= 127) {
    digitalWrite(ledPin1, HIGH); //selecting the values of LEDs to flash by detecting values of sound sensor.
  }
  else {
    digitalWrite(ledPin1, LOW);
  }

  //2
   if (val >= 378) {
    digitalWrite(ledPin2, HIGH);
  }
  else {
    digitalWrite(ledPin2, LOW);
  }

   //3
   if (val >= 505) {
    digitalWrite(ledPin3, HIGH);
  }
  else {
    digitalWrite(ledPin3, LOW);
  }

  //4
  if (val >= 632) {
    digitalWrite(ledPin4, HIGH);
  }
  else {
    digitalWrite(ledPin4, LOW);
  }

  //5
  if (val >= 759) {
    digitalWrite(ledPin5, HIGH);
  }
  else {
    digitalWrite(ledPin5, LOW);
  }

  //6
  if (val >= 886) {
    digitalWrite(ledPin6, HIGH);
  }
  else {
    digitalWrite(ledPin6, LOW);
  }

  //7
  if (val >= 980) {
    digitalWrite(ledPin7, HIGH);
  }
  else {
    digitalWrite(ledPin7, LOW);
  }

  //8
  if (val >= 1000) {
    digitalWrite(ledPin8, HIGH);
  }
  else {
    digitalWrite(ledPin8, LOW);
  }
}
