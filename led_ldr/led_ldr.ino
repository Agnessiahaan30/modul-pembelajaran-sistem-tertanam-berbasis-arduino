byte ldr = A0;
byte led = 3;

void setup() {
 Serial.begin(9600);
 pinMode(ldr, INPUT);
 pinMode(led, OUTPUT);
}
void loop() {
 int nilai_ldr = analogRead(ldr);
 Serial.println(nilai_ldr);
 if (nilai_ldr <= 316) {
 digitalWrite(led, LOW);
 } else {
 digitalWrite(led, HIGH);
 }
 delay(100);
}
