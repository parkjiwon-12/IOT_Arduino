#define LED 25
#define LDR 33

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(115200);
}
void loop() {
  int value = analogRead(LDR);
  Serial.println(value);
  if (value < 2000) {
    digitalWrite(LED, HIGH);   // 어두우면 켜짐
  } else {
    digitalWrite(LED, LOW);    // 밝으면 꺼짐
  }
  delay(500);
}


