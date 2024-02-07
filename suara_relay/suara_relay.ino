const int sensorPin = A0;
const int relayPin = 4;
const int soundThreshold = 200; // Ambang batas sensor suara

void setup() {
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); // Relay awalnya mati
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  
  if (sensorValue >= soundThreshold) {
    digitalWrite(relayPin, HIGH); // Aktifkan relay jika suara terdeteksi
  } else {
    digitalWrite(relayPin, LOW); // Matikan relay jika tidak ada deteksi suara
  }
  
  delay(100); // Tunda untuk stabilitas pembacaan
}
