#include <Servo.h>

Servo servomotor;

int x;
int y;

void setup() {
  servomotor.attach(9);

}

void loop() {

  for(x=0 ; x<=180 ; x+=15){
    servomotor.write(x);
    delay(500);
  }

  for(y=180 ; y>=0 ; y-=30){
    servomotor.write(y);
    delay(50);
  }



}
