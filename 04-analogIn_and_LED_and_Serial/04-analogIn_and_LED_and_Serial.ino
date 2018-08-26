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
const int BaudRate = 9600;

void setup() {
  Serial.begin(BaudRate);
  pinMode( ButtonPin, INPUT );
  pinMode( LEDPin, OUTPUT );

}

void loop() {
  if( digitalRead(ButtonPin) == HIGH ){
  //if(1){
    //Serial.println("Turning the LED on!");
    //Serial.print("Turning the LED on!");
    Serial.print("Turning the LED on!\n");
    digitalWrite(LEDPin, HIGH);
  }
  else{
    digitalWrite(LEDPin, LOW);
  }

}
