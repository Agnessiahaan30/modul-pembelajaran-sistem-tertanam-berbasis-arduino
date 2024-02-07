#include <SRF05.h>

const int triggerPin = 2;
const int echoPin = 3;
const int relayPin = 4;
const int distanceThreshold = 50; // Jarak ambang batas untuk mengaktifkan relay (dalam cm)

SRF05 ultrasonic(triggerPin, echoPin);

void setup() {
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); // Relay awalnya mati
}

void loop() {
  int distance = SRF05.read();
  
  if (distance <= distanceThreshold) {
    digitalWrite(relayPin, HIGH); // Aktifkan relay jika jarak kurang dari atau sama dengan ambang batas
  } else {
    digitalWrite(relayPin, LOW); // Matikan relay jika jarak melebihi ambang batas
  }
  
  delay(100); // Tunda untuk stabilitas pembacaan
}
