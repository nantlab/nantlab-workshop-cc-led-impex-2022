#define PIN_RED 9
#define PIN_GREEN 10
#define PIN_BLUE 11


void setup() {
  Serial.begin(115200);
}

void loop() {
  auto delayTime = 5;
  //  red
  for (auto i = 0; i < 255; i++) {
    analogWrite(PIN_RED, i);
    delay(delayTime);
  }
  for (auto i = 255; i > 0; i--) {
    analogWrite(PIN_RED, i);
    delay(delayTime);
  }
  //  green
  for (auto i = 0; i < 255; i++) {
    analogWrite(PIN_GREEN, i);
    delay(delayTime);
  }
  for (auto i = 255; i > 0; i--) {
    analogWrite(PIN_GREEN, i);
    delay(delayTime);
  }
  //  blue
  for (auto i = 0; i < 255; i++) {
    analogWrite(PIN_BLUE, i);
    delay(delayTime);
  }
  for (auto i = 255; i > 0; i--) {
    analogWrite(PIN_BLUE, i);
    delay(delayTime);
  }
}
