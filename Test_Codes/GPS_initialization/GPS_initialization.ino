/*

  This example code is initialing loaded and it enables GSM.

*/

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
  

  
}

// the loop function runs over and over again forever
void loop() {
  
 

                      // wait for a second
}
