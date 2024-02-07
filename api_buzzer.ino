#define FLAME_SENSOR_PIN 2   // Pin flame sensor dihubungkan ke pin digital 2

int buzzerPin = 8; // Pin buzzer

void setup() {
  pinMode(buzzerPin, OUTPUT); // Mendeklarasikan buzzer sebagai output
  Serial.begin(9600);
  pinMode(FLAME_SENSOR_PIN, INPUT);
  Serial.println("Membaca sensor api...");
}

void loop() {
  int flame = digitalRead(FLAME_SENSOR_PIN);

  if (flame == HIGH) {
    Serial.println("Tidak terdeteksi api");
    digitalWrite(buzzerPin, LOW); // Mematikan buzzer
  } else {
    Serial.println("Terdeteksi api.");
    digitalWrite(buzzerPin, HIGH); // Mengaktifkan buzzer

  }

  delay(2000);   // Delay 2 detik sebelum membaca sensor lagi
}
