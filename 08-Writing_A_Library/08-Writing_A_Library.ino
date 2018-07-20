#include <MyLED.h>

/**
 * Just like the previous example, except now we will use the Serial monitor to 
 * be able to write messages to / from the arduino!
 * 
 * Exercises:
 * 1. Switch the led to the onboard led.
 * 2. Switch the pull down resistor to a pull up resistor!
 */
#include "MyLED.h"

MyLED led;

void setup() {
  led.selectPin(5);
}

void loop() {
  led.blinkLED(2000,1000);
}
