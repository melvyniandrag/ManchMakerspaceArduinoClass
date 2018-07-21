/**
 * Let's look quickly at strings in Arduino, ASCII, 
 * and the different ways to print out text in arduino
 */

int Counter = 0;

const int N = 11;

// Arduino has a string library. These are the different ways to construct a string.
const String strings[N] = {
  "Hello String", // implicit constructor call
  String("This is a string"), // constructor call
  String( String("This is a string ") + " with more"), // can concatenate Strings
  String('a'), // output char
  String('a', HEX ), //output char as HEX
  String('a', DEC ), //output char as DEC
  String(13), // output dec
  String(45, HEX), // output hex
  String(255, BIN), // output binary
  String(millis(), DEC), // millis() is milliseconds since the prog. started.
  String(5.69844, 3) // truncate the float
};


void setup() {
  Serial.begin( 9600 );
}

void loop() {
  Serial.println( strings[Counter] );
  Counter = ( ++Counter ) % N;
  delay(1000);
}
