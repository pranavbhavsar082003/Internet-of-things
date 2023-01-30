						//LEVEL 3
//Date:2023-01-12
//NAME: PRANAV BHAVSAR
//week 1 
//assignment 1 
//level 3
				//First pattern for alternate 5 CYCLE

int blueLED = 13;
int redLED = 12;

//define input and outputs
void setup()
{
  pinMode(blueLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}
//runs forever
void loop()
{	
  digitalWrite(blueLED, HIGH);
  delay(0); // Wait for 0 millisecond(s)
  digitalWrite(redLED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(blueLED, LOW);
  delay(0); // Wait for 0 millisecond(s)
  digitalWrite(redLED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(blueLED, HIGH);
  delay(0); // Wait for 1000 millisecond(s)
  digitalWrite(redLED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(blueLED, LOW);
  delay(0); // Wait for 0 millisecond(s)
  digitalWrite(redLED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(blueLED, HIGH);
  delay(0); // Wait for 0 millisecond(s)
  digitalWrite(redLED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(blueLED, HIGH);
  delay(0); // Wait for 0 millisecond(s)
  digitalWrite(redLED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(blueLED, LOW);
  delay(0); // Wait for 0 millisecond(s)
  digitalWrite(redLED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(blueLED, HIGH);
  delay(0); // Wait for 1000 millisecond(s)
  digitalWrite(redLED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(blueLED, LOW);
  delay(0); // Wait for 0 millisecond(s)
  digitalWrite(redLED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(blueLED, HIGH);
  delay(0); // Wait for 0 millisecond(s)
  digitalWrite(redLED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

  //4 CYCLE ON THE SAME TIME 

  digitalWrite(blueLED, HIGH);
  delay(0); // Wait for 0 millisecond(s)
  digitalWrite(redLED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(blueLED, LOW);
  delay(0); // Wait for 0 millisecond(s)
  digitalWrite(redLED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(blueLED, HIGH);
  delay(0); // Wait for 0 millisecond(s)
  digitalWrite(redLED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(blueLED, LOW);
  delay(0); // Wait for 0 millisecond(s)
  digitalWrite(redLED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)


  digitalWrite(blueLED, HIGH);
  delay(0); // Wait for 0 millisecond(s)
  digitalWrite(redLED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(blueLED, LOW);
  delay(0); // Wait for 0 millisecond(s)
  digitalWrite(redLED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(blueLED, HIGH);
  delay(0); // Wait for 0 millisecond(s)
  digitalWrite(redLED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(blueLED, LOW);
  delay(0); // Wait for 0 millisecond(s)
  digitalWrite(redLED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

}