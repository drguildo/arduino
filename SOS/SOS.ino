int OUTPUT_PIN = 13;

int UNIT_OF_TIME = 500; // 0.5 seconds

int DOT_TIME = UNIT_OF_TIME;
int DASH_TIME = 3 * UNIT_OF_TIME;
int DELAY_TIME = 3 * UNIT_OF_TIME;

void setup() {
  pinMode(OUTPUT_PIN, OUTPUT);
}

void loop() {
  dot();
  dot();
  dot();

  pause();

  dash();
  dash();
  dash();

  pause();

  dot();
  dot();
  dot();

  pause();
  pause();
}

void dot() {
  digitalWrite(OUTPUT_PIN, HIGH);
  delay(DOT_TIME);

  digitalWrite(OUTPUT_PIN, LOW);
  delay(DELAY_TIME);
}

void dash() {
  digitalWrite(OUTPUT_PIN, HIGH);
  delay(DASH_TIME);

  digitalWrite(OUTPUT_PIN, LOW);
  delay(DELAY_TIME);
}

void pause() {
  digitalWrite(OUTPUT_PIN, LOW);
  delay(DELAY_TIME);
}
