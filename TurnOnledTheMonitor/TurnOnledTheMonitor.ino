int ledPin = 12;
int red = 13;
int val;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(red, OUTPUT);
}
void loop() {
  if (Serial.available()){
    val = Serial.read();
    if (val=='1' ){  
      Serial.println("White Turn On");
      digitalWrite(ledPin, HIGH);
      }   
    else if (val=='0'){
      Serial.println("White Turn Off");
      digitalWrite(ledPin, LOW);
      }
    else if (val=='2'){
      Serial.println("Blue Turn On");
      digitalWrite(red, HIGH);
        }
     else if (val=='3'){
      Serial.println("Blue Turn Off");
      digitalWrite(red, LOW);
     }
     else if (val=='4'){
      Serial.println("Blue And White Turn On");
      digitalWrite(red, HIGH);
      digitalWrite(ledPin, HIGH);
    } else if (val=='5'){
      Serial.println("Blue And White Turn Off");
      digitalWrite(red, LOW);
      digitalWrite(ledPin, LOW);
    }
  }
 }
