int LED_PIN_YELLOW = 10;
int LED_PIN_BLUE = 11;
int LED_PIN_GREEN = 12;
int LED_PIN_RED = 13;

void setup() {
  randomSeed(2381);

  pinMode(LED_PIN_YELLOW, OUTPUT);
  pinMode(LED_PIN_BLUE, OUTPUT);
  pinMode(LED_PIN_GREEN, OUTPUT);
  pinMode(LED_PIN_RED, OUTPUT);
}

void loop() {
  enableRandomLights();

  long randomDelay = random(250, 1000);
  delay(randomDelay);
}

void enableRandomLights() {
  long randomPinSelection = random(0, 16);

  reset();

  if (bitRead(randomPinSelection, 0) == 1) {
    digitalWrite(LED_PIN_YELLOW, HIGH);
  }

  if (bitRead(randomPinSelection, 1) == 1) {
    digitalWrite(LED_PIN_BLUE, HIGH);
  }

  if (bitRead(randomPinSelection, 2) == 1) {
    digitalWrite(LED_PIN_GREEN, HIGH);
  }

  if (bitRead(randomPinSelection, 3) == 1) {
    digitalWrite(LED_PIN_RED, HIGH);
  }
}

void reset() {
  digitalWrite(LED_PIN_YELLOW, LOW);
  digitalWrite(LED_PIN_BLUE, LOW);
  digitalWrite(LED_PIN_GREEN, LOW);
  digitalWrite(LED_PIN_RED, LOW);
}
