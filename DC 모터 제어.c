//DC 모터 제어

// Motor 제어 핀 연결
int en12 = 12;
int in1 = 11;
int in2 = 10;

void setup() {
	pinMode(en12, OUTPUT);
	pinMode(in1, OUTPUT);
	pinMode(in2, OUTPUT);
	Serial.begin(9600);
}

// 모터의 회전 정지(초기 상태 설정)
// 모터 속도는 0(정지) ~ 255(최고 속도) 사이의 값으로 제어
analogWrite(in1, 0);
analogWrite(in2, 0);

// 모터 활성화
digitalWrite(en12, HIGH);

void loop(){
	analogWrite(in1, 255);
	analogWrite(in2, 0);
	Serial.println("Forward(anti-clockwise");
	delay(2000);

	analogWrite(in1, 0);
	analogWrite(in2, 255);
	Serial.println("Reverse(clockwise)");
	delay(2000);

	//활성화 단자의 제어 신호로 모터 정지
	digitalWrite(en12, LOW);
	Serial.println("Stop(Motor disable)");
	delay(2000);
	digitalWrite(en12, HIGH);
	Serial.println("Stop(Motor enable)");
}