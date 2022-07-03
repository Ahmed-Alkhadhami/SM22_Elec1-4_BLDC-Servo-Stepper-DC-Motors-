#include <Servo.h>

Servo MyServo;  // create servo object to control a servo
int deg = 0;    // a var. to store the servo position

void setup() {
  MyServo.attach(10);  // connect the servo to pin 10
}

void loop()
{
  // rotate from 0 degree to 180 degrees , in steps of 2 degree
  for (deg = 0; deg <= 180;) 
  {
    MyServo.write(deg);   // tell servo to change degree to what stored in "deg" var.
    delay (15) ;          // waits 15ms steady at that degree/position
    deg += 2;             // increase the servo degree by 2 degrees
  }
  delay(1000);
  
  // rotate from 180 degrees to 0 degree , in steps of 2 degree
  for (deg = 180; deg >= 0; )
  { 
    MyServo.write(deg);            // tell servo to go to position in variable 'pos'
    delay(15);                     // waits 15ms for the servo to reach the position
    deg -= 2;                      // increase the servo degree by 5 degrees
  }
  delay(1000);
  MyServo.write(0);
}
