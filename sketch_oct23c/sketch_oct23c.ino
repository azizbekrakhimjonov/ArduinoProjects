#include <IRremote.h>
int RECV_PIN = 6;
int led_pin = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup() {                
  // initialize the digital pin as an output.
  pinMode(RECV_PIN, INPUT);  
  pinMode(led_pin, OUTPUT); 
 
  irrecv.enableIRIn(); // Start the receiver
  Serial.begin(9600);
}
void loop() {
  int i=0;
  if (irrecv.decode(&results))
     irrecv.resume(); 

  if(results.value == 0xFFA25D )
  digitalWrite(led_pin, LOW);
  if(results.value == 0xFFE21D)
  digitalWrite(led_pin, HIGH);
    
  Serial.println(results.value, HEX);
  delay(500);
 }
