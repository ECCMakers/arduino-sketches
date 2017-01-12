/*

*/

int led = 2;
int blink_short = 125;
int blink_long = 375;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(blink_short);
  digitalWrite(led, LOW);
  delay(blink_short);
  digitalWrite(led, HIGH);
  delay(blink_short);
  digitalWrite(led, LOW);
  delay(blink_short);
  digitalWrite(led, HIGH);
  delay(blink_short);
  digitalWrite(led, LOW);
  delay(blink_long);
  
  digitalWrite(led, HIGH);
  delay(blink_long);
  digitalWrite(led, LOW);
  delay(blink_short);
  digitalWrite(led, HIGH);
  delay(blink_long);
  digitalWrite(led, LOW);
  delay(blink_short);
  digitalWrite(led, HIGH);
  delay(blink_long);
  digitalWrite(led, LOW);
  delay(blink_long);
  
  digitalWrite(led, HIGH);
  delay(blink_short);
  digitalWrite(led, LOW);
  delay(blink_short);
  digitalWrite(led, HIGH);
  delay(blink_short);
  digitalWrite(led, LOW);
  delay(blink_short);
  digitalWrite(led, HIGH);
  delay(blink_short);
  digitalWrite(led, LOW);
  delay(blink_long * 2 + blink_short);
}
