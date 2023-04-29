/*Name: Pranav Bhavsar
student id: 200545944
*************** IOT FINAL PROJECT ********************

WEATHER STATION Final Project

SOME REFRENCES FOR CIRCUIT HAVE BEEN TAKEN FROM

youtube.ca  AND

https://www.arduino.cc/


The Weather Station project is created to monitor and show the current temperature,
*******some refrence of the(pre-defined) thresholds term has been taken from the internet.*******
and give alerts based on pre-defined thresholds for cold and hot temperatures.
It utilizes an Arduino board and a temperature sensor to read the temperature.
The temperature value is displayed on a 16x2 LCD screen along with a message indicating the weather condition.
The LCD display shows the temperature in Celsius with a degree symbol and the message "Temp:".
A visual indication of the temperature is also provided by three LEDs, with the blue LED turning on for cold temperatures,
red LED for hot temperatures, and yellow LED for normal temperatures. A serial monitor is also included in the project to display the weather condition message.
Overall, the Weather Station project offers a simple and efficient way to monitor and display temperature and alert users to extreme temperature conditions.
***************************************************
*/

// declaring library for lcd referred from lab 8 IOT

#include <LiquidCrystal.h>

// For lcd screen
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
// Temperature sensor setup
int tmp = A1;
// float value declaration >>>refrence from https://www.arduino.cc/
float value;
// Temperature value for hot condition
const int hot = 30;
// Temperature value for cold condition
const int cold = 10;
// red LED setup
int red = 6;
// blue LED setup
int blue = 8;
// yellow LED setup
int yellow = 7;

void setup()
{
    lcd.begin(16, 2);

    pinMode(tmp, INPUT);

    Serial.begin(9600);

    pinMode(blue, OUTPUT); // blue LED

    pinMode(yellow, OUTPUT); // yellow LED

    pinMode(red, OUTPUT); // red LED
}

void loop()
{ // Loop will never stop
    value = analogRead(tmp) * 0.004882814;

    /*For temparature calculation >>refrence from
    https://www.google.com/search?q=calculation+for+temperature&rlz=1C1RXQR_enCA1039CA1039&sxsrf=APwXEddmTKC-odmBgipB3qwzmVmC5v9fig%3A1682007789854&ei=7WZBZMHnM5mhptQPsKmrGA&oq=calculcation+for+tempera&gs_lcp=Cgxnd3Mtd2l6LXNlcnAQAxgAMgcIABANEIAEMgYIABAWEB4yBggAEBYQHjIGCAAQFhAeMgYIABAWEB4yBggAEBYQHjIGCAAQFhAeMggIABAFEB4QDTIKCAAQBRAeEA0QDzIKCAAQCBAeEA0QDzoHCCMQ6gIQJzoNCC4QxwEQ0QMQ6gIQJzoPCAAQigUQ6gIQtAIQQxgBOgQIIxAnOggIABCKBRCRAjoLCAAQgAQQsQMQgwE6EQguEIAEELEDEIMBEMcBENEDOgcIABCKBRBDOgcILhCKBRBDOgUIABCABDoKCAAQigUQsQMQQzoICAAQgAQQsQM6DgguEIAEELEDEMcBENEDOgcIABCABBAKOg0IABCABBCxAxCDARAKOgoIABCABBCxAxAKOg0IABCABBCxAxCxAxAKOgYIABAeEA06CAgAEBYQHhAPSgQIQRgAUMEOWNFSYPlpaAFwAXgAgAGcAYgBiBWSAQQ3LjE3mAEAoAEBsAEUwAEB2gEGCAEQARgB&sclient=gws-wiz-serp*/

    value = (value - 0.5) * 100.0;

    lcd.setCursor(0, 0);

    lcd.print("Temp: ");

    lcd.print(value);

    // Display degree symbol for Celsius
    // refrencs youtube
    lcd.print((char)223);

    lcd.print("C");

    // conditions
    if (value < cold)
    {
        // Cold temperature condition
        lcd.setCursor(0, 1);
        // blue LED will turn on when tempreture sensor goes down
        digitalWrite(blue, HIGH);
        // other LEDs will remain off
        digitalWrite(yellow, LOW);

        digitalWrite(red, LOW);

        lcd.print("Alert! It's cold");

        Serial.println("Alert! It's cold :(");
    }
    else if (value >= hot)
    {
        // Hot temperature condition
        lcd.setCursor(0, 1);
        // red LED will turn on when tempreture sensor goes high
        digitalWrite(red, HIGH);
        // other LEDs will remain off
        digitalWrite(yellow, LOW);

        digitalWrite(blue, LOW);

        lcd.print("Alert! Red hot");

        Serial.println("Alert! Red hot :(");
    }
    else
    {
        // Normal temperature condition
        lcd.setCursor(0, 1);
        // Yellow LED will turn on when tempreture remains normal
        digitalWrite(yellow, HIGH);
        // other LEDs will remain off
        digitalWrite(red, LOW);
        
      	digitalWrite(blue, LOW);
        
      	lcd.print("Normal weather");
       
      	Serial.println("Normal weather");
    }
    // End Of Conditions

    // Wait for 0.5 second delay
    delay(500);

    // Clear the display for next reading
    lcd.clear();
}
/*End of the code
Thank You
*/