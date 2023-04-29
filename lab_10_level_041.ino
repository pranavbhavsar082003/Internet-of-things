/*
Name:-pranav bhavsar
lab 10
level 04
200545944
*/

#include <Wire.h>
#include <Servo.h>

Servo myservo;
int RGBred = 9;
int RGBgreen = 10;
int RGBblue = 11;
int x = Wire.read(); // This will receive input as an integer.

void setup()
{
    Wire.begin(4);
    Wire.onReceive(receiveEvent);
    Serial.begin(9600);
    myservo.attach(4);
    myservo.write(0);
    pinMode(RGBred, OUTPUT);
    pinMode(RGBgreen, OUTPUT);
    pinMode(RGBblue, OUTPUT);
}

void loop()
{
    delay(100);
}

void receiveEvent(int howMany)
{
    while (Wire.available() > 0)
    {
        x = Wire.read();

        if (val == 0)
        {
            myservo.write(0);         // at 0%
            analogWrite(RGBred, 255); // show yellow
            analogWrite(RGBgreen, 255);
            analogWrite(RGBblue, 0);
        }

        // adding conditions for button 1.
        if (x == 1)
        {
            val++;
            if (val == 0)
            {
                val = 1;
            }

            else if (val == 1)
            {
                myservo.write(45);        // at 25%
                analogWrite(RGBred, 255); // show RGBred
                analogWrite(RGBgreen, 0);
                analogWrite(RGBblue, 0);
                delay(1500);
            }
            else if (val == 2)
            {
                myservo.write(90);          // at 50%
                analogWrite(RGBgreen, 255); // show RGBgreen
                analogWrite(RGBred, 0);
                analogWrite(RGBblue, 0);
                delay(1500);
            }
            else if (val == 3)
            {
                myservo.write(135);        // at 75%
                analogWrite(RGBblue, 255); // show RGBblue
                analogWrite(RGBred, 0);
                analogWrite(RGBgreen, 0);
                delay(1500);
            }
            else if (val == 4)
            {
                myservo.write(180); // at 100%
                analogWrite(RGBred, 255);
                analogWrite(RGBgreen, 255);
                analogWrite(RGBblue, 255); // show white
                delay(1500);
            }
            else if (val == 5)
            {
                myservo.write(135); // at 75%
                analogWrite(RGBred, 0);
                analogWrite(RGBgreen, 0);
                analogWrite(RGBblue, 255); // show RGBblue
                delay(1500);
                myservo.write(90); // at 50%
                analogWrite(RGBred, 0);
                analogWrite(RGBgreen, 255); // show RGBgreen
                analogWrite(RGBblue, 0);
                delay(1500);
                myservo.write(45);        // at 25%
                analogWrite(RGBred, 255); // show RGBred
                analogWrite(RGBgreen, 0);
                analogWrite(RGBblue, 0);
                delay(1500);
                myservo.write(0); // at 0%
                analogWrite(RGBred, 255);
                analogWrite(RGBgreen, 255);
                analogWrite(RGBblue, 0); // show yellow
                delay(1500);
            }
        }
        // conditions for button 2.
        else if (x == 2)
        {
            val++;
            if (val == 6)
            {
                myservo.write(45);        // at 25%
                analogWrite(RGBred, 255); // show RGBred
                analogWrite(RGBgreen, 0);
                analogWrite(RGBblue, 0);
                delay(1500);
                myservo.write(90); // at 50%
                analogWrite(RGBred, 0);
                analogWrite(RGBgreen, 255); // show RGBgreen
                analogWrite(RGBblue, 0);
                delay(1500);
                myservo.write(135); // at 75%
                analogWrite(RGBred, 0);
                analogWrite(RGBgreen, 0);
                analogWrite(RGBblue, 255); // show RGBblue
                delay(1500);
                myservo.write(180); // at 100%
                analogWrite(RGBred, 255);
                analogWrite(RGBgreen, 255);
                analogWrite(RGBblue, 255); // show white
                delay(1500);
            }
        }
    }
}