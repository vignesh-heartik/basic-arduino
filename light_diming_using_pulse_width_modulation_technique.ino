void setup() {
  pinMode(3,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int i;
  for(i=0;i<=255;i=i+5)
  {
    analogWrite(3,i);
    delay(100);
  }
  for(i=255;i>=0;i=i-5)
  {
    analogWrite(3,i);
    delay(100);
  }
}
