#define TRIG_PIN 4
#define ECHO_PIN 3
#define BUZZER_PIN 8

// 간단한 도레미 멜로디 주파수 (Hz)
int melody[] = {
  262, 294, 330
};

void setup() {
  Serial.begin(9600);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}

void loop() {
  long distance = getDistance();
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance <= 10) {
    playMelody();
  }

  delay(500);
}

// 거리 측정 함수
long getDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH);
  long distance = duration * 0.034 / 2;
  return distance;
}

// 부저 멜로디 함수
void playMelody() {
  for (int i = 0; i < 8; i++) {
    tone(BUZZER_PIN, melody[i]);
    delay(300);
    noTone(BUZZER_PIN);
    delay(50);
  }
}