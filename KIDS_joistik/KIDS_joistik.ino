//int VRx = A0;
//int VRy = A1;
//int SW = 2;
//
//int xPosition = 0;
//int yPosition = 0;
//int SW_state = 0;
//int mapX = 0;
//int mapY = 0;
//
//void setup() {
//  Serial.begin(9600); 
//  
//  pinMode(VRx, INPUT);
//  pinMode(VRy, INPUT);
//  pinMode(SW, INPUT_PULLUP); 
//  
//}
//
//void loop() {
//  xPosition = analogRead(VRx);
//  yPosition = analogRead(VRy);
//  SW_state = digitalRead(SW);
////  mapX = map(xPosition, 512, 1023, 0, 512);
////  mapY = map(yPosition, 512, 1023, 0, 512);
//  
//  Serial.print("X: ");
//  Serial.print(xPosition);
//  Serial.print(" | Y: ");
//  Serial.print(yPosition);
//  Serial.print(" | Button: ");
//  Serial.println(SW_state);
//
//  delay(100);
//  
//}


int yashil = 6;
int kok = 5;
int sariq = 4;
int oq = 3; 

int VRx = A0;
int VRy = A1;
int SW = 2;

int x = 0;
int y = 0;
int SW_state = 0;

void setup() {
  Serial.begin(9600); 
  
  pinMode(VRx, INPUT);
  pinMode(VRy, INPUT);
  pinMode(SW, INPUT_PULLUP); 
  
}

void loop() {
  x = analogRead(VRx);
  y = analogRead(VRy);
  SW_state = digitalRead(SW);
  
  Serial.print("X: ");
  Serial.print(x);
  Serial.print(" | Y: ");
  Serial.print(y);
  Serial.print(" | Button: ");
  Serial.println(SW_state);

  if (x>600){
    digitalWrite(kok, LOW);
    digitalWrite(yashil, HIGH);
    }
  if (y>600){
    digitalWrite(yashil, LOW);
    digitalWrite(kok, HIGH);
    }
  delay(100);
  
}
