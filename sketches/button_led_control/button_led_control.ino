/*

*/

int button = 12;
int led = 13;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP); // INPUT_PULLUP enables the Arduino Internal Pull-Up Resistor
}

void loop() {
  bool buttonState = digitalRead(12); // store current state of pin 12
  digitalWrite(led, !buttonState);
}
