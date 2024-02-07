const int sensorPin = A0;
const int relayPin = 4;
const int fireThreshold = 500; // Ambang batas sensor api

void setup() {
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); // Relay awalnya mati
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  
  if (sensorValue >= fireThreshold) {
    digitalWrite(relayPin, HIGH); // relay aktif jika sensor api terdeteksi
  } else {
    digitalWrite(relayPin, LOW); // relay mati jika tidak ada terdeteksi api
  }
  
  delay(100); // Tunda untuk stabilitas pembacaan
}
 
