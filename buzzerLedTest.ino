/*Wap to interface LED and Buzzer with Arduino board, so that buzzer
  is put on whenever LED is on and Buzzer is put off when LED is off.
*/
const int buzzer = 6;
const int led = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(buzzer, HIGH);
  digitalWrite(led, HIGH);
  tone(buzzer, 100);
  delay(1000);
  digitalWrite(buzzer, LOW);
  digitalWrite(led, LOW);
  noTone(buzzer);
  delay(1000);
}
