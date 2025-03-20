# 1 "C:\\Users\\betyt\\OneDrive\\Documentos\\Arduino\\p8kitsune\\sketch_oct17a\\sketch_oct17a.ino"
# 2 "C:\\Users\\betyt\\OneDrive\\Documentos\\Arduino\\p8kitsune\\sketch_oct17a\\sketch_oct17a.ino" 2
LiquidCrystal lcd(12,11,5,4,3,2);

int pinTrigger=7;
int pinEcho=6;

void setup()
{
  lcd.begin(16,2);
  pinMode(pinEcho,0x0);
  pinMode(pinTrigger,0x1);
  delay(5000);
}

void loop()
{
  lcd.clear();
  digitalWrite(pinTrigger,0x0);
  delayMicroseconds(5);
  digitalWrite(pinTrigger,0x1);
  delayMicroseconds(10);
  digitalWrite(pinTrigger,0x0);

  lcd.setCursor(0,0);
  lcd.print("Bienvenido aquí");
  lcd.setCursor(0,1);
  lcd.print("Hola");
  delay(5000);
}
