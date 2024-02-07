byte ldr = A0;
int nilai_ldr;
void setup() {
 Serial.begin(9600);
}
void loop() {
 nilai_ldr = analogRead(ldr);
 Serial.println(nilai_ldr);
}
