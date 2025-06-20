//가변저항기로 led값 조절

int led = 13;

void setup(){
  pinMode(led, OUTPUT);
}

void loop(){
  int val = analogRead(A0);
  int light = map(val, 0, 1023, 0, 255);
  analogWrite(led, light);
  delay(20);
}