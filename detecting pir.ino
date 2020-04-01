int red =13 ;
int white =12 ;
int green =11 ;
int pir =3;
boolean a=0;

void setup()
{
pinMode(red, OUTPUT);
pinMode(white, OUTPUT);
pinMode(green, OUTPUT);
pinMode(pir, INPUT);
digitalWrite(red, LOW);
digitalWrite(green, LOW);  
digitalWrite(white, HIGH);
delay(40000);



Serial.begin(9600);
}

void loop()
{

digitalWrite(white, LOW);

Serial.println(a);
digitalWrite(green,HIGH);
delay(1000);
a=digitalRead(3);

if(a == HIGH)
{
  digitalWrite(green, LOW);
  digitalWrite(red,HIGH);
  delay(2000);
  digitalWrite(red, LOW);


}
delay(300);

}
