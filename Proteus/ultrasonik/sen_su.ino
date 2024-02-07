int triger = 7;
int echo =6;

void setup() {
  Serial.begin(9600);
  pinMode (triger,OUTPUT);
  pinMode (echo,INPUT);
}

void loop() {
  float duration, distance;
  digitalWrite(triger,LOW);
  delay(1000);
  digitalWrite(triger,HIGH);
  delayMicroseconds(10);
  digitalWrite(triger,LOW);
  duration = pulseIn(echo,HIGH);
  distance = (duration/2)*0.0340;
  
  Serial.print("Jarak = ");
  Serial.print(distance);
  Serial.print(" cm");
  Serial.println();

  delay(250);
}
