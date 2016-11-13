#define DIR     8
#define STEP    9

void setup() {
  pinMode(DIR,OUTPUT);
  pinMode(STEP,OUTPUT);
  analogWrite(STEP,128);
}

void loop() {
  digitalWrite(DIR,HIGH);
  delay(3000);
  digitalWrite(DIR,LOW);
  delay(3000);
}
