int z;
void setup(){
  Serial.begin(9600);
}
void loop()
{
    z = kopaytr(8, 2);
    Serial.println(z);
}
float kopaytr(int x, int y){
return (x * y);
}
float qoshish(int x, int y){
return (x + y);
}
