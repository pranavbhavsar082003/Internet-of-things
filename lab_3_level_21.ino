//lab 3 
//level 2
//NAME : Pranav Bhavsar
//date : 2023-01-26

int rotationPin = A0; //The rotation sensor is plugged into pin A0 of the Arduino.
int value =0; //Used to store data from sensor.
int r =9; //red
int g =10; //green
int b =11; //blue
void setup() { //The Setup function runs once.
Serial.begin(9600); //This will enable the Arduino to send data to the Serial
//monitor.
  
pinMode(rotationPin,INPUT);
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
  
}
void loop() { //The loop function runs forever.
value = analogRead(rotationPin);
int dd = (1023-value)+150;//Read the value from the light sensor and store it
//in the lightData variable.
Serial.print("Rotation value =");
Serial.println(value); //Print the data to the serial port.
delay(200); 
  
  
  //red
  
  digitalWrite(r,HIGH);
  delay(dd);
  digitalWrite(r,LOW);
  delay(dd);
   
  //green
  digitalWrite(g,HIGH);
  delay(dd);
  digitalWrite(g,LOW);
  delay(dd);
  
  //blue
  digitalWrite(b,HIGH);
  delay(dd);
  digitalWrite(b,LOW);
  delay(dd);
}
