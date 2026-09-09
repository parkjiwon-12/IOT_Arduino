// SW 디바운싱 코드와 동

#define BTN_PIN 25

int lastRaw = HIGH;
int stableState = HIGH;

unsigned long lastChange = 0;

int count = 0;

const unsigned long DEBOUNCE_MS = 50;

void setup() {
  pinMode(BTN_PIN, INPUT_PULLUP);
  Serial.begin(115200);
}

void loop() {
  int raw = digitalRead(BTN_PIN);

  if (raw != lastRaw) {
    lastChange = millis();
    lastRaw = raw;
  }

  if ((millis() - lastChange) >= DEBOUNCE_MS &&
      raw != stableState) {

    stableState = raw;

    if (stableState == LOW) {
      count++;

      Serial.print("count = ");
      Serial.println(count);
    }
  }
}