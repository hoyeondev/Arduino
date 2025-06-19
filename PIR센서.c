// PIR 센서의 동작 확인
#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd(0x20);


int PIR = 12; //PIR 센서를 아두이노의 12번 핀에 연결

void setup(){
	pinMode(PIR, INPUT);
	lcd.begin(16,2);
	Serial.begin(9600); // 시리얼 모니터 초기화
	delay(1000);
}

void loop(){

	lcd.clear();
	int valPir = digitalRead(PIR);
	Serial.print("Value of PIR = ");
	Serial.println(valPir); 

	if(valPir == 1) {
		lcd.print("Detection System");
		lcd.setCursor(1,1);
		lcd.print(">> Detection!!!");

	}else{
		lcd.print("Detection System");
		lcd.setCursor(1,1);
		lcd.print(">> Monitorins...");
	}
}