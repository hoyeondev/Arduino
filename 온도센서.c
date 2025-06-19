//온도 센서의 출력값 확인

int TMP = A0;

void setup(){
	Serial.begin(9600);
}

void loop(){
	int value = analogRead(TMP);

	Serial.println(value);
	delay(100);
}