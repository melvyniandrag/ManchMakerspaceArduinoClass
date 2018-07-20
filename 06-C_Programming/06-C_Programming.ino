/*
 * The Arduino has a small chip with limited memory. 
 * Depending on how complex you make your program, you may never hit the memory limit!
 * For this example, we will deliberately hit the limit
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
