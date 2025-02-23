// Counts from 0 to 15 and lights a sequence of LEDs that represent the
// correspoding bits of the binary representation of the number.

const int DELAY = 1000;
const int LED_PINS[] = { 10, 11, 12, 13 };

int number;

void setup() {
  pinMode(LED_PINS[0], OUTPUT);
  pinMode(LED_PINS[1], OUTPUT);
  pinMode(LED_PINS[2], OUTPUT);
  pinMode(LED_PINS[3], OUTPUT);

  number = 0;
}

void loop() {
  if (number >= 16) {
    number = 0;
  }

  for (int i = 0; i < 4; i++) {
    int bitPosition = 1 << i;
    int correspondingBit = number & bitPosition;
    digitalWrite(LED_PINS[i], correspondingBit ? HIGH : LOW);
  }

  number = number + 1;

  delay(DELAY);
}
