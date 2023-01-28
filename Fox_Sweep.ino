
#include <Servo.h>


Servo tail;

int r1 = 0;
int r2 = 0;
int r3 = 0;

void setup() {
  tail.attach(9);
}

void loop() {

r1 = random(0, 170);
r2 = random(100, 800);
r3 = random(400, 3000);

  tail.write(r1);             
  delay(r2);
  tail.write(0);             
  delay(r3);                    

}
