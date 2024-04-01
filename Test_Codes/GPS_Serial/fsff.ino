#define RXD1 5
#define TXD1 6

void setup() {

 

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
 
  
  // initialize both serial ports:
  Serial.begin(115200);
  Serial1.begin(115200, SERIAL_8N1, RXD1, TXD1);
  
}

void loop() {
  // read from port 1, send to port 0:
  if (Serial1.available()) {
    int inByte = Serial1.read();
    Serial.write(inByte);
  }

  // read from port 0, send to port 1:
  if (Serial.available()) {
    int inByte = Serial.read();
    //Serial.write(inByte);
    Serial1.write(inByte);
  }
}
