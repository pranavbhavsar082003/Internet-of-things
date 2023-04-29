//LEVEL 3
//LAB 4
//NAME: pranav bhavsar
//date: 2023-02-02

int RGBGreenPin = 11;
int RGBRedPin = 12;
int RGBBluePin = 13;
int lightPin = A1; //The light sensor is plugged into pin A1 of the Arduino.
int data = 0; //This will store the data from the sensor.

void setup() { //The Setup function runs once.
  Serial.begin(9600);
  pinMode(RGBRedPin, OUTPUT); //Setup red RGB LED pin as an output pin.
  pinMode(RGBBluePin, OUTPUT); //Setup blue RGB LED pin as an output pin.
  pinMode(RGBGreenPin, OUTPUT); //Setup green RGB LED pin as an output pin.
}

void loop() { //The loop function runs forever.
  data = analogRead(lightPin); //Read the value from the light sensor and store it in the lightData variable.
  data = map(data, 6, 679, 0, 100); //map the data value to a percentage.

  
  digitalWrite(RGBRedPin, LOW);
  digitalWrite(RGBBluePin, LOW);
  digitalWrite(RGBGreenPin, LOW);
  //LED #1 will turn on when light sensor is above 50% value
  if (data > 50) {
    digitalWrite(RGBRedPin, HIGH); //red light will turn on as LED1 
    
  } 
  //LED #2 will turn on when light sensor if above 30% value and below 60%
  if (data > 30 && data < 60) {
     //blue light will turn on as LED2 
    digitalWrite(RGBBluePin, HIGH);
    
  }
  //LED #3 will blink slowly when below 33% light value, and quickly then above 66% value
  
  else if (data < 33) {
      
      digitalWrite(RGBGreenPin, HIGH);
      delay(1000);
      digitalWrite(RGBGreenPin, LOW);
      delay(1000);
    } 
  else if (data >= 66) {
      
      digitalWrite(RGBGreenPin, HIGH);
      delay(200);
      digitalWrite(RGBGreenPin, LOW);
      delay(200);
    }
  

  Serial.print("Percentage covered = ");
  Serial.println(data); //Print the data to the serial port
  
}


