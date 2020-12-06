#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
int IN1= 7;
int IN2= 6;
int IN3= 5;
int IN4= 4;
void setup()
{
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
lcd.begin(20,4);
lcd.setCursor(0, 0);
lcd.print("DC Motor direction");
lcd.setCursor(0, 1);
lcd.print("control system...");
delay(2000);
lcd.clear();
}

void loop()
{
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);
lcd.setCursor(0, 2);
lcd.print("90 Degree");
delay(2000);
lcd.clear();
digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);
lcd.setCursor(0, 2);
lcd.print("180 Degree");
delay(2000); 
lcd.clear();
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
lcd.setCursor(0, 2);
lcd.print("270 Degree");
delay(2000);
lcd.clear();
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, HIGH);
lcd.setCursor(0, 2);
lcd.print("360 Degree");
delay(2000);
lcd.clear();
}
