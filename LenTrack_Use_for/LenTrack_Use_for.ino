int timer = 100; 
int pins[] = { 2, 3, 4, 5, 6, 7 }; 
int num_pins = 6; 
void setup()
{
 int i;
 for (i = 0; i < num_pins; i++) 
 pinMode(pins[i], OUTPUT); 
}
void loop()
{
 int i;
 for (i = 0; i < num_pins; i++) { 
 digitalWrite(pins[i], HIGH); 
 delay(timer); 
 digitalWrite(pins[i], LOW); 
 }
 for (i = num_pins - 1; i >= 0; i--) {
 digitalWrite(pins[i], HIGH);
 delay(timer);
 digitalWrite(pins[i], LOW);
 }
}
