#include <Wire.h>
float sensorValue=0;
float sensorPin = A3;
unsigned int timesThruAverage;
unsigned int getTdsAverage();
float voltage;

void setup()
{
   Serial.begin(9600); 
}
void loop()
{
 sensorValue=analogRead(sensorPin)*(1.1/1024) ;
  voltage = sensorValue;
  delay(200);
  //Serial.println(voltage);

   if(voltage<0.03)
   {
    lcd.print("ph=7.05");
    delay(2000);
   }
  else if(0.03<voltage<0.06)
   {
    lcd.print("ph=7.06");
    delay(2000);
   }
   else if(0.06<voltage<0.09)
   {
    lcd.print("ph=7.07");
    delay(2000);
   }
   else if(0.12<voltage<0.15)
   {
    lcd.print("ph=7.07");
   delay(2000);
   }
   else if(0.18<voltage<0.21)
   {
    lcd.print("ph=7.08");
   delay(2000);
   }
   else if(0.24<voltage<0.27)
   {
    lcd.print("ph=7.09");
   delay(2000);
   }
   else if(0.30<voltage<0.31)
   {
    lcd.print("ph=7.12");
   delay(2000);
   }
   else if(0.31<voltage<0.32)
   {
    lcd.print("ph=7.21");
   delay(2000);
   }
   else if(0.32<voltage<0.33)
   {
    lcd.print("ph=7.27");
   delay(2000);
   }
   else if(0.33<voltage<0.34)
   {
    lcd.print("ph=7.32");
    delay(2000);
   }
   else if(0.34<voltage<0.35)
   {
    lcd.print("ph=7.38");
    delay(2000);
   }
   else if(0.35<voltage<0.36)
   {
    lcd.print("ph=7.40");
    delay(2000);
   }
   else if(0.36<voltage<0.37)
   {
    lcd.print("ph=7.45");
    delay(2000);
   }
   else if(0.37<voltage<0.38)
   {
    lcd.print("ph=7.49");
    delay(2000);
   }
   else if(0.38<voltage<0.39)
   {
    lcd.print("ph=7.53");
    delay(2000);
   }
   else if(0.39<voltage<0.40)
   {
    lcd.print("ph=7.57");
    delay(2000);
   }
   else if(0.40<voltage<0.41)
   {
    lcd.print("ph=7.60");
    delay(2000);
   }
   else if(0.41<voltage<0.42)
   {
    lcd.print("ph=7.63");
    delay(2000);
   }
   else if(0.42<voltage<0.43)
   {
    lcd.print("ph=7.66");
    delay(2000);
   }
   else if(0.43<voltage<0.44)
   {
    lcd.print("ph=7.72");
    delay(2000);
   }
   else if(0.44<voltage<0.45)
   {
    lcd.print("ph=7.75");
    delay(2000);
   }
   else if(0.45<voltage<0.46)
   {
    lcd.print("ph=7.79");
    delay(2000);
   }
   else if(0.46<voltage<0.60)
   {
    lcd.print("ph=7.83");
    delay(2000);
   }
   else if(0.60<voltage<0.70)
   {
    lcd.print("ph=7.97");
    delay(2000);
   }
   else if(0.70<voltage<80)
  {
    lcd.print("ph=8.04");
    delay(2000);
  }
  else if(0.80<voltage<0.85)
  {
    lcd.print("ph=8.20");
    delay(2000);           
   }
   else if(0.90<voltage<0.95)
   {
    lcd.print("ph=8.40");
    delay(2000);
   }
  }
   
