int[]={2,3,4,5,6,7};
void setup() {
  for(int sayac=0;sayac<5;sayac++){
    pinMode(ledler[sayac],OUTPUT);
  }

void loop() {
 for(int i=0 ; i<5 ; i++){
      digitalWrite(ledler[i],HIGH);
      delay(500);
    }
    for(int j=5 ; j>=0 ; j--){
      digitalWrite(ledler[j],LOW);
      delay(500);
  }
}
