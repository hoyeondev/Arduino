//휨 센서

void setup(){
	Serial.begin(9600);
}

void loop(){
	int flexVal = analogRead(A4);

	Serial.print("Output of Flex Sensor = ");
	Serial.println(flexVal);
}