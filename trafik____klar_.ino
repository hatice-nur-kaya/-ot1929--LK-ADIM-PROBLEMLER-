int led1=2;
int led2=3;
int led3=4;
int ledler[]={1,2,3};

void setup()
{
  for(int sayac=0;sayac<3;sayac++){
    pinMode(ledler[sayac],OUTPUT);
  }
}

void loop()
{
  digitalWrite(led1,HIGH);
  delay(10000);
  digitalWrite(led2,HIGH);
  delay(10000);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  delay(2000);
  digitalWrite(led3,HIGH);
  delay(5000);
  digitalWrite(led3,LOW);
}
