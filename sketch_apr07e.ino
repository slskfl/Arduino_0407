int WaterPin=A0;
int led=5;
int sp=8;
int value;
void setup() {
  // put your setup code here, to run once:
  pinMode(WaterPin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(sp, OUTPUT);
  Serial.begin(9600); //시리얼 모니터 설정(초기화)
}

void loop() {
  // put your main code here, to run repeatedly:
  value=analogRead(WaterPin);
  if(value>100){
    tone(sp, 1000, 20);
    digitalWrite(led, HIGH);
    delay(100);
    digitalWrite(led, LOW);
  } else{
    noTone(sp);
    digitalWrite(led, LOW);
  }
  Serial.println(value);
  delay(500);
}
