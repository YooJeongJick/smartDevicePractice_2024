const int potPin = 34;
const int ledPin = 4;
int potValue = 0; // 가변저항 값 확인을 위한 변수

void setup() {
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  // 가변저항 값 확인
  potValue = analogRead(potPin);

  analogWrite(ledPin, map(potValue, 0, 4095, 0, 255));
  delay(500);

}
