/*

*/

const int btnPin = 8;
const int ledPinMin = 9;
const int ledPinMax = 11;
int ledCount = ledPinMax - ledPinMin + 1;
int ledInc = ledCount;

void setup() {
  pinMode(btnPin, INPUT_PULLUP);
  // for (int thisPin = ledPinMin; thisPin <= ledPinMax; thisPin++) { // This is not required for PWM. See https://www.arduino.cc/en/Reference/AnalogWrite
  //   pinMode(thisPin, OUTPUT);
  // }
  analogWrite(ledPinMin, 255);
}

void ledChange() {
  int brightness = 255;
  int brightness2 = 0;
  for (int i = 0; i <= 255; i++) {
    analogWrite(ledInc % ledCount + ledPinMin, brightness);
    analogWrite((ledInc + 1) % ledCount + ledPinMin, brightness2);
    brightness--;
    brightness2++;
    delay(1);
  }
  ledInc++;
}

void loop() {

  if (digitalRead(btnPin) == LOW) {
    ledChange();
  }
}
