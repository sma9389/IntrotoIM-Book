void setup() {
  pinMode(12, OUTPUT);          // LED
  pinMode(A2, INPUT_PULLUP);    // Foil pressure switch
}

void loop() {
  int switchState = digitalRead(A2);

  if (switchState == LOW) {
    digitalWrite(12, HIGH);     // LED on
  } else {
    digitalWrite(12, LOW);      // LED off
  }
}