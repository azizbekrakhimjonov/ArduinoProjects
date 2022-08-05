const int PHR_pin=A0;
const int rp=3;
const int a=500;
int av;
void setup() {
 pinMode(rp,OUTPUT);
}

void loop() {
  av=analogRead(PHR_pin);
  if(av<a)
  digitalWrite(rp,HIGH);
  else
  digitalWrite(rp,LOW);
}
