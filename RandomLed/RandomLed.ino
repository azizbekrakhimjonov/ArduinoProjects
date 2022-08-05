int number = 0;
const int timer = 500;
int pins[] = {3,4,5,6,7,8,9,10,11,12};
void setup() {
 Serial.begin(9600);
 Serial.println("Working!");
 int i = 0;
 for (i=0; i<10; i++){
        pinMode(pins[i], OUTPUT);
   }
}

int r = 0;
void loop() {
  
        r = random(11);
        Serial.println(r);
        digitalWrite(pins[r], HIGH);
        delay(timer);
        digitalWrite(pins[r],LOW);
        delay(timer);
  
}
