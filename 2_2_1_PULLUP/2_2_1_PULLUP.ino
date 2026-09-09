#define BTN_PIN 25

void setup() {
  pinMode(BTN_PIN, INPUT);
  Serial.begin(115200);
}

void loop() {
  Serial.println(digitalRead(BTN_PIN));
  delay(200);
}