int trigPin = 9;
int echoPin = 10;
int revright = 4;    // chap orqaga  <--------
int fwdleft = 7;     // o`ng oldinga --------->
int revleft= 6;      // o`ng orqaga  <--------
int fwdright= 5;     // chap oldinga --------->
int c = 0;

void setup() {
//  Serial.begin(9600); 
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(trigPin, OUTPUT);
   pinMode(echoPin, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  long duration, distance;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance =(duration/2)/29.1;
//  Serial.print(distance);
//  Serial.println("CM");
  delay(10);
 
  
  if((distance>20))
 {
  digitalWrite(5, HIGH);  // chap oldinga --------->
   digitalWrite(4, LOW);  // chap orqaga  <--------
   digitalWrite(6, LOW);  // o`ng orqaga  <--------
   digitalWrite(7, H  IGH); // o`ng oldinga --------->
 }
 
  else if(distance<20) 
 {
   digitalWrite(5, HIGH);   // chap oldinga --------->
   digitalWrite(4, LOW);  // chap orqaga  <--------
   digitalWrite(6, LOW);  // o`ng orqaga  <--------
   digitalWrite(7, HIGH);   // o`ng oldinga --------->
                                            
 }
 
}
