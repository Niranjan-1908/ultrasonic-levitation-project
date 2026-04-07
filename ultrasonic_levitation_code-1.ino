int ENA = 10;
int IN1 = 9;
int IN2 = 8;

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  digitalWrite(ENA, HIGH);   // Enable L298N
}

void loop() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delayMicroseconds(12);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delayMicroseconds(12);
}
