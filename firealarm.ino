int fire=7;
int led=13;
int yled=12;
int buzzer=11;
int deger;

void setup() {
pinMode(fire,INPUT);
pinMode(led,OUTPUT);
pinMode(yled,OUTPUT);
pinMode(buzzer,OUTPUT);
}

void loop() {
deger=digitalRead(fire);
if(deger==HIGH) 
{
digitalWrite(led,HIGH);
digitalWrite(buzzer,HIGH);
delay(50);
digitalWrite(led,LOW);
digitalWrite(buzzer,LOW);
delay(50);
}
else
{
digitalWrite(yled,HIGH);
}
delay(100);
}
