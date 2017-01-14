/*

*/

const int btnPin = 8;
const int ledPinMin = 9;
const int ledPinMax = 11;
int brightness = 255;
int ledCount = ledPinMax - ledPinMin + 1;
int ledInc = ledCount;

void setup() {
  pinMode(btnPin, INPUT_PULLUP);
  // for (int thisPin = ledPinMin; thisPin <= ledPinMax; thisPin++) { // This is not required for PWM. See https://www.arduino.cc/en/Reference/AnalogWrite
  //   pinMode(thisPin, OUTPUT);
  // }
  analogWrite(ledPinMin, brightness);
}

void ledChange() {
  for (brightness = 255; brightness >= 0; brightness--) {
    analogWrite(ledInc % ledCount + ledPinMin, brightness);
    delay(1);
  }
  ledInc++;
  for (brightness = 0; brightness <= 255; brightness++) {
    analogWrite(ledInc % ledCount + ledPinMin, brightness);
    delay(1);
  }
}

void loop() {
  if (digitalRead(btnPin) == LOW) {
    ledChange();
  }
}
