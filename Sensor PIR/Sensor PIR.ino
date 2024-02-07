int ledPin = 13; // Memilih pin untuk LED
int inputPin = 2; // Memilih input pin (untuk sensor PIR)
int buzzerPin = 8; // Pin buzzer

void setup() {
  pinMode(ledPin, OUTPUT); // Mendeklarasikan LED sebagai output
  pinMode(inputPin, INPUT); // Mendeklarasikan sensor sebagai input
  pinMode(buzzerPin, OUTPUT); // Mendeklarasikan buzzer sebagai output
  Serial.begin(9600);
} 

void loop() {
  int pirState = digitalRead(inputPin); // Membaca status pin sensor PIR

  if (pirState == HIGH) {
    digitalWrite(ledPin, HIGH); // Menyalakan LED
    digitalWrite(buzzerPin, HIGH); // Mengaktifkan buzzer
    delay(500); // Durasi bunyi buzzer
  
  } else {
    digitalWrite(ledPin, LOW); // Mematikan LED
    digitalWrite(buzzerPin, LOW); // Mematikan buzzer
  }
}