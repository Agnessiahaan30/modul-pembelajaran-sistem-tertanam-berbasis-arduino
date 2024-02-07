#include <NewPing.h> // Library sensor PING
#define TRIGGER_PIN 7 // Pin trigger HC-SR04
#define ECHO_PIN 6 // Pin echo HC-SR04
#define MAX_DISTANCE 200 // Jarak maksimum yang dapat diukur, maks 200 cm

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // Inisialisasi sensor

void setup()
{
  Serial.begin(9600); // Memulai komunikasi serial
  Serial.println("Kelompok 8"); // Mencetak teks pada serial monitor
  delay(500); // Memberi jeda selama 500 milidetik
}

void loop()
{
  delay(3000); // Memberi jeda selama 30 milidetik setiap PING
  Serial.print("Jarak = "); // Mencetak teks pada serial monitor
  Serial.print(sonar.ping_cm()); // Mencetak jarak yang diukur oleh sensor (dalam cm)
  Serial.println("cm"); // Mencetak teks pada serial monitor
}
