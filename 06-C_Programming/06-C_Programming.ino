/*
 * The Arduino has a small chip with limited memory. 
 * Depending on how complex you make your program, you may never hit the memory limit!
 * For this example, we will deliberately hit the limit
 */

const unsigned long NUM_CACHE_LINES = 16;
const unsigned long CACHE_BITS = 128;
const unsigned long DATA_ELEMS_PER_LINE = CACHE_BITS / sizeof( unsigned long );
const unsigned long N = 101;
const int N_ITER = 1000;
volatile unsigned long STRIDE = DATA_ELEMS_PER_LINE;
volatile unsigned long multiplier = 1;
unsigned long bigArr[N] = {0};


unsigned long simpleStride( unsigned long iter ) {
  return ( iter * multiplier ) % N;
}

unsigned long cacheStride( unsigned long iter ) {
  return ( iter * STRIDE ) % N;
}

void timerFunction( unsigned long (*f)(unsigned long) , const char* strideFunName) {
  unsigned long sum = 0;
  unsigned long time = millis();
  for ( int iter = 0; iter < N_ITER; ++iter ) {
    for ( unsigned long i = 0; i < N; ++i ) {
      sum += bigArr[f(i)];
    }
  }
  time = millis() - time;
  Serial.print( strideFunName );
  Serial.print( " time: " );
  Serial.print( time );
  Serial.print( " sum: ");
  Serial.print( sum );
  Serial.print("\n");
}

void setup() {
  Serial.begin( 9600 );
  for ( unsigned long i = 0; i < N; ++i) {
    bigArr[i] = i;
  }
}

void loop() {
  timerFunction( simpleStride, "sequential access " );
  timerFunction( cacheStride,  "stided access     " );
  delay(1000);  
}
