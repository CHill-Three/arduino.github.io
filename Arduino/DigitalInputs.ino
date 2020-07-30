// Define Pins
// ledPin will be designated to pin 5
#define ledPin 5
// buttonApin will be designated to pin 9
#define buttonApin 9
// buttonBpin will be designated to pin 8
#define buttonBpin 8
 
byte leds = 0;
 
void setup() 
{
  pinMode(ledPin, OUTPUT);
// pin is to be used as an input
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);  
}
 
void loop() 
{
  if (digitalRead(buttonApin) == LOW)
  {
// if button A is pressed, a HIGH is written to the ledPin
    digitalWrite(ledPin, HIGH);
  }
  if (digitalRead(buttonBpin) == LOW)
  {
// if button B is pressed, a LOW is written to the ledPin
    digitalWrite(ledPin, LOW);
  }
}
