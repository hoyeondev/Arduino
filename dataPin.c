int dataPin[4] = {5,4,3,2}; // 디코더의 입력 단자와 연결된 아두이노 핀 번호
int BCD[10][4] = {  // 숫자 표현을 위한 디코더 입력 신호 값(배열)
	//DIN CIN BIN AIN
	0, 0, 0, 0, //0
	0, 0, 0, 1, //1
	0, 0, 1, 0, //2
	0, 0, 1, 1, //3
	0, 1, 0, 0, //4
	0, 1, 0, 1, //5
	0, 1, 1, 0, //6
	0, 1, 1, 1, //7
	1, 0, 0, 0, //8
	1, 0, 0, 1 //9
};

void setup(){
	Serial.begin(9600); // 시리얼 모니터 초기화
	for (int i =0;i<4; i++){
		pinMode(dataPin[i], OUTPUT); // 디코더와 연결된 아두이노 핀을 출력으로 선언
	}
}

void loop(){
	for (int i = 0; i < 10; i ++){
		for (int j = 0; j < 4; j ++){
			digitalWrite(dataPin[j], BCD[i][j]);
		}
		Serial.println(i); // 시리얼 모니터에 숫자 출력
		delay(1000); // 1초 동안 지연
	}
}