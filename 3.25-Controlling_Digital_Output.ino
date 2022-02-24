void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(10, OUTPUT);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(1500);
  digitalWrite(3, HIGH);
  delay(250);
  digitalWrite(3, LOW);
  delay(1000);
  digitalWrite(3, HIGH);
  delay(250);
  digitalWrite(3, LOW);
  delay(1000);
  digitalWrite(3, HIGH);
  delay(250);
  digitalWrite(3, LOW);
  delay(3000);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(10, HIGH);
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  digitalWrite(3, LOW);
  delay(200);
}
