/**
 * In this example we will drive our servo using serial commands.
 * 
 * So far we've only used Serial for output, but never for reading input.
 * 
 * We will read Serial data. If the value read is above a particular value, we will rotate clockwise. 
 * If the vaue is below a particular value, we will rotate in the other direction.
 * We won't exceed our angle bounds, though!
 */

#include <Servo.h>

Servo servo;
const int ServoPin = 3;
const int BaudRate = 9600;
const int ServoDelay = 10;
const int MinServoAngle = 0;
const int MaxServoAngle = 174;
int servoAngle = 0;
const char SerialCutoff = 128/2; // verify this makes sense with ASCII

char evaluate( const char SerialInput ){
  if (SerialInput > SerialCutoff)
    return 'r';
  else
    return 'l';
}

int computeBoundedAngle( const char leftOrRight ){
  if ( leftOrRight == 'l' )
    return max( MinServoAngle, servoAngle - 10 );
  else
    return min( MaxServoAngle, servoAngle + 10 );
}

void setup() {
  Serial.begin(BaudRate);
  servo.attach(ServoPin);
  servo.write(servoAngle);
}

void loop() {
  if (Serial.available()){
    char input = Serial.read();
    char leftOrRight = evaluate( input );
    servoAngle = computeBoundedAngle( leftOrRight );
    servo.write(servoAngle);
    delay(100); // so we don't get flooded with serial input
  }
}
