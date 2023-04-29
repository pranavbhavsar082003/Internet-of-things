/*
Name:-pranav bhavsar 
lab 10 
level 02
200545944
*/

#include <Servo.h>
Servo myservo;
int btn1 = 2;
int btn2 = 3;
int val;
void setup()
{
myservo.attach(4);
pinMode(btn1, INPUT);
pinMode(btn2, INPUT);
Serial.begin(9600);
}
void loop()
{
if (digitalRead(btn1) == HIGH)
    {//CONDITIONS FOR BTN1
        val++;
        if (val == 0)
        {
            val = 1;
        }
        else if (val == 1)
        {
            myservo.write(45); // 25%
            delay(1500);
        }
        else if (val == 2)
        {
            myservo.write(90); // 50%
            delay(1500);
        }
        else if (val == 3)
        {
            myservo.write(135); // 75%
            delay(1500);
        }
        else if (val == 4)
        {
            myservo.write(180); // 100%
            delay(1500);

        } 

    } 

    //CONDITIONS FOR BTN2
    else if (digitalRead(btn2) == HIGH)
    {
        val--;
        if (val == 4)
        {
            myservo.write(180); // 100%
            delay(1500);
        }
        else if (val == 3)
        {
            myservo.write(135); // 75%
            delay(1500);
        }
        else if (val == 2)
        {
            myservo.write(90); // 50%
            delay(1500);
        }
        else if (val == 1)
        {
            myservo.write(45); // 25%
            delay(1500);
        }
        else if (val == 0)
        {
            myservo.write(0); // 0%
            delay(1500);

        } 

    } 
} 