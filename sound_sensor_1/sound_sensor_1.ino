int ledPin=12;
int result = 0;
boolean val =0;

void setup(){
    pinMode(ledPin, OUTPUT);
    Serial.begin (9600);
}
  
void loop (){
  val =analogRead(A0);
  
//  Serial.println (val);
  
  if (val==HIGH) {

    digitalWrite(ledPin, HIGH);
  }
  else{

    digitalWrite(ledPin, LOW);
  }
//  delay(100);
}
