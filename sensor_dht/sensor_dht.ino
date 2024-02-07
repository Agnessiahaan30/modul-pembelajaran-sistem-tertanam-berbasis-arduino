#include <DHT_U.h>

//#include <DHT.h>

#define DHTPIN 2          // Pin data sensor DHT11 dihubungkan ke pin digital 2
#define DHTTYPE DHT11     // Jenis sensor DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("Membaca sensor DHT11...");
  dht.begin();
}

void loop() {
  delay(2000);  // Delay 2 detik sebelum membaca sensor

  float temperature = dht.readTemperature();    // Membaca suhu dalam Celsius
  float humidity = dht.readHumidity();          // Membaca kelembaban dalam persen

  // Menampilkan data suhu dan kelembaban pada Serial Monitor
  Serial.print("Suhu: ");
  Serial.print(temperature);
  Serial.print(" *C, Kelembaban: ");
  Serial.print(humidity);
  Serial.println(" %");
}
