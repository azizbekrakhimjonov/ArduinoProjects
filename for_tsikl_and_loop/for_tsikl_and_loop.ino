void setup() {
 Serial.begin(9600);
}
int count = 0; // = += -= *= /=
void loop() {
  if (count==11){
    Serial.println("tugadi");
    count = 0;
    }
  else{
    Serial.print("salom ");
    Serial.println(count);
      } 
  count+=1;
//  count = count + 1;
  delay(1000);
}
