//LEVEL 2
//Date:2023-02-09
//NAME: PRANAV BHAVSAR
//LAB 5

int blueLedPin = 13 ; //The blue LED is connected pin 13 of the Arduino.
int buttonPin1 = 2; //The SW1 button is connect to pin 2 of the Arduino.
int redLedPin = 12 ; //The blue LED is connected pin 13 of the Arduino.
int buttonPin2 = 3; //The SW2 button is connect to pin 2 of the Arduino.
void setup() { //The Setup function runs once
pinMode(blueLedPin, OUTPUT); //Setup blue LED pin as an output pin.
pinMode(buttonPin1, INPUT); //Setup button1 pin as an input pin.
pinMode(redLedPin, OUTPUT); 
pinMode(buttonPin2, INPUT); 
}
void loop() { //The loop function runs forever.
if (digitalRead(buttonPin1) == HIGH) { //Check to see if button1 is pressed.
digitalWrite(blueLedPin, HIGH);//Turn on the blue LED.
} else {
digitalWrite(blueLedPin, LOW); //Turn off the blue LED.
}
  if (digitalRead(buttonPin2) == HIGH) { //Check to see if button2 is pressed.
digitalWrite(redLedPin, HIGH);//Turn on the red LED.
} else {
digitalWrite(redLedPin, LOW); //Turn off the red LED.
}
}