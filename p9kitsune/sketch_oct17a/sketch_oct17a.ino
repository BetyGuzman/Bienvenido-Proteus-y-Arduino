#include <LiquidCrystal.h> 
LiquidCrystal lcd(12,11,5,4,3,2);

int pinTrigger=7;
int pinEcho=6;

void setup()
{
  lcd.begin(16,2);
  pinMode(pinEcho,INPUT);
  pinMode(pinTrigger,OUTPUT);
  delay(5000);
}

void loop()
{
  lcd.clear();
  digitalWrite(pinTrigger,LOW);
  delayMicroseconds(5);
  digitalWrite(pinTrigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrigger,LOW);

  lcd.setCursor(0,0);
  lcd.print("Bienvenido aquí");
  lcd.setCursor(0,1);
  lcd.print("Hola");
  delay(5000);
}
