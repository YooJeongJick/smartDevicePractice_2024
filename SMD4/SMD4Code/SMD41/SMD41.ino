#include "BluetoothSerial.h"

const char *pin = "1234";

String device_name = "ESP32-BT-JUSTICE"; 
// 기기 이름, 자율적으로 설정 가능

BluetoothSerial SerialBT;


void setup() {

  Serial.begin(115200); 
  // Serial.begin(전송 속도); 
  SerialBT.begin("ESP32-BT-JUSTICE"); 
  // SerialBT.begin(앞서 작성한 기기 이름)

}

void loop() {

  if (Serial.available()) {
    SerialBT.write(Serial.read());

  }

  if (SerialBT.available()) {
    Serial.write(SerialBT.read());
  }

  delay(20);
}

