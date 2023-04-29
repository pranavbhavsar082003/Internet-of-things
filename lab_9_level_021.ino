/*
Name:- Pranav Bhavsar
Date:- 2023-03-22
200545944
LAB 9 
LEVEL 02
*/


/*DESCRIPTION:-
press 1 to turn on blue led
press 2 to turn on red led
press 3 to turn off blue led
press 4 to turn off red led
press 5 to flash both LEDs 3 Times!!
*/
#include <IRremote.h>
#define IR_RECEIVE_PIN 11
#define btn1 16
#define btn2 17
#define btn3 18
#define btn4 20
#define btn5 21
int value;
int redLed = 13;
int blueLed = 12;

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN);
  pinMode(blueLed, OUTPUT);
  pinMode(redLed, OUTPUT);
}

void loop() {
  // When the user hits a button, the corresponding if statement will run
  if (IrReceiver.decode()) {
    IrReceiver.resume();
    value = IrReceiver.decodedIRData.command;
    Serial.println(value);
 //conditional statements
    if (value == btn1) {
      digitalWrite(blueLed, HIGH); // press btn1 to turn on blue LED
    }
    if (value == btn2) {
      digitalWrite(redLed, HIGH); //press btn2 to turn on red LED
    }
    if (value == btn3) {
      digitalWrite(blueLed, LOW); //press btn3 turn off blue LED
    }
    if (value == btn4) {
      digitalWrite(redLed, LOW); //press btn4 turn off red LED
    }
    if (value == btn5) {// press btn5 to flash both LEDs 3 times
      for (int i = 0; i < 3; i++) {
        digitalWrite(blueLed, HIGH);
        digitalWrite(redLed, HIGH);
        delay(200);//0.2 sec delay
        digitalWrite(blueLed, LOW);
        digitalWrite(redLed, LOW);
        delay(200);//0.2 sec delay
      }
    }
  }
}
