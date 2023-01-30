//LEVEL 3 
//lab 2
//Date:2023-01-19
//NAME: PRANAV BHAVSAR

int RGBRedPin = 9;    // The red RGB LED is connected pin 9 of the Arduino.
int RGBGreenPin = 10; // The green RGB LED is connected pin 10 of the Arduino.
int RGBBluePin = 11;  // The blue RGB LED is connected pin 11 of the Arduino.

void setup()
{  
  Serial.begin(9600);// The Setup function runs once.
    pinMode(RGBRedPin, OUTPUT);   // Setup red RGB LED pin as an output pin.
    pinMode(RGBGreenPin, OUTPUT); // Setup green RGB LED pin as an output pin.
    pinMode(RGBBluePin, OUTPUT);  // Setup blue RGB LED pin as an output pin.
}
void loop()
{
    for (int i = 1000; i <= 10000; i+=1000)
    {
        digitalWrite(RGBRedPin, HIGH); // Turn on RED
        delay(i/7);               
        digitalWrite(RGBRedPin, LOW);  // Turn off Red

        // Display Green
        digitalWrite(RGBGreenPin, HIGH); // Turn on RED
        delay(i/7);                
        digitalWrite(RGBGreenPin, LOW);  // Turn off Red
        
        // Display Blue
        digitalWrite(RGBBluePin, HIGH); // Turn on RED
        delay(i/7);               
        digitalWrite(RGBBluePin, LOW);  // Turn off Red
        
        // Display Magenta (Red + Blue)
        digitalWrite(RGBRedPin, HIGH);  // Turn on RED
        digitalWrite(RGBBluePin, HIGH); // Turn on RED
        delay(i/7);               
        digitalWrite(RGBRedPin, LOW);   // Turn off Red
        digitalWrite(RGBBluePin, LOW);  // Turn on RED
        
        // Display Yellow (Red + Green)
        digitalWrite(RGBRedPin, HIGH);   // Turn on RED
        digitalWrite(RGBGreenPin, HIGH); // Turn on RED
        delay(i/7);                
        digitalWrite(RGBRedPin, LOW);    // Turn off Red
        digitalWrite(RGBGreenPin, LOW);  // Turn of RED
        
        // Display Cyan (Blue + Green)
        digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
        digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
        delay(i/7);                 
        digitalWrite(RGBBluePin, LOW);   // Turn of BLUE
        digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN
        
        // Display White (Red + Blue + Green)
        digitalWrite(RGBRedPin, HIGH);   // Turn on RED
        digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
        digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
        delay(i/7);                 
        digitalWrite(RGBRedPin, LOW);    // Turn off RED
        digitalWrite(RGBBluePin, LOW);   // Turn off BLUE
        digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN
      
      
      Serial.println(i/1000);
    }
}