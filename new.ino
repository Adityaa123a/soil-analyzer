#include <LiquidCrystal.h>

#include <dht.h> 
dht DHT;
#define DHT11_PIN 10
const int rs = 8, en = 9, d4 =7, d5 =6, d6 = 5, d7 =4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int button=2;
int val;
int count=0;

int press;
void setup() { 
lcd.begin(16,2);
 lcd.setCursor(5,0);
 lcd.print("WELCOME");
 pinMode(button , INPUT);
 delay(2000);
 lcd.clear();
}

void loop()
{
   val=digitalRead(button);
  if(val==HIGH){
    press=count++;
    delay(300);
}
// Serial.println(press);
//Serial.print("for moisture of soil hold the push button");
//delay(200);
switch(press)
  {
    case 1:{
    int chk = DHT.read11(DHT11_PIN);
    //Serial.print("measuring...");
    lcd.setCursor(0,1);
    lcd.print("Tempreature=");
    lcd.print(DHT.temperature);
    lcd.setCursor(0,2);
    lcd.print("Humidity % =");
    lcd.print(DHT.humidity);
    //Serial.print("result is shown");
    delay(2000);
    lcd.clear();
    break;
  }
  }
} 
