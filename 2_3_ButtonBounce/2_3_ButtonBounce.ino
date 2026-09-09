// 3단계랑 코드 똑같

#define BTN_PIN 25 

int prevState = HIGH;

void setup() {
  pinMode(BTN_PIN, INPUT_PULLUP);
  Serial.begin(115200);
}

void loop() {
  int state = digitalRead(BTN_PIN);

  if (state != prevState) {
    Serial.print(millis());
    Serial.print(" : ");
    Serial.println(state);

    prevState = state;
  }
}