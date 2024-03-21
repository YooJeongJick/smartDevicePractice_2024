const int buttonPin = 33; // buttonPint 번호 설정
const int ledPin = 4; // ledPin 번호 설정
int buttonState = 0; // button 상태 확인을 위한 변수

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  
  // button 상태 확인
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) { // LOW, 버튼이 눌림
    digitalWrite(ledPin, HIGH); // LED 켜짐
  } else {
    digitalWrite(ledPin, LOW); // LED 꺼짐
  }

}
