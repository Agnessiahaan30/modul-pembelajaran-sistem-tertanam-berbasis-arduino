// Library yang dibutuhkan
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// Informasi koneksi WiFi
char auth[] = "83I1SDfz-rjdNGS5DrysCb3boYfwfHz5"; // Masukkan token autentikasi Blynk yang valid
char ssid[] = "Kelompok 8"; // Masukkan nama jaringan WiFi Anda
char pass[] = "JayaJaya"; // Masukkan kata sandi WiFi Anda

// Pin yang digunakan untuk menghubungkan LED
const int ledPin = 2;

void setup() {
  // Menginisialisasi Serial Monitor
  Serial.begin(115200);

  // Menghubungkan ke jaringan WiFi
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");

  // Menginisialisasi koneksi Blynk
  Blynk.begin(auth, ssid, pass);
  
  // Mengatur pin sebagai OUTPUT
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Menjalankan koneksi Blynk
  Blynk.run();
}

// Fungsi untuk mengendalikan LED dari aplikasi Blynk
BLYNK_WRITE(V1) {
  int ledValue = param.asInt(); // Membaca nilai dari widget tombol di aplikasi Blynk
  digitalWrite(ledPin, ledValue); // Mengatur pin LED sesuai dengan nilai tombol (0 atau 1)
}
