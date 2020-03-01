#include <Wire.h>
#include <LiquidCrystal.h>
float sensorvalue=0;
float sensorPin = A3;
float voltage;
#include <dht.h> 
dht DHT;
#define DHT11_PIN 10
#define SensorPin A0 
float sensorValue = 0;
unsigned int timesThruAverage;
unsigned int getTdsAverage();
const int rs = 8, en = 9, d4 =7, d5 =6, d6 = 5, d7 =4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int button=2;
int val;
int count=0;
int x;
int press;
void setup() { 
lcd.begin(16,1);
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
    for (int i = 0; i <= 100; i++) 
    { 
      sensorValue = sensorValue + analogRead(SensorPin); 
      delay(1); 
    } 
    sensorValue =1000-sensorValue/100.0;
    sensorValue= sensorValue+33.16;
    sensorValue=sensorValue/10.0;
    //Serial.print("measuring.....");
    lcd.setCursor(0,1);
    lcd.print("Moisture %=");
    lcd.print(sensorValue); 
    //Serial.print("\nresult is shown");
   // Serial.print("%");
    delay(2000);
    lcd.clear();
    //Serial.print("\nfor temp. $ hum. hold the button again\n");
    break;
  }
  case 2:{
    int chk = DHT.read11(DHT11_PIN);
    //Serial.print("measuring...");
    lcd.setCursor(0,1);
    lcd.print("Tempreature=");
    lcd.print(DHT.temperature);
    delay(2000);
    lcd.setCursor(0,2);
    lcd.print("Humidity % =");
    lcd.print(DHT.humidity);
    //Serial.print("result is shown");
    delay(2000);
    lcd.clear();
    break;
  } 
    case 3:
 {
  
 sensorValue=analogRead(sensorPin)*(1.1/1024) ;
  voltage = sensorValue;
  delay(200);
  //lcd.print(voltage);

   if(voltage<0.03)
   {
    lcd.print("ph=7.05\n");
    delay(2000);
   }
  else if(0.03<voltage<0.06)
   {
    lcd.print("ph=7.06\n");
    delay(2000);
   }
   else if(0.06<voltage<0.09)
   {
    lcd.print("ph=7.07\n");
    delay(2000);
   }
   else if(0.12<voltage<0.15)
   {
    lcd.print("ph=7.07\n");
   delay(2000);
   }
   else if(0.18<voltage<0.21)
   {
    lcd.print("ph=7.08\n");
   delay(2000);
   }
   else if(0.24<voltage<0.27)
   {
    lcd.print("ph=7.09\n");
   delay(2000);
   }
   else if(0.30<voltage<0.31)
   {
    lcd.print("ph=7.12\n");
   delay(2000);
   }
   else if(0.31<voltage<0.32)
   {
    lcd.print("ph=7.21\n");
   delay(2000);
   }
   else if(0.32<voltage<0.33)
   {
    lcd.print("ph=7.27\n");
   delay(2000);
   }
   else if(0.33<voltage<0.34)
   {
    lcd.print("ph=7.32\n");
    delay(2000);
   }
   else if(0.34<voltage<0.35)
   {
    lcd.print("ph=7.38\n");
    delay(2000);
   }
   else if(0.35<voltage<0.36)
   {
    lcd.print("ph=7.40\n");
    delay(2000);
   }
   else if(0.36<voltage<0.37)
   {
    lcd.print("ph=7.45\n");
    delay(2000);
   }
   else if(0.37<voltage<0.38)
   {
    lcd.print("ph=7.49\n");
    delay(2000);
   }
   else if(0.38<voltage<0.39)
   {
    lcd.print("ph=7.53\n");
    delay(2000);
   }
   else if(0.39<voltage<0.40)
   {
    lcd.print("ph=7.57\n");
    delay(2000);
   }
   else if(0.40<voltage<0.41)
   {
    lcd.print("ph=7.60\n");
    delay(2000);
   }
   else if(0.41<voltage<0.42)
   {
    lcd.print("ph=7.63\n");
    delay(2000);
   }
   else if(0.42<voltage<0.43)
   {
    lcd.print("ph=7.66\n");
    delay(2000);
   }
   else if(0.43<voltage<0.44)
   {
    lcd.print("ph=7.72\n");
    delay(2000);
   }
   else if(0.44<voltage<0.45)
   {
    lcd.print("ph=7.75\n");
    delay(2000);
   }
   else if(0.45<voltage<0.46)
   {
    lcd.print("ph=7.79\n");
    delay(2000);
   }
   else if(0.46<voltage<0.60)
   {
    lcd.print("ph=7.83\n");
    delay(2000);
   }
   else if(0.60<voltage<0.70)
   {
    lcd.print("ph=7.97\n");
    delay(2000);
   }
   else if(0.70<voltage<80)
  {
    lcd.print("ph=8.04\n");
    delay(2000);
  }
  else if(0.80<voltage<0.85)
  {
    lcd.print("ph=8.20\n");
    delay(2000);           
   }
   else if(0.90<voltage<0.95)
   {
    lcd.print("ph=8.40\n");
    delay(2000);
   }
 }
  }
}
