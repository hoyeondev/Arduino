//피에조 버저의 동작

int piezoPin = 3;

void setup(){
	pinMode(piezoPin, OUTPUT);
}

void loop(){
	tone(piezoPin, 784);
	delay(500);
	tone(piezoPin, 554);
	delay(500);
}