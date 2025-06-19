// 포토 레지스터의 동작

// int cds = A1;
// int led_G = 7;


// void setup() {

//   Serial.begin(9600);
//   pinMode(led_G, OUTPUT);

// }
// void loop() { 
//   int cdsValue = analogRead(cds);
//   Serial.print("CDS Value =");
//   Serial.println(cdsValue);
//   delay(500);
  
//   if(cdsValue > 900) {
//     digitalWrite(led_G, HIGH);
//   }
//   else{
//     digitalWrite(led_G, LOW);
//   }

// }

int cds = A0;
int LED_R = 11;
int LED_G = 9;
int LED_B = 10;

void setup(){
	Serial.begin(9600); //시리얼 모니터 초기화
}

void loop(){
	int cdsValue = analogRead(cds); //센서값(아날로그 전압)을 읽어 cdsValue에 저장

	Serial.print("CDS Value = "); //시리얼 모니터에 출력
	Serial.println(cdsValue); //시리얼 모니터에 읽어 들인 센서값 출력

	if (cdsValue > 900){
		setColor(255,255,255); //LED 켜짐
	}else{
		setColor(0,0,0); //LED 꺼짐
	}
	delay(500); //0.5초 동안 지연
}	

//사용자 정의 함수
void setColor(int redValue, int greenValue, int blueValue){
	analogWrite(LED_R, redValue); //redValue에 해당하는 PWM 신호를 출력
	analogWrite(LED_G, greenValue); //greenValue에 해당하는 PWM 신호를 출력
	analogWrite(LED_B, blueValue); //blueValue에 해당하는 PWM 신호를 출력
}
