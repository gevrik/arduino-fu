// define pin for led and potentiometer
const int ledPin = 9;
const int potPin = A0;

int input = 0;
int output = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  input = analogRead(potPin);
  output = map(input, 0, 1023, 0, 255);
  analogWrite(ledPin, output);
}
