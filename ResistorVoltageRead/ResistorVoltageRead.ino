const int readPin = A0;

float voltage = 0;

void setup() {
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  voltage = (5.0 / 1024.0) * (float)analogRead(readPin);
  Serial.print(voltage);
  Serial.println("V");

  delay(500);
}
