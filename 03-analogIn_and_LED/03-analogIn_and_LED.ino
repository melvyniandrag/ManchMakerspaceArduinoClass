/**
 * In this section we will get input from an analog in pin and 
 * use that input to turn an LED on or off
 * 
 * Notice that the pins on the Arduino are labeled digital(PWM) and AnalogIn. 
 * Analog In pins are for receiving inputs from sensors, buttons, and other analog
 * devices.
 * Digital pins are for digital (on or off) signals.
 * Schematic at: https://www.arduino.cc/en/Tutorial/Button
 * Discussion of the importance of the pull down resistor
 */

const int ButtonPin = 3;
const int LEDPin = 5;

void setup() {
  pinMode( ButtonPin, INPUT );
  pinMode( LEDPin, OUTPUT );

}

void loop() {
  if( digitalRead(ButtonPin) == HIGH ){
    digitalWrite(LEDPin, HIGH);
  }
  else{
    digitalWrite(LEDPin, LOW);
  }

}
