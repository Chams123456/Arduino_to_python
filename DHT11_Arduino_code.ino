//Arduino code for sending DHT11 data to python
//That's Engineeing
//29/04/2020

//Include DHT Library
#include <dht.h>

//Initialise DHT Library and define data pin
dht DHT;
#define DHT11_PIN 4 

//Variables to store temp and hum data
int temp;
int hum;


void setup()
{
  Serial.begin(9600);  
}

void loop()
{
    int chk = DHT.read11(DHT11_PIN);
    
    temp = DHT.temperature;
    hum = DHT.humidity;

    //Print temp and hum values onto serial monitor
    //x is used as a delimiter
    Serial.print(temp);
    Serial.print("x");
    Serial.println(hum);
    delay(2000);  
}


  
  
