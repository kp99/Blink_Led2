#include <Arduino.h>

// Set LED_BUILTIN if it is not defined by Arduino framework
//#define LED_BUILTIN 2

void setup()
{
  Serial.begin(9600);
	Serial.println ("..............");

  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("Led On");
  // wait for a second
  delay(1200);
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("Led Off");
   // wait for a second
  delay(200);
}
