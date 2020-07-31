// Define Pins
// ledPin will be designated to pin 10
#define ledPin 10
// tiltBall will be designated to pin 5
#define tiltBall 5

void setup()
{
//ledPin is an output
pinMode(ledPin,OUTPUT);
//tiltBall is an input (completes circuit)
pinMode(tiltBall,INPUT);
//tiltBall is se as HIGH (On)
digitalWrite(tiltBall, HIGH);
}
void loop()
{
int digitalValue = digitalRead(tiltBall);
if(HIGH == digitalValue)
{
//led stays off
digitalWrite(ledPin,LOW);
}
else ////if tilt switch is completed
{
//turn the led on
digitalWrite(ledPin,HIGH);
}
}
