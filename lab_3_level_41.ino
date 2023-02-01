//LEVEL 3 LEVEL 4 
//Date:2023-01-29
//NAME: PRANAV BHAVSAR

int RGBRedPin = 9; //The red RGB LED is connected to pin 9 of the Arduino.
int RGBGreenPin = 10; //The green RGB LED is connected to pin 10 of the Arduino.
int RGBBluePin = 11; //The blue RGB LED is connected to pin 11 of the Arduino.
int initialValue = 0;
void setup() { //The Setup function runs once.
  Serial.begin(9600);
  pinMode(RGBRedPin, OUTPUT); //Setup red RGB LED pin as an output pin.
  pinMode(RGBGreenPin, OUTPUT); //Setup green RGB LED pin as an output pin.
  pinMode(RGBBluePin, OUTPUT); //Setup blue RGB LED pin as an output pin
  Serial.println("Enter the combination of RGB Letters");
}

void loop(){ // this loop runs forever
  
  if (Serial.available() > 0){
    for(int i = 0; i < Serial.available(); i++){
      initialValue = Serial.read();
      //FOR RED COLOR
      if(initialValue == 'R'){
        Serial.println("RED COLOR");
        digitalWrite(RGBRedPin,HIGH);
        digitalWrite(RGBGreenPin,LOW);
        digitalWrite(RGBBluePin,LOW);
        delay(1000);
        //FOR GREEN COLOR
      }else if(initialValue == 'G'){
        Serial.println("GREEN COLOR");
        digitalWrite(RGBGreenPin,HIGH);
        digitalWrite(RGBRedPin,LOW);
        digitalWrite(RGBBluePin,LOW);
        delay(1000);
        //FOR BLUE COLOR
      }else if(initialValue == 'B') {
        Serial.println("BLUE COLOR");
        digitalWrite(RGBBluePin,HIGH);
        digitalWrite(RGBGreenPin,LOW);
        digitalWrite(RGBRedPin,LOW);
        delay(1000);
        //NOT ENTERED THE CORRECT COMBINATION !!
      }else{
        Serial.println("PLEASE ENTER THE CORRECT COMBINATION :)");
      }
    }
  }
}
