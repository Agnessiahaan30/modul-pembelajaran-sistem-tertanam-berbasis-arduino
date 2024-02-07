byte tombol = 2;
byte status_tombol;
byte led = 3;
void setup() {
  Serial.begin(9600);
  pinMode(tombol, INPUT);
  pinMode(led, OUTPUT);
}
void loop() {
  status_tombol = digitalRead(tombol);
  Serial.println(status_tombol);
  digitalWrite(led, status_tombol);
}
