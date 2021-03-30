int DC=3;
int pot_Pin=A0;
int motor_Degeri=0;
int pot_degeri=0;
int led=10;

void setup() {
  Serial.begin(9600);
  pinMode(DC,OUTPUT);
  pinMode(pot_Pin,OUTPUT);
  pinMode(2,OUTPUT);

}

void loop() {

  pot_degeri=analogRead(pot_Pin);
  motor_Degeri=map(pot_degeri,0,1023,0,255);
  analogWrite(3,motor_Degeri);
  
  Serial.print("Potansiyometre : ");
  Serial.print(pot_degeri);
  Serial.print("    Dc Motor : ");
  Serial.println(motor_Degeri);

  
  if(motor_Degeri>=180){
    digitalWrite(2,HIGH);
   
    
  }
  else{
    digitalWrite(2,LOW);
  }
}
