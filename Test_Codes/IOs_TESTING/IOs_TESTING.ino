/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/DigitalReadSerial
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton1 = 10;
int pushButton2 = 11;
int pushButton3 = 12;
int pushButton4 = 13;
int pushButton5 = 14;
int pushButton6 = 15;
int pushButton7 = 16;
int pushButton8 = 21;


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton1, INPUT);
  pinMode(pushButton2, INPUT);
  pinMode(pushButton3, INPUT);
  pinMode(pushButton4, INPUT);
  pinMode(pushButton5, INPUT);
  pinMode(pushButton6, INPUT);
  pinMode(pushButton7, INPUT);
  pinMode(pushButton8, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState1 = digitalRead(pushButton1);
  int buttonState2 = digitalRead(pushButton2);
  int buttonState3 = digitalRead(pushButton3);
  int buttonState4 = digitalRead(pushButton4);
  int buttonState5 = digitalRead(pushButton5);
  int buttonState6 = digitalRead(pushButton6);
  int buttonState7 = digitalRead(pushButton7);
  int buttonState8 = digitalRead(pushButton8);
  // print out the state of the button:
  Serial.println("buttonState1 = ");
  Serial.println(buttonState1);

  Serial.println("buttonState2 = ");
  Serial.println(buttonState2);
  
  Serial.println("buttonState3 = ");
  Serial.println(buttonState3);

  Serial.println("buttonState4 = ");
  Serial.println(buttonState4);

  Serial.println("buttonState5 = ");
  Serial.println(buttonState5);

  Serial.println("buttonState6 = ");
  Serial.println(buttonState6);

  Serial.println("buttonState7 = ");
  Serial.println(buttonState7);

  Serial.println("buttonState8 = ");
  Serial.println(buttonState8);
  delay(1000);        // delay in between reads for stability
}
