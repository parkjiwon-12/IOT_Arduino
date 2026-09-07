#define LED1 25 // LED1을 연결한 GPIO 핀 번호를 25번으로 지정
#define LED2 27 // LED2를 연결한 GPIO 핀 번호를 27번으로 지정

void setup() {
  pinMode(LED1, OUTPUT); // LED1 핀을 출력(OUTPUT) 모드로 설정
  pinMode(LED2, OUTPUT); // LED2 핀을 출력(OUTPUT) 모드로 설정
}


void loop() {
  digitalWrite(LED1, HIGH); // LED1을 켬 (HIGH = 전압 출력)
  digitalWrite(LED2, LOW); // LED2를 끔 (LOW = 전압 출력 안 함)
  delay(1000); // 1000ms = 1초 동안 대기


  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  delay(1000);
}

