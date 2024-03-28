#define RED_PIN 4
#define GREEN_PIN 15
#define BLUE_PIN 2

void setup() {

  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);

  // HIGH, LED 꺼짐
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);

}

void loop() {

  // 빨강(255, 0, 0)
  analogWrite(RED_PIN, 0);
  analogWrite(GREEN_PIN, 255);
  analogWrite(BLUE_PIN, 255);
  delay(1000);

  // 0 - 색상 켜짐
  // 255 - 색상 꺼짐
  
}