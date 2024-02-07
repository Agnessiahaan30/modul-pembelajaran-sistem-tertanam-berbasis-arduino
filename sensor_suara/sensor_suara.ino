int soundSensorPin = A0; //pin analog output sensor suara
int ledPin = 13; //pin LED
int buzzerPin = 7; // Pin buzzer

void setup() {
  pinMode(soundSensorPin, INPUT); //atur pin sensor suara sebagai input
  pinMode(ledPin, OUTPUT); //atur pin LED sebagai output
  pinMode(buzzerPin, OUTPUT); // Mendeklarasikan buzzer sebagai output
}

void loop() {
  int soundValue = analogRead(soundSensorPin); //baca nilai output sensor suara
  if (soundValue > 200) { //jika nilai output di atas 200
    digitalWrite(ledPin, HIGH); //hidupkan LED
    digitalWrite(buzzerPin, HIGH); // Mengaktifkan buzzer
    delay(500); // Durasi bunyi buzzer
  } else { //jika nilai output di bawah 500
    digitalWrite(ledPin, LOW); //matikan LED
    digitalWrite(buzzerPin, LOW); // Mematikan buzzer
  }
}
