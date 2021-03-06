/**
 * In this tutorial we will use a different output pin to blink an led
 * V = R/I = ( 5 - 2 ) / 0.015 = 200 -> use 220
 */

const int Pin = 2;
const unsigned long delay_ms = 500;

void setup() {
  pinMode( Pin, OUTPUT );
}

void loop() {
  digitalWrite(Pin, HIGH);
  delay( delay_ms );
  digitalWrite(Pin, LOW);
  delay( delay_ms );
}
