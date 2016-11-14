#define DIR     8
#define STEP    9
#define STEPTIME 1
#define NUMSTEPS 26667 // 200 steps per revolution, gearbox 100:1, gears 24:32

unsigned stepNum = 0; // which step of the circle are we on

void setup() {
  pinMode(DIR,OUTPUT);
  pinMode(STEP,OUTPUT);
}

void loop() {
  if (digitalRead(DIR)) { // reverse direction
    digitalWrite(DIR,LOW);
  } else {
    digitalWrite(DIR,HIGH);
  }

  for (stepNum = 0; stepNum < NUMSTEPS; stepNum++) {
    digitalWrite(STEP,HIGH);
    digitalWrite(STEP,LOW);
    delay(STEPTIME);
  }
}
