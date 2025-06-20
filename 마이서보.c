#include <Servo.h>

Servo myservo;

int pos = 0;

void setup(){
	//서보 모터를 제어할 핀 번호를 설정
	myservo.attach(9);
}

void loop(){
	//0에서 119까지 반복
	// for(pos=0;pos <120;pos +=1){
	// 	myservo.write(pos);
	// 	delay(15);
	// }

	myservo.write(map(analogRead(A0),0,1023,0,120));

	delay(15);
}