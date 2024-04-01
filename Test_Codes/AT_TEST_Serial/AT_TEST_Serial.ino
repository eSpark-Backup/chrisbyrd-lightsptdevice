/*

  This example code is for AT Test Commands.

*/

#include <SoftwareSerial.h>

SoftwareSerial mySerial(5,6); // RX, TX

void setup() {

  // initialize both serial ports:

  pinMode(9, OUTPUT);   //  GSM_BUCK_EN
  pinMode(8, OUTPUT);   //  GSM_RESET
  pinMode(7, OUTPUT);   // PWRKEY_EN
  
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  delay(1000); 
  digitalWrite(7, HIGH);  
  delay(1000); 
  digitalWrite(7, LOW);
 
  Serial.begin(9600);

  mySerial.begin(115200);
}

void loop() {

  // read from port 1, send to port 0:

  if (mySerial.available()) {

    int inByte = mySerial.read();

    Serial.write(inByte);

  }

  // read from port 0, send to port 1:

  if (Serial.available()) {

    int inByte = Serial.read();

    mySerial.write(inByte);

  }
}
