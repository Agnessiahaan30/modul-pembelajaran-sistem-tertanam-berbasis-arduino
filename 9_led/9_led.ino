byte led[] = {2, 3, 4, 5, 6};
byte jumlah_led = 5;
void setup() {
  for (int i = 0; i <= jumlah_led; i++) {
    pinMode(led[i], OUTPUT);
    }
}
void loop() {
  int nilai_pot = analogRead(A0);
  byte no_led = map(nilai_pot, 0, 1023, 0, jumlah_led);
  for (int i = 0; i <= jumlah_led; i++) {
    if (i < no_led)
    digitalWrite(led[i], HIGH);
    else
    digitalWrite(led[i], LOW);
    }
}
