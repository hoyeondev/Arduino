int dataPin[8] = {2,3,4,5,6,7,8,9};
int digitForNum[10][8] = {
	// A B C D E F G DP
	0, 0, 0, 0, 0, 0, 1, 1, //0
	1, 0, 0, 1, 1, 1, 1, 1, //1
	0, 0, 1, 0, 0, 1, 0, 1, //2
	0, 0, 0, 0, 1, 1, 0, 1, //3
	1, 0, 0, 1, 1, 0, 0, 1, //4
	0, 1, 0, 0, 1, 0, 0, 0, //5
	1, 1, 0, 0, 0, 0, 0, 0, //6
	0, 0, 0, 1, 1, 1, 1, 0, //7
	0, 0, 0, 0, 0, 0, 0, 0, //8
	0, 0, 0, 0, 1, 0, 0, 0 //9
};

void setup(){
	Serial.begin(9600); // 시리얼 모니터 초기화
	for (int i =0;i<8; i++){
		pinMode(dataPin[i], OUTPUT); // 선택된 제어 신호 핀을 출력으로 선언
	}
}

void loop(){
	for (int i = 0; i < 10; i ++){
		for (int j = 0; j < 8; j ++){
			digitalWrite(dataPin[j], digitForNum[i][j]);
		}
		Serial.println(i); // 시리얼 모니터에 숫자 출력
		delay(1000); // 1초 동안 지연
	}
}