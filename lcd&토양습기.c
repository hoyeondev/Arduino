#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd(0x20);

int SIG = A0;

void setup(){
  lcd.begin(16,2);
  lcd.print("Hello, Arduino!");
  delay(200);
  Serial.begin(9600);
}

void loop(){
  int moisture = analogRead(SIG);
  delay(2000);
  lcd.clear();
  // lcd.print("Hi! Arduino.");
  
  if( moisture < 400){
    lcd.print("Water shortages");
    lcd.setCursor(3,1);
    lcd.print(moisture);
    // lcd.println(moisture);
  }else{
    lcd.print("Water filling");
    lcd.setCursor(3,1);
    lcd.print(moisture);
  }
}