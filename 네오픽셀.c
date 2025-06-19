#include <Adafruit_NeoPixel.h>

int NUMPIXELS = 1; //네오픽셀의 LED 수 설정
int PIXELPIN = 6; // 네오픽셀 입력 단자를 아두이노의 6번 핀에 연결

// 네오픽셀 라이브러리를 사용하여 제어할 객체로 pixel을 생성
// Adafruit_NeoPixel object(네오픽셀 수, 연결 데이터 핀, 네오픽셀 종류 + 주파수)
Adafruit_NeoPixel pixel(NUMPIXELS, PIXELPIN, NEO_GRB + NEO_KHZ800);

void setup(){
	pixel.begin();
	pixel.clear();
}

void loop(){
	pixel.setPixelColor(0, 255, 0, 0);
	pixel.show();
	delay(500);
	pixel.setPixelColor(0,0,255,0);
	pixel.show();
	delay(500);
	pixel.setPixelColor(0,0,0,255);
	pixel.show();
	delay(500);
	//네오픽셀을 끔
	pixel.clear();
	pixel.show();
	delay(1000);
}