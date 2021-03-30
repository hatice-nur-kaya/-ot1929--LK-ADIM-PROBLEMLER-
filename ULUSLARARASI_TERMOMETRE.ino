#include <dht11.h> 
#define DHT11PIN 2 

dht11 DHT11;

void setup()
{
  Serial.begin(9600); 
}

void loop()
{
  int chk = DHT11.read(DHT11PIN);
  Serial.print("Nem (%): ");
  Serial.println(DHT11.humidity, 2);

  Serial.print("Sicaklik (Santigrat): ");
  Serial.println(DHT11.temperature, 2);

  Serial.print("Sicaklik (Fahrenheit): ");
  Serial.println(DHT11.fahrenheit(), 2);

  Serial.print("Sicaklik (Kelvin): ");
  Serial.println(DHT11.kelvin(), 2);

  delay(2000); 

  
}
