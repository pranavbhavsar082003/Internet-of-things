//LEVEL 2
//LAB 4 
//Date:2023-02-02
//NAME: PRANAV BHAVSAR

int RGBRedPin = 12;
int RGBBluePin = 13;
int lightPin = A1; //The light sensor is plugged into pin A1 of the Arduino.
int data = 0; //This will store the data from the sensor.
void setup() { //The Setup function runs once.
Serial.begin(9600);
pinMode(RGBRedPin, OUTPUT); //Setup red RGB LED pin as an output pin.
pinMode(RGBBluePin, OUTPUT); //Setup blue RGB LED pin as an output pin
}
void loop() { //The loop function runs forever.
data = analogRead(lightPin); //Read the value from the light sensor and store it in the lightDatavariable.
data = map(data,6,679,0,100); //map the data value to a percentage

// FOR BOTH THE LIGHTS

  if(data==0 && data<=25){
	digitalWrite(RGBRedPin,HIGH);
	digitalWrite(RGBBluePin,HIGH);
  } else if(data > 25 && data <=50){
	digitalWrite(RGBRedPin,HIGH);
	digitalWrite(RGBBluePin,HIGH);
  } else if(data > 50 && data <=75){
	digitalWrite(RGBRedPin,	LOW);
	digitalWrite(RGBBluePin,LOW);
  } else if(data > 75 && data <=100){
	digitalWrite(RGBRedPin,	LOW);
	digitalWrite(RGBBluePin,LOW);
  }

Serial.print("Light value = ");
Serial.println(data); //Print the data to the serial port.
delay(500); //Wait 0.5 second (500mS) before running again.
}
