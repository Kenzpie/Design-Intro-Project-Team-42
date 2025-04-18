//library
#include <dht11.h>
#define DHT11PIN 2

dht11 DHT11;

void setup()
{
  Serial.begin(9600);
}

//reads DHT11 and shows humidity and temperature in Fahrenheit
void loop()
{
  Serial.println();

  int chk = DHT11.read(DHT11PIN);

  Serial.print("Humidity (%): ");
  Serial.println((float)DHT11.humidity, 2);

  float tempC = (float)DHT11.temperature;
  float tempF = (tempC * 9.0 / 5.0) + 32.0;

  Serial.print("Temperature (F): ");
  Serial.println(tempF, 2);

  delay(1000);
}
