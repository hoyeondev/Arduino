#define TRIG_PIN 4
#define ECHO_PIN 3

void setup() {
  Serial.begin(9600);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  // 초음파 신호 보내기
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // echo 핀에서 신호가 돌아오는 시간 측정
  long duration = pulseIn(ECHO_PIN, HIGH);

  // 거리 계산 (단위: cm)
  long distance = duration * 0.034 / 2;

  // 출력
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500); // 0.5초마다 측정
}
