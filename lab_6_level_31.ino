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

void loop() { 
      data = analogRead(rotationPin);
    data = map(data, 0, 1023, 0, 255);
    delay(100);

    // adding if statements
    if (digitalRead(buttonPin) == HIGH)
    {
        change++;
        if (change > 3)
        {
            change = 1;
        }
        Serial.print("change= ");
        Serial.println(change);
        delay(200);
    }
    if (change == 1)
    {
        analogWrite(RGBRedPin, data); // control the brightness of Red rgb
    }
    else if (change == 2)
    {
        analogWrite(RGBGreenPin, data); // control the brightness of Green rgb
    }
    else if (change == 3)
    {
        analogWrite(RGBBluePin, data); // control the brightness of Blue rgb

    }
}
