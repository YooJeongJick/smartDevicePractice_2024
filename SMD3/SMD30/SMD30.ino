const int ledPin = 4; // ledPin 번호 설정

// 리셋 및 보드 전원 공급 시 한 번 실행 
void setup() {
  pinMode(ledPin, OUTPUT);
}

// 전원이 꺼질 때까지 계속해서 실행 
void loop() { 

  digitalWrite(ledPin, HIGH); // HiGH, LED 켜짐  
  delay(1000); // 1초 기다리기                     
  digitalWrite(ledPin, LOW); // LOW, LED 꺼짐 
  delay(1000); // 1초 기다리기
  
}
