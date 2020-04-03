byte x=B10101010;
byte z;
void setup() {
  pinMode(3,OUTPUT);

}

void loop() {
  for(int i=0;i<=7;i++){
  z=bitRead(x,i);
 digitalWrite(3,z);
 delay(1000);
 
}
}
