// The Servo library must be added in order to utilize the Servo
#include <Servo.h> 
// servoPin will be designated to pin 9
#define servoPin 9

//defines a variable 'servo' of type 'Servo'
Servo servo;  

// servo intital servoAngle at 0 degrees 
int servoAngle = 0;
 
void setup() 
{ 
// servo attachs servo at servo pin 9
  servo.attach(servoPin); 
} 
 
 
void loop() 
{ 
// servo angle at 30 degrees
  servoAngle = 30;
  servo.write(servoAngle);
  delay(1000);
  
// servo angle at 60 degrees
  servoAngle = 60;
  servo.write(servoAngle);
  delay(1000);

// servo angle at 90 degrees
  servoAngle = 90;
  servo.write(servoAngle);
  delay(1000);

// servo angle at 120 degrees
  servoAngle = 120;
  servo.write(servoAngle);
  delay(1000);

// servo angle at 150 degrees
  servoAngle = 150;
  servo.write(servoAngle);
  delay(1000);

// servo angle at 180 degrees
  servoAngle = 180;
  servo.write(servoAngle);
  delay(1000);

// servo angle at 0 degrees
  servoAngle = 0;
  servo.write(servoAngle);
  delay(1000);
  
// exit statement
  exit(0);
} 
