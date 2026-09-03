#define LED1 25
#define LED2 27

unsigned long previousMillis = 0;
const long interval = 1000;

bool ledState = false;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

  Serial.begin(115200);
}

void loop() {

  unsigned long currentMillis = millis();

  // 1초마다 LED 상태 변경
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    ledState = !ledState;

    if (ledState == true) {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);