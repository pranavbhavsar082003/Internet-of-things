//LEVEL 2 lab 2 
//Date:2023-01-19
//NAME: PRANAV BHAVSAR
int RGBRedPin = 9; //The red RGB LED is connected pin 9 of the Arduino.
int RGBGreenPin = 10; //The green RGB LED is connected pin 10 of the Arduino.
int RGBBluePin = 11; //The blue RGB LED is connected pin 11 of the Arduino.
int waitTime1 = 2000;//delay for 2 seconds
int waitTime2 = 500;//delay for 0.5 seconds 
int waitTime3 = 500;//delay for 0.5 seconds
int waitTime4 = 500;//delay for 0.5 seconds
int waitTime5 = 500;//delay for 0.5 seconds 
int waitTime6 = 500;//delay for 0.5 seconds
int waitTime7 = 500;//delay for 0.5 seconds

void setup() { //The Setup function runs once.
Serial.begin(9600);
pinMode(RGBRedPin, OUTPUT); //Setup red RGB LED pin as an output pin.
pinMode(RGBGreenPin, OUTPUT); //Setup green RGB LED pin as an output pin.
pinMode(RGBBluePin, OUTPUT); //Setup blue RGB LED pin as an output pin.
}
void loop(){ // this loop is forever
  
// FIRST CYCLE BEGIN
//Display Red
digitalWrite(RGBRedPin, HIGH); //Turn on RED
delay(waitTime1); //Wait for 2 seconds
digitalWrite(RGBRedPin, LOW); //Turn off Red
//Display Green
digitalWrite(RGBGreenPin, HIGH); //Turn on RED
delay(waitTime2); //Wait for 0.5 seconds
digitalWrite(RGBGreenPin, LOW); //Turn off Red
//Display Blue
digitalWrite(RGBBluePin, HIGH); //Turn on RED
delay(waitTime3); //Wait for 0.5 seconds
digitalWrite(RGBBluePin, LOW); //Turn off Red
//Display Magenta (Red + Blue)
digitalWrite(RGBRedPin, HIGH); //Turn on RED
digitalWrite(RGBBluePin, HIGH); //Turn on RED
delay(waitTime4); //Wait for 0.5 seconds
digitalWrite(RGBRedPin, LOW); //Turn off Red
digitalWrite(RGBBluePin, LOW); //Turn on RED
//Display Yellow (Red + Green)
digitalWrite(RGBRedPin, HIGH); //Turn on RED
digitalWrite(RGBGreenPin, HIGH); //Turn on RED
delay(waitTime5); //Wait for 0.5 seconds
digitalWrite(RGBRedPin, LOW); //Turn off Red
digitalWrite(RGBGreenPin, LOW); //Turn of RED
//Display Cyan (Blue + Green)
digitalWrite(RGBBluePin, HIGH); //Turn on BLUE
digitalWrite(RGBGreenPin, HIGH); //Turn on GREEN
delay(waitTime6); //Wait for 0.5 seconds
digitalWrite(RGBBluePin, LOW); //Turn of BLUE
digitalWrite(RGBGreenPin, LOW); //Turn off GREEN
//Display White (Red + Blue + Green)
digitalWrite(RGBRedPin, HIGH); //Turn on RED
digitalWrite(RGBBluePin, HIGH); //Turn on BLUE
digitalWrite(RGBGreenPin, HIGH); //Turn on GREEN
delay(waitTime7); //Wait for 0.5 seconds
digitalWrite(RGBRedPin, LOW); //Turn off RED
digitalWrite(RGBBluePin, LOW); //Turn off BLUE
digitalWrite(RGBGreenPin, LOW); //Turn off GREEN
Serial.println("first cycle completed : 5 seconds");


// SECOND CYCLE BEGIN
//Display Red
digitalWrite(RGBRedPin, HIGH); //Turn on RED
delay(waitTime1); //Wait for 2 seconds
digitalWrite(RGBRedPin, LOW); //Turn off Red
//Display Green
digitalWrite(RGBGreenPin, HIGH); //Turn on RED
delay(waitTime2); //Wait for 0.5 seconds
digitalWrite(RGBGreenPin, LOW); //Turn off Red
//Display Blue
digitalWrite(RGBBluePin, HIGH); //Turn on RED
delay(waitTime3); //Wait for 0.5 seconds
digitalWrite(RGBBluePin, LOW); //Turn off Red
//Display Magenta (Red + Blue)
digitalWrite(RGBRedPin, HIGH); //Turn on RED
digitalWrite(RGBBluePin, HIGH); //Turn on RED
delay(waitTime4); //Wait for 0.5 seconds
digitalWrite(RGBRedPin, LOW); //Turn off Red
digitalWrite(RGBBluePin, LOW); //Turn on RED
//Display Yellow (Red + Green)
digitalWrite(RGBRedPin, HIGH); //Turn on RED
digitalWrite(RGBGreenPin, HIGH); //Turn on RED
delay(waitTime5); //Wait for 0.5 seconds
digitalWrite(RGBRedPin, LOW); //Turn off Red
digitalWrite(RGBGreenPin, LOW); //Turn of RED
//Display Cyan (Blue + Green)
digitalWrite(RGBBluePin, HIGH); //Turn on BLUE
digitalWrite(RGBGreenPin, HIGH); //Turn on GREEN
delay(waitTime6); //Wait for 0.5 seconds
digitalWrite(RGBBluePin, LOW); //Turn of BLUE
digitalWrite(RGBGreenPin, LOW); //Turn off GREEN
//Display White (Red + Blue + Green)
digitalWrite(RGBRedPin, HIGH); //Turn on RED
digitalWrite(RGBBluePin, HIGH); //Turn on BLUE
digitalWrite(RGBGreenPin, HIGH); //Turn on GREEN
delay(waitTime7); //Wait for 0.5 seconds
digitalWrite(RGBRedPin, LOW); //Turn off RED
digitalWrite(RGBBluePin, LOW); //Turn off BLUE
digitalWrite(RGBGreenPin, LOW); //Turn off GREEN
Serial.println("Second cycle completed : 10 seconds");

//THIRD CYCLE BEGIN
//Display Red
digitalWrite(RGBRedPin, HIGH); //Turn on RED
delay(waitTime1); //Wait for 2 seconds
digitalWrite(RGBRedPin, LOW); //Turn off Red
//Display Green
digitalWrite(RGBGreenPin, HIGH); //Turn on RED
delay(waitTime2); //Wait for 0.5 seconds
digitalWrite(RGBGreenPin, LOW); //Turn off Red
//Display Blue
digitalWrite(RGBBluePin, HIGH); //Turn on RED
delay(waitTime3); //Wait for 0.5 seconds
digitalWrite(RGBBluePin, LOW); //Turn off Red
//Display Magenta (Red + Blue)
digitalWrite(RGBRedPin, HIGH); //Turn on RED
digitalWrite(RGBBluePin, HIGH); //Turn on RED
delay(waitTime4); //Wait for 0.5 seconds
digitalWrite(RGBRedPin, LOW); //Turn off Red
digitalWrite(RGBBluePin, LOW); //Turn on RED
//Display Yellow (Red + Green)
digitalWrite(RGBRedPin, HIGH); //Turn on RED
digitalWrite(RGBGreenPin, HIGH); //Turn on RED
delay(waitTime5); //Wait for 0.5 seconds
digitalWrite(RGBRedPin, LOW); //Turn off Red
digitalWrite(RGBGreenPin, LOW); //Turn of RED
//Display Cyan (Blue + Green)
digitalWrite(RGBBluePin, HIGH); //Turn on BLUE
digitalWrite(RGBGreenPin, HIGH); //Turn on GREEN
delay(waitTime6); //Wait for 0.5 seconds
digitalWrite(RGBBluePin, LOW); //Turn of BLUE
digitalWrite(RGBGreenPin, LOW); //Turn off GREEN
//Display White (Red + Blue + Green)
digitalWrite(RGBRedPin, HIGH); //Turn on RED
digitalWrite(RGBBluePin, HIGH); //Turn on BLUE
digitalWrite(RGBGreenPin, HIGH); //Turn on GREEN
delay(waitTime7); //Wait for 0.5 seconds
digitalWrite(RGBRedPin, LOW); //Turn off RED
digitalWrite(RGBBluePin, LOW); //Turn off BLUE
digitalWrite(RGBGreenPin, LOW); //Turn off GREEN
Serial.println("Third cycle completed : 15 seconds");
}
