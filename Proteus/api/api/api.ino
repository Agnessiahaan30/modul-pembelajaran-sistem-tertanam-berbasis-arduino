#define Flame_pin 13 // Sensor Flame dihubungkan ke pin 13 pada Arduino
int flame_value; // Menyimpan status sensor flame

void setup() {
  Serial.begin(9600); // Membuka serial monitor dengan kecepatan 9600 bps
  pinMode(1, OUTPUT);

}

void loop() {
  flame_value = digitalRead (Flame_pin);
  Serial.print(flame_value); // Menampilkan status sensor flame pada serial monitor
  if (flame_value == HIGH)
  {
    digitalWrite(1, HIGH);
    Serial.print("HIGH VALUE"); // Menampilkan status sensor flame pada serial monitor
    Serial.println(flame_value);
    delay(1000); // Memberi jeda selama 1 detik
  }
  else
  {
    digitalWrite(1, HIGH);
    Serial.print("LOW VALUE"); // Menampilkan status sensor flame pada serial monitor
    Serial.println(flame_value);
  }

    delay(1000); // Memberi jeda selama 1 detik
}