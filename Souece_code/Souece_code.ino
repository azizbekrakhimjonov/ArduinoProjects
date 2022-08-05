String name = "";  
String Mobile = "";  
String Address = "";  
String Email = "";  
  
void setup()   
{  
    Serial.begin(9600);  
}  
  
void loop()   
{  
    Serial.println("Enter your name.");  
    while (Serial.available() == 0)   
    { //Wait for user input  }  
    name = Serial.readString(); //Reading the Input string from Serial port.  
    Serial.println("Enter your Moblie No.");  
    while (Serial.available() == 0) {}  
    Mobile = Serial.readString();  
    Serial.println("Enter your Address.");  
    while (Serial.available() == 0) {}  
    Address = Serial.readString();  
    Serial.println("Enter your Email.");  
    while (Serial.available() == 0) {}  
    Email = Serial.readString();  
    Serial.println("-------------------------"); //Showing the details  
    Serial.println("YOUR NAME:" + name);  
    Serial.println("YOUR MOBILE NO:" + Mobile);  
    Serial.println("YOUR ADDRESS:" + Address);  
    Serial.println("YOUR EMAIL:" + Email);  
    Serial.println("Thanks You...");  
    Serial.println("");  
    while (Serial.available() == 0) {}  

    }
}
