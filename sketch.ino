void setup() {
    // put your setup code here, to run once:
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(A0,INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);

  digitalWrite(1, HIGH);
  Serial.println(digitalRead(1));
  Serial.println(analogRead(A0));
  analogWrite(3,128);

}
int i = 0;
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(i);
  digitalWrite(13, LOW);
  delay(i);
  i = analogRead(A0);

}
