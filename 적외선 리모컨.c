//적외선 리모컨

#include <IRremote.h> // 적외선 리모컨 라이브러리 포함

int IR_RECEIVE_PIN = 11;

void setup(){
	IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK); //적외선 수신기 활성화
	Serial.begin(9600);
}

void loop(){
	if (IrReceiver.decode()) { // 수신받은 데이터가 있으면 1, 없으면 0
		// 수신된 신호부터 해석된 프로토콜, 주소, 명령, 코드값을 시리얼 모니터에 출력
		IrReceiver.printIRResultShort(&Serial);
		Serial.println();

		IrReceiver.resume();
	}
}