// 기울기 센서의 동작

int TILT = 8;
int Led_R = 5;
int Led_G = 6;

void setup(){
	Serial.begin(9600); // 시리얼 모니터 초기화
	pinMode(TILT, INPUT); // TILT(8번 핀)를 입력 모드로
	pinMode(Led_R, OUTPUT);
	pinMode(Led_G, OUTPUT);
}

void loop(){
	int tiltVal = digitalRead(TILT);

	Serial.print("Readed Value = ");
	Serial.println(tiltVal);
	delay(500);

	if(tiltVal == 1){
		digitalWrite(Led_R, HIGH);
		digitalWrite(Led_G, LOW);
	}else{
		digitalWrite(Led_R, LOW);
		digitalWrite(Led_G, HIGH);
	}
}