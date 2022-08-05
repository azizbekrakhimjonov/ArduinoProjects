import serial
import time   
 
arduino = serial.Serial("com4",9600) 
time.sleep(2) 

print(arduino.readline()) 
print("Enter 1 to get LED ON & 0 to get OFF")

while 1: 
    var = input()
    if (var == '1'): 
        arduino.write('1') 
        print ("LED turned ON")
        time.sleep(1)
    
    if (var == '0'): 
        arduino.write('0') 
        print ("LED turned OFF")
        time.sleep(1)
