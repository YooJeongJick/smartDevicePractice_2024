#define RED_PIN 4
#define GREEN_PIN 15
#define BLUE_PIN 2
int color[7][3] = {
  {0, 255, 255}, // 빨
  {0, 100, 255}, // 주
  {0, 0, 255}, // 노
  {255, 0, 255}, // 초
  {255, 0, 0}, // 파
  {255, 255, 50}, // 남
  {150, 255, 0} // 보
};

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

  for (int i = 0; i < 7; i++)
  {
    analogWrite(RED_PIN, color[i][0]);
    analogWrite(GREEN_PIN, color[i][1]);
    analogWrite(BLUE_PIN, color[i][2]);
    delay(1000);
  }
  
}
