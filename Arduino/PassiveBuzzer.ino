// Define Pins
// buzzerPin will be designated to pin 10
#define buzzerPin 10

// the setup function runs once 
void setup() 
{
  // initialize pin 10 as an output.
  pinMode(buzzerPin, OUTPUT);
}


void loop() {
  // turn the buzzer on (HIGH is the voltage level)
  tone(buzzerPin, HIGH);
  // waits for 5 seconds
  delay(5000);
  // turn the buzzer off by making the voltage LOW
  tone(buzzerPin, LOW);
  // waits for 1 second
  delay(1000);
  // exit statement
  exit(0);
}
