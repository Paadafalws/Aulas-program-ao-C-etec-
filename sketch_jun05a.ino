#include <DHT.h> 

#define DHTPIN 2 

#define DHTTYPE DHT11 

int rele = 9; 

 

DHT dht(DHTPIN, DHTTYPE); 

 

void setup() 

{ 

  Serial.begin(9600); 

  dht.begin(); 

  pinMode (rele, OUTPUT); 

} 

 

void loop() 

{ 

  delay(2000); 

  float h = dht.readHumidity(); 

  float t = dht.readTemperature(); 

 

  if (isnan(h) || isnan(t)) 

  { 

    return; 

  } 

 

  Serial.print ("Umidade: "); 

  Serial.print(h); 

  Serial.print("%"); 

  Serial.print("   -   Temperatura: "); 

  Serial.print(t); 

  Serial.print("°C"); 

 

  if (t > 34.00) 

  { 

    digitalWrite (rele, LOW);     

    Serial.println ("   -   Relé ativado"); 

  } 

  else 

  { 

    digitalWrite (rele, HIGH); 

    Serial.println ("   -   Relé desativado"); 

  } 

} 
