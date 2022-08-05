int red = 12;
int yellow = 11;
int green =10;

void setup() {
pinMode (green, OUTPUT);
pinMode (yellow, OUTPUT);
pinMode (red, OUTPUT);
}

void loop() {
  
digitalWrite (green, HIGH);
delay (500);
digitalWrite (yellow, HIGH);
delay (200);

delay (500);
digitalWrite (green, LOW);
delay (50);


digitalWrite (yellow, HIGH);
delay (200);
digitalWrite (red, HIGH);
delay (500);
digitalWrite (yellow, LOW);
delay (50);

digitalWrite (red, HIGH);
delay (500);
digitalWrite (red, LOW);
delay (0);






}



//
//void setup() {
//  pinMode(12, OUTPUT);
//  pinMode(11, OUTPUT);
//}
//
//void loop() {
//digitalWrite(12, HIGH);
//delay(100);
//digitalWrite(12, LOW);
//delay(100);
//digitalWrite(12, HIGH);
//delay(100);
//digitalWrite(12, LOW);
//delay(100);
//   
//digitalWrite(11, HIGH);
//delay(100);
//digitalWrite(11, LOW);
//delay(100);
//digitalWrite(11, HIGH);
//delay(100);
//digitalWrite(11, LOW);
//delay(100);
//} 
