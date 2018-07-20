/*
 * In this example we will see how much stuff we can squeeze onto the
 * Arduino to get a feel for how big our programs / data can be.
 * 
 * We will create an array, populate it in an interesting way, and then do stuff with the array
 * Then we will try to make the array larger and see that the code no longer compiles.
 * 
 * The interesting thing we will do is square all the numbers in an array.
 * We will also see the importance of choosing the right datatype for your computations.
 * When reading a sensor that will only report values 0-100, use a char! If you use an int, you're wasting space!
 */

const unsigned long ArrSize = 1000;

//For this ArrSize, we can use a char array, but the int array uses too much memory
const char DefaultValue=0;
char Arr[ArrSize];

//const int DefaultValue = 0;
//int Arr[ArrSize];


void setup() {
  Serial.begin(9600);
  Serial.print("size of an int: ");
  Serial.print(sizeof(int));
  Serial.print("\n");
  Serial.print("size of an char: ");
  Serial.print(sizeof(char));
  Serial.print("\n");
  for( unsigned long i = 0; i < ArrSize; ++i ){
    Arr[i] = i;
  }
}

void loop() {
    for( int i = 0; i < ArrSize; ++i ){
      //int square = Arr[i] * Arr[i];
      char square = Arr[i] * Arr[i];
      Arr[i] = square;
    }
    delay(1000);
}
