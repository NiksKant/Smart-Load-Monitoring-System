#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);


LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  dht.begin();
  lcd.init();
  lcd.backlight();


  Serial.println("CLEARDATA");
  Serial.println("LABEL,Time,Temp,Humidity,AirQuality,Light");
}

void loop() {
 
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  int airQuality = analogRead(A0);
  int lightLevel = analogRead(A1);

 
  if (isnan(h) || isnan(t)) return;

 
  lcd.setCursor(0, 0);
  lcd.print("T:"); lcd.print(t, 1);
  lcd.print(" H:"); lcd.print(h, 1);
  lcd.setCursor(0, 1);
  lcd.print("A:"); lcd.print(airQuality);
  lcd.print(" L:"); lcd.print(lightLevel);

 
  Serial.print("DATA,TIME,");
  Serial.print(t); Serial.print(",");
  Serial.print(h); Serial.print(",");
  Serial.print(airQuality); Serial.print(",");
  Serial.println(lightLevel);

  delay(2000); 
}