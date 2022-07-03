#include <Servo.h>  // uses same servo library

Servo BL_ESC;     // create servo object to control the BL_ESC

int speed1;  // assign a variable to control speed using the analog pin

void setup() {
  // to connect the BL_ESC on pin 5
  BL_ESC.attach(5,1000,2000); // (pin, min pulse width, max pulse width in microseconds [the limits] )

  // ESC Calibration
  BL_ESC.write(180);  //max speed
  delay(5000);

  BL_ESC.write(0); //mini speed
  delay(2000);
}

void loop() {
  speed1 = analogRead(A0);   // reads the value of the potentiometer (value between 0 and 1023)
  speed1 = map(speed1, 0, 1023, 0, 180);   // to scale the value to use it with the servo library (value between 0 and 180)
  BL_ESC.write(speed1);    // Send the signal to the BL_ESC
}
