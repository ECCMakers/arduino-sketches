/*

*/

int blink_short = 125;
int blink_long = 375;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(blink_short);
  digitalWrite(LED_BUILTIN, LOW);
  delay(blink_short);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(blink_short);
  digitalWrite(LED_BUILTIN, LOW);
  delay(blink_short);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(blink_short);
  digitalWrite(LED_BUILTIN, LOW);
  delay(blink_long);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(blink_long);
  digitalWrite(LED_BUILTIN, LOW);
  delay(blink_short);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(blink_long);
  digitalWrite(LED_BUILTIN, LOW);
  delay(blink_short);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(blink_long);
  digitalWrite(LED_BUILTIN, LOW);
  delay(blink_long);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(blink_short);
  digitalWrite(LED_BUILTIN, LOW);
  delay(blink_short);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(blink_short);
  digitalWrite(LED_BUILTIN, LOW);
  delay(blink_short);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(blink_short);
  digitalWrite(LED_BUILTIN, LOW);
  delay(blink_long * 2 + blink_short);
}
