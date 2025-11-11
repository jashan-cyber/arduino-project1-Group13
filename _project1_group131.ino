/*
  Project Title: LED Control Circuit
  Project Number: 1
  Group Number: 13
  Course: COMP1045 - Internet of Things (Arduino)

  Group Members:
  - Jashanpreet Singh
  - Aryan Katotra
  - Milan Karki

  Description:
  This Arduino project uses an Arduino Uno, a breadboard, a resistor, and a red LED.
  The LED is connected to digital pin 13 and blinks at a regular interval using the delay() function.
  The purpose of this project is to demonstrate basic digital output control in Arduino using C++.
*/

int ledPin = 13;  // LED connected to digital pin 13

void setup() {
  pinMode(ledPin, OUTPUT);  // Set pin 13 as an OUTPUT
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Turn the LED ON
  delay(700);                  // Wait 700 milliseconds
  digitalWrite(ledPin, LOW);   // Turn the LED OFF
  delay(700);                  // Wait again
}
