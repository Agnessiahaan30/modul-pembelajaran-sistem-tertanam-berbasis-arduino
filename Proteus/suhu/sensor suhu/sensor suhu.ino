float suhu;
int temp =A1;
void setup() {
  // Memulai komunikasi serial dengan kecepatan 9600 bps
  Serial.begin(9600);

}

void loop() {
  suhu = analogRead(temp);
  suhu = (500.0*suhu)/1024.0;
  suhu = suhu/10;

  // Menampilkan suhu pada serial monitor
  Serial.print("SUHU = ");
  Serial.print(suhu);
  Serial.print(223);
  Serial.println(" °C");
  Serial.println();

  // Memberi jeda selama 1 detik
  delay(1000);
}