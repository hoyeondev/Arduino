//힘 센서의 동작
#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd(0x20);

int FSRPIN = A2;

void setup(){
	Serial.begin(9600);
	lcd.begin(16,2);
	lcd.print("Level of Pressure");
}

String message;

void loop(){
	int readVal = analogRead(FSRPIN);
	int level = map(readVal, 0, 914, 0, 10);

	switch(level){
	case 0:
	case 1:
	case 2:
		message = "Level 0";
		break;
	case 3:
	case 4:
		message = "Level 1";
		break;
	case 5:
		message = "Level 2";
		break;
	case 6:
		message = "Level 3";
		break;
	case 7:
		message = "Level 4";
		break;
	default:
		message = "Level 5";
		break;
	}

	// 압력의 정도를 출력하기
	lcd.setCursor(0,1);
	lcd.print(message);
	delay(300);

	// Serial.println("Output of force sensor = " + String(readVal));
	// delay(500);
}