//                      list 
//  bitta ozgaruvchiga 1 tadan kop malumot saqlash 

//                  0   1   2   3    4    5   malumotlarni index raqami demak 0 chi indexda 10 saqlanadi
// int numbers[] = {10, 20, 40, 80, 160, 320};
//                  -6  -5  -4  -3   -2   -1  orqa tarafdan index boyicha tartiblash





int numbers[] = {10, 20, 40, 80, 160, 320};
int sonlar_soni = 6;

void setup() {
  Serial.begin(9600);
  Serial.println("Start numbers");
}
int k = 0;
void loop(){
  
  if (k==6){
  k=0;
  }else{
     Serial.println(numbers[k]);
     k+=1;
    }
  
  delay(1000);
}
