//LEVEL 4
//Date:2023-02-09
//NAME: PRANAV BHAVSAR
//LAB 5
//200545944
int buttonPin1=2;//FOR BUTTON 1 
int buttonPin2 = 3;// FOR BUTTON 2
int redLed = 6;// RED LED LIGHT SETUP
int greenLed = 7; // GREEN LED LIGHT SETUP
int rgbRed =9 ;//RGB RED
int rgbGreen =11;//RGB GREEN
int rgbBlue = 10;//RGB BLUE
int state=0; // VALUE STORED
int redOn = HIGH; // INITIALLY TURN RED LED
int greenOn = LOW;// INITIALLY TURN GREEN LED
int rgbOn = LOW;

void setup() {// IT WILL RUN ONCE 
  pinMode(redLed, OUTPUT);       
  pinMode(greenLed, OUTPUT);    
  pinMode(buttonPin1, INPUT);   
  pinMode(buttonPin2, INPUT);   
  pinMode(rgbRed, OUTPUT);      
  pinMode(rgbGreen, OUTPUT);    
  pinMode(rgbBlue, OUTPUT);     
  attachInterrupt(digitalPinToInterrupt(buttonPin1),onLED, RISING);
  attachInterrupt(digitalPinToInterrupt(buttonPin2),onRGB, RISING);
}
void loop() {
  digitalWrite(redLed, redOn);
  digitalWrite(greenLed,greenOn);
  
  //FOR RGB LIGHT
   if (rgbOn == HIGH) {
      
    switch (state) {
      case 0:
      	digitalWrite(rgbRed, HIGH);
      delay(200);
		digitalWrite(rgbRed, LOW);
      state = 1;
        break;
      case 1:
        digitalWrite(rgbGreen, HIGH);
      delay(200);
        digitalWrite(rgbGreen, LOW);

      state = 2;
        break;
      case 2:
        digitalWrite(rgbBlue, HIGH);
      delay(200);
        digitalWrite(rgbBlue, LOW);
      state =3;
        break;
      case 3:
      digitalWrite(rgbRed, LOW);
      digitalWrite(rgbGreen, LOW);
      digitalWrite(rgbBlue, LOW);
      state =0;
      break;
    }
   }
}

void onLED(){
  //FOR LED LIGHTS 
  if(greenOn == LOW){
    greenOn = HIGH;
    redOn = LOW;
  }else{
   greenOn = LOW;
   redOn = HIGH;
  }
  rgbOn = LOW;
}

void onRGB(){
  if(greenOn == HIGH){
    rgbOn = !rgbOn;
  }
}
