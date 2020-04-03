byte var=00000000;
byte a;
int i=0;
void setup() {
  Serial.begin(9600); 
}

void loop() {
  bitWrite(var, 3, 1);
  bitWrite(var, 7, 1);
  Serial.println(var, BIN);
  delay(2000);
 

}
