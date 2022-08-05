 
int relePin = 12;
int analogValue;  
void setup() {  
  Serial.begin(9600);         
  pinMode(relePin, OUTPUT);
}
void loop(){
  analogValue = analogRead(A0); 
  Serial.println(analogValue);
  if(analogValue ==2){
  digitalWrite(relePin, HIGH);

  }else if(analogValue>20){
  digitalWrite(relePin, LOW);
     }
}
