/*
Name:-pranav bhavsar 
lab 10 
level 03
200545944
*/

#include <Servo.h>
Servo myservo;
int btn1 = 2;
int btn2 = 3;
int RGBred = 9;    
int RGBgreen = 10; 
int RGBblue = 11;  
int val;
void setup()
{
myservo.attach(4);
pinMode(btn1, INPUT);
pinMode(btn2, INPUT);
pinMode(RGBred, OUTPUT);
pinMode(RGBgreen, OUTPUT);
pinMode(RGBblue, OUTPUT);  
Serial.begin(9600);
myservo.write(0);
}
void loop()
{

    // adding conditions for first btn.
    if (val == 0)
    {
        myservo.write(0);      // at 0%
        analogWrite(RGBred, 255); //yellow light will glow
        analogWrite(RGBgreen, 255);
        analogWrite(RGBblue, 0);
    }

    if (digitalRead(btn1) == HIGH)
    {
        val++;
        if (val == 0)
        {
            val = 1;
        }

        else if (val == 1)
        {
            myservo.write(45);     // at 25%
            analogWrite(RGBred, 255); //RGBred light will glow
            analogWrite(RGBgreen, 0);
            analogWrite(RGBblue, 0);
            delay(1000);
        }
        else if (val == 2)
        {
            myservo.write(90);       // at 50%
            analogWrite(RGBgreen, 255); //RGBgreen light will glow
            analogWrite(RGBred, 0);
            analogWrite(RGBblue, 0);
            delay(1000);
        }
        else if (val == 3)
        {
            myservo.write(135);     // at 75%
            analogWrite(RGBblue, 255); //RGBblue light will glow
            analogWrite(RGBred, 0);
            analogWrite(RGBgreen, 0);
            delay(1000);
        }
        else if (val == 4)
        {
            myservo.write(180); // at 100%
            analogWrite(RGBred, 255);
            analogWrite(RGBgreen, 255);
            analogWrite(RGBblue, 255); //white light will glow
            delay(1000);
        }
        else if (val == 5)
        {
            myservo.write(135); //at 75%
            analogWrite(RGBred, 0);
            analogWrite(RGBgreen, 0);
            analogWrite(RGBblue, 255); //RGBblue light will glow
            delay(1000);
            myservo.write(90); // at 50%
            analogWrite(RGBred, 0);
            analogWrite(RGBgreen, 255); //RGBgreen light will glow
            analogWrite(RGBblue, 0);
            delay(1000);
            myservo.write(45);     //at 25%
            analogWrite(RGBred, 255); //RGBred light will glow
            analogWrite(RGBgreen, 0);
            analogWrite(RGBblue, 0);
            delay(1000);
            myservo.write(0); // at 0%
            analogWrite(RGBred, 255);
            analogWrite(RGBgreen, 255);
            analogWrite(RGBblue, 0); //yellow light will glow
            delay(1000);

        } // end of if statements.

    } // end of conditions for btn 1.

    // adding conditions for second btn
    else if (digitalRead(btn2) == HIGH)
    {
        val++;
        if (val == 6)
        {
            myservo.write(45);     // at 25%
            analogWrite(RGBred, 255); // RGBred light will glow
            analogWrite(RGBgreen, 0);
            analogWrite(RGBblue, 0);
            delay(1000);
            myservo.write(90); // at 50%
            analogWrite(RGBred, 0);
            analogWrite(RGBgreen, 255); //RGBgreen light will glow
            analogWrite(RGBblue, 0);
            delay(1000);
            myservo.write(135); // at 75%
            analogWrite(RGBred, 0);
            analogWrite(RGBgreen, 0);
            analogWrite(RGBblue, 255); // RGBblue light will glow
            delay(1000);
            myservo.write(180); // at 100%
            analogWrite(RGBred, 255);
            analogWrite(RGBgreen, 255);
            analogWrite(RGBblue, 255); //white light will glow
            delay(1000);

        } 

    } 

} 