#include <Stepper.h>

const int devirbasiadim=200;
Stepper myStepper(devirbasiadim, 8, 9, 10, 11);

void setup() {
  myStepper.setSpeed(60);
  Serial.begin(9600);
}

void loop() {
  Serial.println("clockwise");
  myStepper.step(devirbasiadim);
  delay(1000);

  Serial.println("counterclockwise");
  myStepper.step(-devirbasiadim);
  delay(1000);

}
