// lab 3
// level 2
// NAME : Pranav Bhavsar
// date : 2023-01-26

int rotationPin = A0; // The rotation sensor is plugged into pin A0 of the Arduino.
int value = 0;        // Used to store data from sensor.
int r = 9;            // red
int g = 10;           // green
int b = 11;           // blue
void setup()
{                       // The Setup function runs once.
Serial.begin(9600); // This will enable the Arduino to send data to the Serial
// monitor.

pinMode(rotationPin, INPUT);
pinMode(r, OUTPUT);
pinMode(g, OUTPUT);
pinMode(b, OUTPUT);

}
void loop()
{ // The loop function runs forever.
value = analogRead(rotationPin);
int dd = (1023 - value) + 150; // Read the value from the light sensor and store it in the lightData variable.
Serial.print("Rotation value =");
Serial.println(value); // Print the data to the serial port.
//	There are 7 marks on the potentiometer.
// Maximum value of reading 1023/7 = 148(APPROXIMATELY)
// For red
if (value >= 0 && value < 150)//Conditional statement 
{
analogWrite(r, 255);
analogWrite(g, 0);
analogWrite(b, 0);
delay(dd);
Serial.println(value);
}
else if (value >= 150 && value < 300) // For orange
{
analogWrite(r, 255);
analogWrite(g, 165);
analogWrite(b, 0);
delay(dd);
Serial.println(value);
}
else if (value >= 300 && value < 450) // For yellow
{
analogWrite(r, 255);
analogWrite(g, 255);
analogWrite(b, 0);
delay(dd);
Serial.println(value);
}
else if (value >= 450 && value < 600) // For green
{
analogWrite(r, 0);
analogWrite(g, 255);
analogWrite(b, 0);
delay(dd);
Serial.println(value);
}
else if (value >= 600 && value < 750) // For blue
{
analogWrite(r, 0);
analogWrite(g, 0);
analogWrite(b, 255);
delay(dd);
Serial.println(value);
}
else if (value >= 750 && value < 900) // For purple
{
analogWrite(r, 160);
analogWrite(g, 32);
analogWrite(b, 240);
delay(dd);
Serial.println(value);
}
else if (value >= 900 && value <1023) // For indigo
{
analogWrite(r, 75);
analogWrite(g, 0);
analogWrite(b, 130);
delay(dd);
Serial.println(value);
    }
}
