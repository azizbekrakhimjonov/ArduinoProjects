// up - AC89436E
// down - 911734E
// left - 5A368D0A
// right - 20FE4DBB


//#include <IRremote.h> 
//int RECV_PIN = 11;
//IRrecv irrecv(RECV_PIN);
//decode_results results;
//
//void setup()
//{
//  Serial.begin(9600);
//  irrecv.enableIRIn(); // Start the receiver
//}
//
//void loop()
//{
//  if (irrecv.decode(&results))
//    {
//     Serial.println(results.value, HEX);
//     irrecv.resume(); // Receive the next value
//    }
//}

#include <IRremote.h> 
int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;

int bluePin = 2;     
int greenPin = 3;        
int redPin = 4;  
int yellow = 5;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); 
   pinMode(redPin, OUTPUT);     
  mpinMode(greenPin, OUTPUT);     
   pinMode(bluePin, OUTPUT);  
   pinMode(yellow, OUTPUT);
}

void loop()
{
  if (irrecv.decode(&results))
    {
     Serial.println(results.value, HEX);
     if ();
     irrecv.resume(); // Receive the next value
    }
}

    
