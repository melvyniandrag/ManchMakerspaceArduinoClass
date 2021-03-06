/**
 * Just like the previous example, except now we will use the Serial monitor to 
 * be able to write messages to / from the arduino!
 * 
 * Exercises:
 * 1. Switch the led to the onboard led.
 * 2. Switch the pull down resistor to a pull up resistor!
 */

const int ButtonPin = 3;
const int LEDPin = 5;
const int BaudRate = 9600; // this is the speed at which data is written over the serial cable.
// The baud rate depends on the device you are writing to, but for writing to the Arduino serial monitor, 9600 is fine.

void setup() {
  Serial.begin(BaudRate);
  pinMode( ButtonPin, INPUT );
  pinMode( LEDPin, OUTPUT );

}

void loop() {
  if( digitalRead(ButtonPin) == LOW ){
    //Different ways to write to serial.
    //Serial.println("Turning the LED on!");
    //Serial.print("Turning the LED on!");
    Serial.print("Turning the LED on!\n");
    digitalWrite(LEDPin, HIGH);
  }
  else{
    digitalWrite(LEDPin, LOW);
  }

}
