#define FLOAT_PIN 5

void setup() {
  pinMode(FLOAT_PIN, INPUT);
  Serial.begin(115200);
}

void loop() {
  Serial.println(digitalRead(FLOAT_PIN));
  delay(100);
}