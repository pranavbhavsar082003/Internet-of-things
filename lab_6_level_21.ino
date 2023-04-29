//lab 6 
//level 2
//NAME : Pranav Bhavsar
//date : 2023-02-23

int RGBRedPin = 9; //The red RGB LED is connected pin 9 of the Arduino.
int RGBGreenPin = 10; //The green RGB LED is connected pin 10 of the Arduino.
int RGBBluePin = 11; //The blue RGB LED is connected pin 11 of the Arduino.
int rotationPin = A0; //The rotation sensor is plugged into pin A0 of the Arduino.
int data = 0;

void setup() { //The Setup function runs once.
  Serial.begin(9600);
  pinMode(rotationPin, INPUT);//setup rotation pin
  pinMode(RGBRedPin, OUTPUT); //Setup red RGB LED pin as an output pin.
  pinMode(RGBGreenPin, OUTPUT); //Setup green RGB LED pin as an output pin.
  pinMode(RGBBluePin, OUTPUT); //Setup blue RGB LED pin as an output pin.
}

void loop() { //The Loop function runs repeatedly.
  data = analogRead(rotationPin);
  data = map(data, 0, 1023, 0, 255); // mapping the value of rotation pin
  Serial.print("Rotation Value = ");
  Serial.println(data);
  delay(200);

  analogWrite(RGBGreenPin, data); // control the brightness of Green rgb
}
