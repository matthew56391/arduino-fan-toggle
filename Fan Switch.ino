int fanPin = 8;
int buttonPin = 2;

bool fanOn = false;
int lastButtonState = LOW;

void setup() {
  pinMode(fanPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH && lastButtonState == LOW) {
    fanOn = !fanOn;
    digitalWrite(fanPin, fanOn ? HIGH : LOW);
    delay(300);
  }

  lastButtonState = buttonState;

  delay(10);
}
