//LEVEL 3
//Date:2023-02-09
//NAME: PRANAV BHAVSAR
//LAB 5
//200545944

int button_1 = 2; 
int button_2 = 3;
int RGBredPin = 9; 
int RGBgreenPin = 11; 
int RGBbluePin = 10; 
int value = 0;
void setup() // The setup function runs once.
{
   Serial.begin(9600);
   pinMode(RGBredPin, OUTPUT);
   pinMode(RGBbluePin, OUTPUT);
   pinMode(RGBgreenPin, OUTPUT);
   pinMode(button_1, INPUT);
   pinMode(button_2, INPUT);
}

void loop() // The loop that runs forever.
{
  if (digitalRead(button_1) == HIGH)
   {
   value = 1;
   }
  if (digitalRead(button_2) == HIGH) 
  {
   value = 0;  
  }
  if(value==1)
  {
    digitalWrite(RGBredPin, HIGH); //red LED will turn on.
    delay(500); // wait for 0.5 seconds
    digitalWrite(RGBredPin, LOW); // red LED will turn off
    value = 2;
  }
  else if (value==2)
  {
    digitalWrite(RGBgreenPin, HIGH); // green LED will turn on.
    delay(500); // wait for 0.5 seconds
    digitalWrite (RGBgreenPin, LOW); // green LED will turn off.
    value = 3; 
  }
  else if(value==3)
  {
    digitalWrite(RGBbluePin, HIGH); // blue LED will turn on.
    delay(500);// wait for 0.5 seconds
    digitalWrite(RGBbluePin, LOW);// blue LED will turn off.
    value = 1;
  }
  else if (value==0)
  {
    digitalWrite(RGBredPin, LOW);
    digitalWrite(RGBgreenPin, LOW);
    digitalWrite(RGBbluePin, LOW);
  }
} 
