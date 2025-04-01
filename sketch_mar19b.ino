#include <LiquidCrystal.h>

  // define variables for the LCD’s pin connections to the Uno
  const int rs = 12,
            en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
// use the library to initialize an instance of the LCD class
LiquidCrystal myLCD(rs, en, d4, d5, d6, d7);
void setup() {
  // define the LCD's number of columns and rows
  myLCD.begin(16, 2);
  // Print a message to the LCD
  myLCD.print("Heat Sensor: ON");
}
void loop() {
  // set the cursor to column 0, line 1
  // (line one is the second line, since the position begins at 0)
  myLCD.setCursor(0, 1);
  // print (number of seconds since last reset):
  myLCD.print(millis() / 1000);
}
