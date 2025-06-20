// 신호등

int LED_R = 11;
int LED_G = 10;
int LED_Y = 9;

void setup(){
	Serial.begin(9600); //시리얼 모니터 초기화
	pinMode(LED_R, OUTPUT);
	pinMode(LED_G, OUTPUT);
	pinMode(LED_Y, OUTPUT);
}

void loop(){

	// 빨간불 켜키
	digitalWrite(LED_R, HIGH);
	digitalWrite(LED_G, LOW);
	digitalWrite(LED_Y, LOW);
	Serial.println("Red ON");
	delay(1000);

	// 노란불 켜키
	digitalWrite(LED_R, LOW);
	digitalWrite(LED_G, LOW);
	digitalWrite(LED_Y, HIGH);
	Serial.println("Yellow ON");
	delay(1000);

	// 초록불 켜키
	digitalWrite(LED_R, LOW);
	digitalWrite(LED_G, HIGH);
	digitalWrite(LED_Y, LOW);
	Serial.println("Green ON");
	delay(1000);

	// 점멸
	digitalWrite(LED_R, LOW);
	digitalWrite(LED_G, LOW);
	digitalWrite(LED_Y, LOW);
	Serial.println("Shut down");
	delay(5000);

}	


