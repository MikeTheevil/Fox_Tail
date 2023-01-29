
#include <Servo.h>


Servo tail;

int r1 = 0; //ints store random value
int r2 = 0;
int r3 = 0;

void setup() {
  tail.attach(9); // servo is attached to this pin
}

void loop() {
// random values generated here
r1 = random(0, 170); //servo steps are between 0 - 180 however the mechanics require the maximum to be 170
r2 = random(100, 800);
r3 = random(400, 3000);

  tail.write(r1); //sets servo position, for this example 0>170           
  delay(r2); //random delay for tail movemnt duration
  tail.write(0);// sets tail to nuteral position             
  delay(r3); // random delay before next movement                    

}
