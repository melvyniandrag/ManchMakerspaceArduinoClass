/**
 * In this example we will drive a servo with the arduino servo library!
 * 
 * Here is an example of how to drive multiple servos. You need an external power supply because the Arduino doesnt
 * supply enough current. We will cover this is time allows and we have enough power supplys.
 * https://circuitdigest.com/microcontroller-projects/controlling-multiple-servo-motors-with-arduino
 */

#include <Servo.h>

Servo servo;
const int ServoPin = 3;
const int BaudRate = 9600;
const int ServoDelay = 10;
const int MaxServoAngle = 174;

void rotateForward(){
  for ( int i = 0; i < MaxServoAngle; ++i ){
    servo.write(i);
    delay( ServoDelay );
  }
}

void rotateBackward(){
  for( int i = MaxServoAngle - 1; i >= 0; --i ){
    servo.write(i);
    delay(ServoDelay);
  }  
}

void setup() {
  Serial.begin(BaudRate);
  servo.attach(ServoPin);
  servo.write(0);
}

void loop() {
  rotateForward();
  rotateBackward();
}
