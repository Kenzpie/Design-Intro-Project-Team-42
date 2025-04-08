//dpp110 David Pithan subsytem 
#include <LiquidCrystal.h> //lcd library 


const int rs = 12,
          en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
          //pin assigments for LCD setup

LiquidCrystal myLCD(rs, en, d4, d5, d6, d7); 

void setup() {
  myLCD.begin(16, 2); //lcd on
  myLCD.print("Heat Sensor: ON"); //opening message once turned on
  delay(2000);
  myLCD.clear(); // clears message off lcd before loop begins and sensors initialized

}

void loop() {
  myLCD.setCursor(0,0); //0,0 is top line of lcd
  myLCD.print("Temperature: "); //prints reading from dht11 pin 2
  delay(2000);
  myLCD.setCursor(0,1); //adds new line to lcd display // 0,1 is bottom line of lcd
  myLCD.print("Humidity: "); // prints reading from humidity sensor

  delay(5000);

  myLCD.clear(); //clears display from lcd
  myLCD.setCursor(0,0); //adds message to top line of lcd
  myLCD.print("LOADING RESULT");
  delay(1000);


  myLCD.clear();
  myLCD.setCursor(0,1); //adds the message to the bottom line of lcd
  myLCD.print("Reading -> -> -> ");
  delay(10000); //time before new reading onto lcd
  
  myLCD.clear(); // reads sensors again until breaks

}
