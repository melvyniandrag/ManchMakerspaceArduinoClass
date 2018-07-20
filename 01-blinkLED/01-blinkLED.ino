/*
 * Blink the onboard LED
 * 
 * Then use Ohm's Law to compute a resistor and blink an off-board LED on pin13 
 * 
 * Notice that some constants are built into the arduino IDE environment. LED_BUILTIN = 13.
 * You can change LED_BUILTIN to 13 on any of the lines that use it and the behavior is the same.
 * We will confirm this later in the serial monitor part of the tutorial.
 */

// LED_BUILTIN=12; Uncomment this and you will see the code doesn't compile because LED_BUILTIN is defined in a standard header.

const unsigned long delayTime = 1000;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay( delayTime );
    digitalWrite(LED_BUILTIN, LOW);
    delay( delayTime );
}
