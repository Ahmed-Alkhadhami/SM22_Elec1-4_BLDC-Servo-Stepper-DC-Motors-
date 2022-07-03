// Stepper motor on Wokwi!

#include <Stepper.h>

const int steps = 200;    // it takes 200 steps/rev

  // Setting the connected pins:
Stepper Stepper2(steps, 8, 9, 10, 11);

void setup()
{
  Stepper2.setSpeed(18);    // setting the speed (rpm):
}

void loop()
{
  Stepper2.step(steps);   // one revolution  in CW direction:
  delay(1000);

  // step one revolution in the other direction:
   Stepper2.step(-steps);   // one revolution  in CCW direction:
  delay(500);
}
