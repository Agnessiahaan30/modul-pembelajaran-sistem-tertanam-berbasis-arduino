int sensorPin = A5;
int sensorValue = 0;

void setup (){

  Serial.begin(9600); // Inisialisasi Port serial
  pinMode(7, OUTPUT); // LED sebagai output

}

  void loop(){
    sensorValue=analogRead(sensorPin); //Membaca nilai analog dari pin A5
    Serial.println (sensorValue); //Mencetak hasil pada monitor serial
    float voltage =sensorValue * (5.0/1023.0);
    Serial.println(voltage);

      if(voltage<=1){ //Ambang batas yang saya gunakan disini adalah bernilai 1
        digitalWrite (7, HIGH);}
      else{
        digitalWrite(7, LOW);
      }
    delay(1000); //Memberi jeda selama 1 detik
}
