#include <OneWire.h>
#include <DallasTemperature.h>
#include<LiquidCrystal.h> //lcd library 

const int rs = 12,
          en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
          //pin assigments for LCD setup

LiquidCrystal myLCD(rs, en, d4, d5, d6, d7); 
// Data wire is conntec to the Arduino digital pin 4
#define ONE_WIRE_BUS 7

// Setup a oneWire instance to communicate with any OneWire devices
OneWire oneWire(ONE_WIRE_BUS);

// Pass our oneWire reference to Dallas Temperature sensor 
DallasTemperature sensors(&oneWire);

void setup(void)
{
  // Start serial communication for debugging purposes
  Serial.begin(9600);
  myLCD.begin(16, 2); //lcd on
  myLCD.print("Heat Sensor: ON"); //opening message once turned on
  delay(2000);
  myLCD.clear(); // clears message off lcd before loop begins and
  // Start up the library
  sensors.begin();
}

void loop(void){ 
  // Call sensors.requestTemperatures() to issue a global temperature and Requests to all devices on the bus
  sensors.requestTemperatures(); 
  myLCD.setCursor(0,0); //0,0 is top line of lcd
  myLCD.print("Temperature: ") && (" - Fahrenheit temperature:"); //prints reading from dht11 pin 2
  delay(2000);
  
  Serial.print("Celsius temperature: ");
  // Why "byIndex"? You can have more than one IC on the same bus. 0 refers to the first IC on the wire
  Serial.print(sensors.getTempCByIndex(0)); 
  Serial.print(" - Fahrenheit temperature: ");
  Serial.println(sensors.getTempFByIndex(0));
  delay(1000);
}