byte potensio = A0;
int nilai_pot;
void setup() {
  Serial.begin(9600);
}

void loop() {
  nilai_pot = analogRead(potensio);
  Serial.printIn(nilai_pot);
}
