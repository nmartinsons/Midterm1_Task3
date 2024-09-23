#include <Arduino.h>

// TASK3
#define LED_RED 8    // Red light
#define LED_YELLOW 9 // Yellow light
#define LED_GREEN 10 // Green light

void clearDisplay(void)
{
  digitalWrite(LED_RED, LOW);    // Red OFF
  digitalWrite(LED_YELLOW, LOW); // Yellow OFF
  digitalWrite(LED_GREEN, LOW);  // Green OFF
}

void setup()
{
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);

  // Turn all LEDs off initially
  clearDisplay();
}

void displayRed()
{
  digitalWrite(LED_RED, HIGH); // Red ON
  delay(5000);                 // Red ON for 5 seconds
  clearDisplay();              // The Red light OFF
}

void displayYellow()
{
  digitalWrite(LED_YELLOW, HIGH); // Turn Yellow ON
  delay(2000);                    // Keep Yellow ON for 2 seconds
  clearDisplay();                 // The Yellow light OFF
}

void displayGreen()
{
  digitalWrite(LED_GREEN, HIGH); // Green ON
  delay(5000);                   // Green ON for 5 seconds
  clearDisplay();                // The Green light OFF
}

void loop()
{
  displayGreen();  // Green for 5 seconds
  displayYellow(); // Yellow for 2 seconds
  displayRed();    // Red for 5 seconds
}
