// define pin for led
const int ledPin = 9;

// set led pin to output
void setup() {
  pinMode(ledPin, OUTPUT);
}

// main loop
void loop() {
  // iterate to max output
  for (int i = 0; i <= 255; i++) {
    analogWrite(ledPin, i);
    delay(2);
  }
  // iterate to min output
  for (int i = 255; i >= 0; i--) {
    analogWrite(ledPin, i);
    delay(2);
  }
  // wait for a second
  delay(1000);
}
