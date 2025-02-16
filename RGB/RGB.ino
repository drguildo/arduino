int LED_PIN_RED = 11;
int LED_PIN_GREEN = 12;
int LED_PIN_BLUE = 13;

void setup() {
  randomSeed(2381);

  pinMode(LED_PIN_RED, OUTPUT);
  pinMode(LED_PIN_GREEN, OUTPUT);
  pinMode(LED_PIN_BLUE, OUTPUT);
}

void loop() {
  enableRandomLights();

  long randomDelay = random(250, 1000);
  delay(randomDelay);
}

void enableRandomLights() {
  long randomPinSelection = random(0, 8);

  reset();

  if (bitRead(randomPinSelection, 0) == 1) {
    digitalWrite(LED_PIN_RED, HIGH);
  }

  if (bitRead(randomPinSelection, 1) == 1) {
    digitalWrite(LED_PIN_GREEN, HIGH);
  }

  if (bitRead(randomPinSelection, 2) == 1) {
    digitalWrite(LED_PIN_BLUE, HIGH);
  }
}

void reset() {
  digitalWrite(LED_PIN_RED, LOW);
  digitalWrite(LED_PIN_GREEN, LOW);
  digitalWrite(LED_PIN_BLUE, LOW);
}
