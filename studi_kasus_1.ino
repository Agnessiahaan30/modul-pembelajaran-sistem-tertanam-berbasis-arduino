int pinLed = 2;

void setup(){
pinMode(2, OUTPUT);
}

void loop(){
digitalWrite(3, HIGH);
delay(1000);
digitalWrite(2, LOW);
delay(1000);
digitalWrite(2, HIGH);
delay(1000);
}
