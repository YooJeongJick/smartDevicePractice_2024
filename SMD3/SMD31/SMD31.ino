const int ledPin = 4;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {

  // LED 밝기 증가
  for (int i = 0; i <= 255; i++) {
    analogWrite(ledPin, i);
    delay(15);
  }

  // LED 밝기 감소
    for (int i = 255; i >= 0; i--) {
    analogWrite(ledPin, i);
    delay(15);
  }
  
}
