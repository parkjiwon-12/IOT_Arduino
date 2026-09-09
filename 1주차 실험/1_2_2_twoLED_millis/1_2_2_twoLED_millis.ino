#define LED1 25
#define LED2 27

unsigned long previousMillis = 0; // 이전에 LED 상태를 변경한 시간을 저장
const long interval = 1000; // LED 상태를 변경하는 시간 간격 (1000ms = 1초)
bool ledState = false; // LED의 현재 상태를 저장

void setup() {
  
  pinMode(LED1, OUTPUT); // LED1과 LED2를 출력 모드로 설정
  pinMode(LED2, OUTPUT);

  Serial.begin(115200); // 시리얼 통신 시작
}

void loop() {

  unsigned long currentMillis = millis();  // 현재 시간을 밀리초 단위로 가져옴

  // 이전 상태 변경 후 1초가 지났는지 확인
  if (currentMillis - previousMillis >= interval) {

    previousMillis = currentMillis;  // 현재 시간을 이전 시간으로 저장

    // LED 상태를 반대로 변경
    ledState = !ledState;

    // LED 상태가 true이면
    if (ledState == true) {

      // LED1 켜기
      digitalWrite(LED1, HIGH);

      // LED2 끄기
      digitalWrite(LED2, LOW);
    }

    // LED 상태가 false이면
    else {

      // LED1 끄기
      digitalWrite(LED1, LOW);

      // LED2 켜기
      digitalWrite(LED2, HIGH);
    }
  }
}