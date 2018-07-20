/**
 * In this example we will drive a servo with the arduino servo library!
 * 
 * We will modify the code to take servo angles from a serial connection!
 */

#include <Servo.h>

Servo servo;
const int ServoPin = 3;
const int BaudRate = 9600;
const int ServoDelay = 10;
const int MaxServoAngle = 174;

void setup() {
  Serial.begin(BaudRate);
  servo.attach(ServoPin);
  servo.write(0);
}

void loop() {
  for ( int i = 0; i < MaxServoAngle; ++i ){
    servo.write(i);
    delay( ServoDelay );
  }
  for( int i = MaxServoAngle - 1; i >= 0; --i ){
    servo.write(i);
    delay(ServoDelay);
  }
}
