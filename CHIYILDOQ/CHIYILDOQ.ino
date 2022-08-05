const int BUZZER_PIN = 11; // Arduino pin connected to Buzzer's pin

void setup() {
  Serial.begin(9600);                // initialize serial
  pinMode(BUZZER_PIN, OUTPUT);       // set arduino pin to output mode
}

void loop() {
   digitalWrite(BUZZER_PIN, HIGH);
   delay(50); 
   digitalWrite(BUZZER_PIN, LOW);  
   delay(50);
   digitalWrite(BUZZER_PIN, HIGH);
   delay(200); 
   digitalWrite(BUZZER_PIN, LOW);  
   delay(200);
     digitalWrite(BUZZER_PIN, HIGH);
   delay(50); 
   digitalWrite(BUZZER_PIN, LOW);  
   delay(50);digitalWrite(BUZZER_PIN, HIGH);
   delay(200); 
   digitalWrite(BUZZER_PIN, LOW);  
   delay(200);
     digitalWrite(BUZZER_PIN, HIGH);
   delay(50); 
   digitalWrite(BUZZER_PIN, LOW);  
   delay(50);
      delay(50); 
   digitalWrite(BUZZER_PIN, LOW);  
   delay(50);   delay(50); 
   digitalWrite(BUZZER_PIN, LOW);  
   delay(50);
  
  
}    
