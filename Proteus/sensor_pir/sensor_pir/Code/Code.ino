// Pin connected to PIR sensor
const int pirPin = 2;

void setup() {
  // Initialize the serial communication
  Serial.begin(9600);
  // Set the PIR pin as input
  pinMode(pirPin, INPUT);
}

void loop() {
  // Read the state of the PIR sensor
  int pirState = digitalRead(pirPin);

  // If motion is detected
  if (pirState == HIGH) {
    Serial.println("Gerakan Terdeteksi!");
  } else {
    Serial.println("Gerakan Tidak Terdeteksi!");
  }

  delay(1000); // Wait for 1 second
}
