// define pins for button and led
const int buttonPin = 12;
const int ledPin = 9;

// setup pins
void setup() {
  // set button pin to INPUT and led pin to OUTPUT
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

// main loop
void loop() {
  // if button is pressed (high) then also power the LED (high)
  if (digitalRead(buttonPin) == HIGH) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    // if the button is not pressed, power down LED (low)
    digitalWrite(ledPin, LOW);
  }
}
