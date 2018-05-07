/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int sensorpin = A0;     // analog pin used to connect the sharp sensor
int val = 0;           // variable to store the values from sensor(initially zero)

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);               // starts the serial monitor
}

void loop() {
  val = analogRead(sensorpin);       // reads the value of the sharp sensor
  Serial.println(val);            // prints the value of the sensor to the serial monitor
  delay(0.1);                    // wait for this much time before printing next value

  if(val>= 300) {
    for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 90 degrees
    // in steps of 1 degree
     pos= 90;
     myservo.write(pos);              // tell servo to go to position in variable 'pos'
     delay(600);                       // waits 15ms for the servo to reach the position
   }
    for (pos = 90; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
     pos= 0;
     myservo.write(pos);              // tell servo to go to position in variable 'pos'
     delay(600);                       // waits 15ms for the servo to reach the position
   }
  }

   if(val< 300) {
     if (pos = 0) {
      pos = 0;
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(15);                       // waits 15ms for the servo to reach the position
    }
     if (pos = 90) {
      pos = 90;
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(15);                       // waits 15ms for the servo to reach the position
    }
  }
   
}


 

