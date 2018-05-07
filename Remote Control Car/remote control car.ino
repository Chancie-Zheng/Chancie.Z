/*
Adafruit Arduino - Lesson 13. DC Motor
*/


#include "IRremote.h"
int motor1Pin = 3;
int motor2Pin = 5;
int receiver = 11; // Signal Pin of IR receiver to Arduino Digital Pin 11
int irRead = 0;  //variable to hold state of IR messages
/*-----( Declare objects )-----*/
IRrecv irrecv(receiver);     // create instance of 'irrecv'
decode_results results;      // create instance of 'decode_results'

/*-----( Function )-----*/
void translateIR() // takes action based on IR code received

// describing Remote IR codes 

{

  switch(results.value)

  {
  case 0xFF22DD: 
    Serial.println("FAST BACK");    
    irRead = 1;
  break;
  
  case 0xFF02FD: 
    Serial.println("PAUSE");  
    irRead = 2; 
  break;
    
  case 0xFFC23D: 
    Serial.println("FAST FORWARD");  
    irRead = 3; 
  break;
  
  }// End Case

  delay(500); // Do not get immediate repeat
} 

void setup() 
{ 
  Serial.begin(9600);
  Serial.println("IR Receiver Button Decode"); 
  irrecv.enableIRIn(); // Start the receiver
} 
 
 
void loop() {

  Serial.print("no line return");
  Serial.print("no line return");
  Serial.print("no line return");
  Serial.print("no line return");
  Serial.print("no line return");
  Serial.println("line return");
   Serial.println("line return");
    Serial.print("line return");
     Serial.print("line return");
      Serial.print("line return");

 
  if (irrecv.decode(&results)) // have we received an IR signal?
  {
    translateIR(); 
    irrecv.resume(); // receive the next value
  }
if (irRead == 1){
  Serial.print("If works - FAST BACK - ");
  Serial.print("Motors ON reverse");
      analogWrite(motor1Pin,255);
      analogWrite(motor2Pin,0);
  irRead = 0;
}

if (irRead == 2){
  Serial.print("If works - PAUSE - ");
   Serial.println("Motors OFF");
      analogWrite(motor1Pin,0);
      analogWrite(motor2Pin,0);
  irRead = 0;
}
  /*  if(Serial.println("FAST BACK"))
    {
      analogWrite(motor1Pin,255);
      analogWrite(motor2Pin,0);
      delay(10000);
    }

    if(Serial.println("FAST FORWARD"));
    {
      analogWrite(motor1Pin,0);
      analogWrite(motor2Pin,255);
      delay(10000);
    }

      if(Serial.println("PAUSE"));
    {
      analogWrite(motor1Pin,255);
      analogWrite(motor2Pin,255);
      delay(10000);
     }
  }
  else
{
  analogWrite(motor1Pin,0);
  analogWrite(motor2Pin,0);
}
*/
}
    



