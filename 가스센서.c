// 가스 센서의 동작

// int gasPin = A3;

// void setup(){
// 	Serial.begin(9600);
// }

// void loop(){
// 	int gasVal = analogRead(gasPin);
// 	Serial.println(gasVal);
// 	delay(500);
// }

int gasPin = A3;
int piezoPin = 3;

void setup(){
	Serial.begin(9600);
	pinMode(piezoPin, OUTPUT);
}

void loop(){
	int gasVal = analogRead(gasPin);
	Serial.println(gasVal);
	delay(500);

	if(gasVal >= 200){
		Serial.println("Ring Ring");
		tone(piezoPin, 784);
		delay(500);
		tone(piezoPin, 554);
		delay(500);
	}else{
		noTone(piezoPin);
	}
}