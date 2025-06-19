#include <Adafruit_NeoPixel.h>

int NUMPIXELS = 16; //네오픽셀의 LED 수 설정
int PIXELPIN = 6;

// 네오픽셀 라이브러리를 사용하여 제어할 객체로 pixel을 생성
// Adafruit_NeoPixel object(네오픽셀 수, 연결 데이터 핀, 네오픽셀 종류 + 주파수)
Adafruit_NeoPixel strip(NUMPIXELS, PIXELPIN, NEO_GRB + NEO_KHZ800);

int delayVal = 100;
int redColor = 0;
int greenColor = 0;
int blueColor = 0;

void setup(){
	strip.begin(); //생성한 네오픽셀 객체를 초기화, 동작 시작
	strip.clear(); //네오픽셀 색상 초기화
}

void loop(){
	setColor();

	for(int i = 0;i<NUMPIXELS; i++){
		strip.setPixelColor(i, strip.Color(redColor, greenColor, blueColor));
		strip.show();
		delay(delayVal);
	}
}

// 사용자 정의함수 : setColor()
// RGB 값을 랜덤 함수를 사용하여 설정
void setColor(){
	redColor = random(0, 256);
	greenColor = random(0, 256);
	blueColor = random(0, 256);
}