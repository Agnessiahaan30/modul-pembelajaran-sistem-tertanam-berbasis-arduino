
// Mendefinisikan pin input untuk sensor LDR
const int LDR_pin = 2;

void setup() {
  // Mengaktifkan komunikasi serial dengan kecepatan 9600 baud
  Serial.begin(9600);

}

void loop() {
  // Membaca nilai analog dari sensor LDR
  int sensorValue = analogRead(LDR_pin);

  // Mengirim nilai sensor ke monitor serial
  Serial.print("Nilai Sensor LDR: ");
  Serial.println(sensorValue);
  delay (5000);// Menunda eksekusi program selama 5000 milidetik;
}
