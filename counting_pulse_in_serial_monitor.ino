int a;
void setup() {
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);
  a=0;

}

void loop() {
  
  digitalWrite(3,HIGH);
  digitalWrite(2,HIGH);
  delay(2000);
  digitalWrite(3,LOW);
  delay(2000);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(2000);
  digitalWrite(3,LOW);
  delay(2000);
  a=a+1;
  Serial.println(a);
}
