const int RED=9;
const int GREEN=10;
const int BLUE=11;
const int POT=A0;
int value;
void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  randomSeed(analogRead(0));//난수 생성기 초기화
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(RED, random(255));
  analogWrite(GREEN, random(255));
  analogWrite(BLUE, random(255));
  delay(1000);
}
