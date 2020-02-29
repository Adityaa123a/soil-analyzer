#include <dht.h>
#include <LiquidCrystal.h>

dht DHT;

#define DHT11_PIN 7
const int rs = 8, en = 9, d4 =7, d5 =6, d6 = 5, d7 =4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup(){
  lcd.begin(16,1);
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  lcd.print("Temperature = ");
  lcd.print(DHT.temperature);
 lcd.print("Humidity = ");
  lcd.print(DHT.humidity);
  delay(2000);
}
