int trigPin = 9;
int echoPin = 10;
int chap_oldinga = 4;     
int ong_oldinga = 7;      
int ong_orqaga= 6;       
int chap_orqaga= 5;       //ForWarD motion of Right motor
int c = 0;

void setup() {
  //Serial.begin(9600); 
   pinMode(chap_orqaga, OUTPUT);
   pinMode(ong_orqaga, OUTPUT);
   pinMode(chap_oldinga, OUTPUT);
   pinMode(ong_oldinga, OUTPUT);
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
  //Serial.print(distance);
  //Serial.println("CM");
  delay(10);
 
  
  if((distance>20))
 {
  digitalWrite(chap_orqaga, HIGH);  //                              //       If you dont get proper movements of your robot,
   digitalWrite(chap_oldinga,LOW);                               //        then alter the pin numbers
   digitalWrite(ong_orqaga,LOW);                               //
   digitalWrite(ong_oldinga,HIGH);                              //
 }
 
  else if(distance<20)  
 {
   digitalWrite(chap_orqaga, LOW); // chap <----
   digitalWrite(chap_oldinga,HIGH);
   digitalWrite(ong_orqaga,LOW);  // ong <---                                //HIGH
   digitalWrite(ong_oldinga,HIGH);
                                         
 }
 
}
