/**
 * In this example we use the Liquid Crystal Display library
 * 
 * There are hardware considerations
 * 
 * Activity:
 *    - Incorporate button input.
 */


#include <LiquidCrystal.h> 

const int N_ROWS = 4;
const int N_COLS = 20;
const int rs = 1;
const int enable = 2;
const int d4 = 4;
const int d5 = 5;
const int d6 = 6;
const int d7 = 7;

//add button code to trigger displayz
const int button = 10;


//https://www.arduino.cc/en/Reference/LiquidCrystalConstructor
//LiquidCrystal lcd(1, 2, 4, 5, 6, 7); // Syntax: LiquidCrystal(rs, enable, d4, d5, d6, d7)
LiquidCrystal lcd(rs, enable, d4, d5, d6, d7);

void setup() {
  lcd.begin(N_COLS, N_ROWS);
  pinMode(button, INPUT_PULLUP);
}


void loop() {
  if( digitalRead(button) ){
    delay(100);// Try taking this out and you will see that some characters are missing. The code runs too fast for the hardware. Need to apply the brakes a bit.
    lcd.setCursor(0,0); // Where to write
    lcd.print("Manchester");
    
    delay(1000); // slow down a bit.
    lcd.setCursor(0, 1);
    lcd.print("Makerspace");
  
    delay(1000);
    lcd.clear(); // Clears the display
  
    delay(1000);
    lcd.blink(); //Displays the blinking LCD cursor
    
    delay(1000);
    lcd.setCursor(7, 1);
    
    delay(1000);
    lcd.noBlink(); // Turns off the blinking LCD cursor
    lcd.cursor(); // Displays an underscore (line) at the position to which the next character will be written
    
    delay(1000);
    lcd.noCursor(); // Hides the LCD cursor
    lcd.clear(); // Clears the LCD screen
  }
  delay(1000);
}
