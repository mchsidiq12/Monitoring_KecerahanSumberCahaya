//memanggil library dari LoRa
#include <SoftwareSerial.h>
SoftwareSerial loraSerial(2,3);
String intensitas;
void setup()
{
   pinMode(A0,INPUT);
   Serial.begin(9600);
   loraSerial.begin(9600);
}

void loop()
{
   int val=analogRead(A0); 
   float I=(-(log10(log(val/1018.1)/2))/4);
   intensitas = String(I);
   Serial.println(intensitas);
   loraSerial.print(intensitas);]
   delay(2000);
}
