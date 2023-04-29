/*
Name:- Pranav Bhavsar
Date:- 2023-03-22
200545944
LAB 9
LEVEL 04
*/
#include <LiquidCrystal.h>
#define IR_RECEIVE_PIN 10

#include <IRremote.h> //including infrared remote

// Serial LCD.
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int value;

void setup()
{
    Serial.begin(9600);
    IrReceiver.begin(IR_RECEIVE_PIN);
}

void loop()
{

    if (IrReceiver.decode()) // If statement is used  to control the LCD
    {
        IrReceiver.resume();
        value = IrReceiver.decodedIRData.command;
        Serial.println(value);

        if (value == 16) // 1			// Display my Name
        {
            lcd.clear();
            lcd.setCursor(5, 0);
            lcd.print("Pranav"); // Print
            delay(1000);
        }

        else if (value == 17) // Favorite Food
        {
            lcd.clear();
            lcd.setCursor(4, 0);
            lcd.print("Biryani"); // Print
            delay(1000);
        }

        else if (value == 18) // Favorite Subject
        {
            lcd.clear();
            lcd.setCursor(5, 0);
            lcd.print("Arduino"); // Print
            delay(1000);
        }
        else if (value == 20) // Favorite Country
        {
            lcd.clear();
            lcd.setCursor(3, 0);
            lcd.print("Canada"); // Print
            delay(1000);
        }
        else if (value == 0) // Welcome Message when it starts
        {
            lcd.clear();
            lcd.setCursor(5, 0);
            lcd.print("Welcome"); // Print
            delay(1000);
        }
    }
}
