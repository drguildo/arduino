const int LED_PIN = 3;
const int LED_LEVEL_INCREMENT = 2;

int ledPinLevel = 0;
bool goingUp = true;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // This is relatively low because it's had to distinguish LED brightness
  // difference past a certain thershold.
  if (goingUp) {
    if (ledPinLevel <= 96) {
      ledPinLevel += LED_LEVEL_INCREMENT;
    } else {
      goingUp = false;
    }
  } else {
    if (ledPinLevel >= LED_LEVEL_INCREMENT) {
      ledPinLevel -= LED_LEVEL_INCREMENT;
    } else {
      goingUp = true;
    }
  }

  analogWrite(LED_PIN, ledPinLevel);
  delay(20);
}
