//lab 6 
//level 3
//NAME : Pranav Bhavsar
//date : 2023-02-23

int RGBRedPin = 9; //The red RGB LED is connected pin 9 of the Arduino.
int RGBGreenPin = 10; //The green RGB LED is connected pin 10 of the Arduino.
int RGBBluePin = 11; //The blue RGB LED is connected pin 11 of the Arduino.
int rotationPin = A0; //The rotation sensor is plugged into pin A0 of the Arduino.
int buttonPin = 2;
int initialValue = 0;
int change = 0;
int data = 0;
void setup() { //The Setup function runs once.
  Serial.begin(9600);
  pinMode(rotationPin, INPUT);//setup rotation pin
  pinMode(RGBRedPin, OUTPUT); //Setup red RGB LED pin as an output pin.
  pinMode(RGBGreenPin, OUTPUT); //Setup green RGB LED pin as an output pin.
  pinMode(RGBBluePin, OUTPUT); //Setup blue RGB LED pin as an output pin.
  pinMode(buttonPin, INPUT); //Setup button pin as an input with pull-up resistor.
}

void loop() 
  {

    Serial.println("Please enter the value:R=RED G=GREEN B=BLUE"); // printing the input value for RGB light in serial monitor
    delay(300);                                                    // delay of 300 millisecond.

    while (Serial.available() == 0)
    {

        // using while to hold the printing until the button is press.
    }

    initialValue = Serial.read();

    while (digitalRead(buttonPin) == LOW)
    {

        // using while for butoon1pin so that the code stay`s in loop.

        data = analogRead(rotationPin);
        data = map(data, 0, 1023, 0, 255); // data mapping for brightness.

        // using if else
        if (initialValue == 82)
        {

            analogWrite(RGBRedPin, data); // Red RGB light will be turn on and it`s brightness can be adjust.Moreover,if the button is press the light will lock it`s brightness.
        }

        else if (initialValue == 71)
        {

            analogWrite(RGBGreenPin, data); // Green RGB light will be turn on and it`s brightness can be adjust.Moreover,if the button is press the light will lock it`s brightness.
        }
        else if (initialValue == 66)
        {

            analogWrite(RGBBluePin, data); // Blue RGB light will be turn on and it`s brightness can be adjust.Moreover,if the button is press the light will lock it`s brightness.
        }
    }
}