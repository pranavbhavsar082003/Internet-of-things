//LEVEL 2
//Date:2023-01-12
//NAME: PRANAV BHAVSAR
//assignment 1
//
int blueLED = 13;
int dot = 200; //1 UNIT
int dash = 600;//3 UNIT
int space_inLetter = 200; //1 unit
int between = 600; // 3 units
int space_words = 1400;// 7 units 

//define input and outputs
void setup()
{
  pinMode(blueLED, OUTPUT);
}
//runs forever
void loop()
{
	//N - dash dot

  digitalWrite(blueLED, HIGH);
  delay(dash); // Wait for 600 millisecond(s)
  digitalWrite(blueLED, LOW);
  delay(space_inLetter); // Wait for 200 millisecond(s)

  digitalWrite(blueLED, HIGH);
  delay(dot); // Wait for 200 millisecond(s)
  digitalWrite(blueLED, LOW);
  delay(between); // Wait for 600 millisecond(s)

	//E - dot

  digitalWrite(blueLED, HIGH);
  delay(dot); // Wait for 200 millisecond(s)
  digitalWrite(blueLED, LOW);
  delay(between); // Wait for 600 millisecond(s)

	//T - dash

  digitalWrite(blueLED, HIGH);
  delay(dash); // Wait for 600 millisecond(s)
  digitalWrite(blueLED, LOW);
  delay(space_words); // Wait for 1400 millisecond(s)
   				
					 //2nd letter

	//D - dash dot dot 

  digitalWrite(blueLED, HIGH);
  delay(dash); // Wait for 600 millisecond(s)
  digitalWrite(blueLED, LOW);
  delay(space_inLetter); // Wait for 200 millisecond(s)

  digitalWrite(blueLED, HIGH);
  delay(dot); // Wait for 200 millisecond(s)
  digitalWrite(blueLED, LOW);
  delay(space_inLetter); // Wait for 200 millisecond(s)

  digitalWrite(blueLED, HIGH);
  delay(dot); // Wait for 200 millisecond(s)
  digitalWrite(blueLED, LOW);
  delay(between); // Wait for 600 millisecond(s)
	
	//I - DOT DOT 
  digitalWrite(blueLED, HIGH);
  delay(dot); // Wait for 200 millisecond(s)
  digitalWrite(blueLED, LOW);
  delay(space_inLetter); // Wait for 200 millisecond(s)

  digitalWrite(blueLED, HIGH);
  delay(dot); // Wait for 200 millisecond(s)
  digitalWrite(blueLED, LOW);
  delay(between); // Wait for 600 millisecond(s)

	//E - DOT
  digitalWrite(blueLED, HIGH);
  delay(dot); // Wait for 200 millisecond(s)
  digitalWrite(blueLED, LOW);
  delay(space_words); // Wait for 1400 millisecond(s)


}
