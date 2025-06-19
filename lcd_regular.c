// lcd 출력 기본

#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd(0x20);


void setup(){
  lcd.begin(16,2);
  lcd.print("Hello, Arduino!");
  delay(200);
}

void loop(){

  lcd.clear();
  lcd.print("Hi! Arduino.");
  delay(2000);
  lcd.setCursor(3,1);
  lcd.print("Hi! Aruino.");
  delay(2000);
}