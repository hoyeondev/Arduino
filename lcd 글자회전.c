#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd(0x20);

void setup(){
	lcd.begin(16,2);
	lcd.print("Welcome to Arduino World!");
	delay(2000);
}

void loop(){
	for (int i = 0;l i <9; i ++){
		lcd.scrollDisplayLeft();
		delay(500);
	}
	for(int i = 0; i < 9; i ++){
		lcd.scrollDisplayRight();
		delay(500);
	}
}