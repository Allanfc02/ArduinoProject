#include <SoftwareSerial.h>
SoftwareSerial mySerial(11, 10); // RX, TX
String command = "";
void setup()  
{
  Serial.begin(115200);
  Serial.println("Type AT Commands! ");
  mySerial.begin(9600);
}

void loop() 
{
  if (mySerial.available()){
    while(mySerial.available()){
    command += (char) mySerial.read();
  }
  
  Serial.println(command);
  command ="";
}
 if (Serial.available()){
   delay(20);
   mySerial.write(Serial.read());
 }
}

