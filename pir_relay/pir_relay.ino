int pinPIR = 2;     //pin Out PIR 
int pinRELAY = 4;   //pin IN relay
int statusPIR = 0;  //variabel untuk menampung status sensor

void setup(){
  
pinMode(pinPIR, INPUT);     //pengaturan pin PIR sebagai input
pinMode(pinRELAY, OUTPUT);  //pengaturan pin relay sebagai output
Serial.begin(9600);         //pengaturan baud rate untuk komunikasi serial sebesar 9600bps
}
void loop(){

statusPIR = digitalRead(pinPIR);
if (statusPIR ==HIGH) {            //jika sensor membaca gerakan maka relay akan aktif

digitalWrite(pinRELAY, LOW);
Serial.println("GERAKAN TERDETEKSI");
delay(5000); //Diberikan waktu tunda 5 detik
}
else {
digitalWrite(pinRELAY, HIGH);       //jika sensor tidak membaca gerakan maka relay akan off
Serial.println("TIDAK ADA GERAKAN TERDETEKSI");
delay(5000); //Diberikan waktu tunda 5 detik
}
}
