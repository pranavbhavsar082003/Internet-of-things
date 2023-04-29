//LEVEL 3
//LAB 4
//NAME: pranav bhavsar
//date: 2023-02-02
int RGBYellowPin=10;
int RGBGreenPin=11;
int RGBRedPin=12;
int RGBBluePin=13;

int sensor=A1;
int data=0;

void setup(){
  
 pinMode(RGBRedPin, OUTPUT);
 pinMode(RGBBluePin, OUTPUT);
 pinMode(RGBGreenPin, OUTPUT);
 pinMode(RGBYellowPin, OUTPUT);
 pinMode(sensor, INPUT);
 Serial.begin(9600);
}

void loop() //The loop function runs forever.
{  
data = analogRead(sensor); 
data = map(data,6,679,0,15);
Serial.print("Light value = ");
Serial.println(data); //Print the data to the serial port.
  
 
  if (data >= 8){ // RED led
    digitalWrite(RGBRedPin, HIGH);
    data=data-8;
  }
  else {
    digitalWrite(RGBRedPin, LOW);
  }
  
  
  if (data >= 4) { // BLUE led
    digitalWrite(RGBBluePin, HIGH);
    data=data-4;
  } 
  else {
    digitalWrite(RGBBluePin, LOW);
  }
  
  
  if (data >= 2) { // GREEN led
    digitalWrite(RGBGreenPin, HIGH);
    data=data-2;
  } 
  else {
    digitalWrite(RGBGreenPin, LOW);
  }
  
  
  if (data >= 1) { // yellow led
    digitalWrite(RGBYellowPin, HIGH);
    data=data-1;
  }
  else {
    digitalWrite(RGBYellowPin, LOW);
  }
  
}


