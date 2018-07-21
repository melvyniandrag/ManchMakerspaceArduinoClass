/**
 * Notice the pin mode for the button is different than the other sketches we've
 * looked at this far. The pin mode in this sketch is 
 * 
 * Note: there is no INPUT_PULLDOWN, there is only INPUT, OUTPUT, and INPUT_PULLUP
 * 
 * Activity:
 *  Switch the LED to an off-board led now, with the proper resistor in place.
 *  
 */

const int ButtonPin = 4;
const int LEDPin = 13;
const int BaudRate = 9600;

void setup() {
  pinMode( ButtonPin, INPUT_PULLUP);
  pinMode( LEDPin, OUTPUT );

}

void loop() {
  if( digitalRead( ButtonPin ) ){
    digitalWrite( LEDPin, LOW );
  }
  else{
    digitalWrite( LEDPin, HIGH );
  }

}
