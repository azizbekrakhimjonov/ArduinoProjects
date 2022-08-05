
int lamp = 10;
int swt = 9 ;




void setup() {
  pinMode (swt , OUTPUT);
  pinMode (lamp , INPUT);
  
  // put your setup code here, to run once:

}

void loop() { 
  int state1 = 9 ;
  state1 = digitalRead(swt);
  if (state1 == LOW);{
  digitalWrite (lamp , HIGH );}
  else
  {digitalWrite (lamp, LOW);}
  // put your main code here, to run repeatedly:
}
