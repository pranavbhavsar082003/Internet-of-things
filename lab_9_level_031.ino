/*
Name:- Pranav Bhavsar
Date:- 2023-03-22
200545944
LAB 9 
LEVEL 03
*/
#include <IRremote.h>
#define IR_RECEIVE_PIN 11
#define btn 0
#define btn1 16
#define btn2 17
#define btn3 18
#define btn4 20
#define btn5 21
#define btn6 22
#define btn7 24
#define btn8 25
#define btn9 26

int redLed = 13;
int blueLed = 12;
int value;
bool level1 = false;
bool level2 = false;
bool level3 = false;
bool Switch;

void setup()
{
    pinMode(blueLed, OUTPUT);
    pinMode(redLed, OUTPUT);

    Serial.begin(9600);
    IrReceiver.begin(IR_RECEIVE_PIN);
}
void loop()
{
    if (IrReceiver.decode())
    {
        IrReceiver.resume();
        value = IrReceiver.decodedIRData.command;

        if (value == btn)
        {
            Switch = true;
            Serial.println("WELCOME!");
            Serial.println("press 1 to turn on Blue led");
            Serial.println("press 2 to turn off Blue led");
            Serial.println("press 3 to control Red Led");
            Serial.println("press 4 to Control both Led lights");
        }

        if (Switch)
        {
            level1 = true;
            if (level1 == true) // level 1 menu

            {
                if (value == btn1)
                {
                    digitalWrite(blueLed, HIGH); // turn on blueLED
                }
                if (value == btn2)
                {
                    digitalWrite(blueLed, LOW); // turn off blueLED
                }
                if (value == btn3)
                {
                    level2 = true;
                    level1 = false;
                  	Serial.println("moving to menu 1,Please follow the commands");
                    Serial.println("press 5 to turn on redLED");
                    Serial.println("press 6 to turn off redLED");
                    Serial.println("press 7 to control blueLED");
                    Serial.println("press 4 to control both LED lights");
                }

                if (value == btn4)
                {
                    level3 = true;
                    level1 = false;
                    Serial.println("press 8 to turn on both LED lights");
                    Serial.println("press 9 to turn off both LED lights");
                    Serial.println("press 7 to control Blue LED");
                    Serial.println("press 3 to control Red LEDs");
                }

                if (level2) // level 2 menu

                {
                    if (value == btn5)
                    {
                        digitalWrite(redLed, HIGH); // turn on redLED
                    }

                    if (value == btn6)
                    {
                        digitalWrite(redLed, LOW); // turn off redLED
                    }

                    if (value == btn7)
                    {
                        level1 = true;
                        level2 = false;
                      	Serial.println("moving to menu 2,Please follow the commands");
                        Serial.println("press 1 to turn on blueLED");
                        Serial.println("press 2 to turn off blueLED");
                        Serial.println("press 3 to control redLED");
                        Serial.println("press 4 to Control both LED lights");
                    }

                    if (value == btn4)

                    {

                        level3 = true;
                        level2 = false;

                        Serial.println("press 8 to turn on both LED lights");
                        Serial.println("press 9 to turn off both LED lights");
                        Serial.println("press 7 to control blueLED");
                        Serial.println("press 3 to control redLEDs");
                    }
                }

                if (level3) // level 3 menu
                {
                    if (value == btn8)
                    {
                        digitalWrite(blueLed, HIGH); // turn on blueLED
                        digitalWrite(redLed, HIGH);  // turn on redLED
                    }
                    if (value == btn9)
                    {
                        digitalWrite(blueLed, LOW); // turn off blueLED
                        digitalWrite(redLed, LOW);  // turn off redLED
                    }
                    if (value == btn7)
                    {

                        level1 = true;
                        level3 = false;
                      	Serial.println("moving to menu 3,Please follow the commands");
                        Serial.println("press 1 to turn on blueLED");
                        Serial.println("press 2 to turn off blueLED");
                        Serial.println("press 3 to control redLED");
                        Serial.println("press 4 to control both LED lights");
                    }

                    if (value == btn3)
                    {
                        level2 = true;
                        level3 = false;

                        Serial.println("press 5 to turn on Red LED");
                        Serial.println("press 6 to turn off redLED");
                        Serial.println("press 7 to control blueLED");
                        Serial.println("press 4 to control both LED lights");
                    }
                }
            }
        }
    }
}