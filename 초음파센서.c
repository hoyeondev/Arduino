// 초음파 거리 측정 시스템
#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0x20);
int TRIG = 5;
int ECHO = 4;

void setup(){
	pinMode(TRIG, OUTPUT);
	pinMode(ECHO, INPUT);
  	lcd.begin(16,2);
  	lcd.print("Hello, Arduino!");
	Serial.begin(9600);
}

void loop(){
	lcd.clear();

	digitalWrite(TRIG, LOW);
	delayMicroseconds(5);
	digitalWrite(TRIG, HIGH);
	delayMicroseconds(10);
	digitalWrite(TRIG, LOW);

	long duration = pulseIn(ECHO, HIGH);
	float distance = (float) (340.0 * duration / 1000.0) / 2.0;

	// 시리얼 모니터에 출력하기
	Serial.print("Duration = "); //반사파가 되돌아오는 데 걸리는 시간
	Serial.print(duration);

	Serial.println("us");
	Serial.print("Distance = "); //물체까지의 거리(편도) 출력
	Serial.print(distance);
	Serial.println("cm");
	Serial.println("---------------------");

	lcd.print("Durat. = ");
	lcd.print(duration);
	lcd.print("us");
	lcd.setCursor(0,1);
	lcd.print("Dist. = ");
	lcd.print(distance, 1);
	lcd.print("cm");
	delay(500);
}