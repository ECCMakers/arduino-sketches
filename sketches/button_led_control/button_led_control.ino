/*

*/

int button = 12;
int led = 13;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP); // INPUT_PULLUP enables the Arduino Internal Pull-Up Resistor
}

void loop() {
  digitalWrite(led, !digitalRead(button));
}
