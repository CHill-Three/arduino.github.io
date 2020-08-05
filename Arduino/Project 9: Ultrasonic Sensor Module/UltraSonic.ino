// Define Pins
// echoPin will be designated to pin 2
#define echoPin 2
// trigPin will be designated to pin 2
#define trigPin 3
// Define Vars
// timeTotal will act as the duration
float timeTotal;
// distanceTotal will act as the total distance measured
float distanceTotal;

void setup() {
// echoPin will be designated as an INPUT device
  pinMode(echoPin, INPUT);
// trigPin will be designated as an OUTPUT device
  pinMode(trigPin, OUTPUT);
// Baud rate designated at 9600
  Serial.begin(9600);
}

void loop() {
// trigPin will be set to LOW (essentially OFF) for 2 microseconds
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
// trigPin will be set to HIGH (essentially ON) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
// trigPin will be set to LOW (essentially OFF)
  digitalWrite(trigPin, LOW);
// timeTotal will use pulseIn to read the pin (echoPin) on HIGH (essentially ON)
  timeTotal = pulseIn(echoPin, HIGH);
//Sound travels at 0.000344 meter per microsecond. (0.0344 = cm)
  distanceTotal = (timeTotal / 2) * 0.0344;

// if distance is equal or greater than 150 cm or less than 3 cm, print: out of range   
  if (distanceTotal >= 150){
    Serial.print("distanceTotal = ");
    Serial.println("Out of range (distance is equal to or greater than 150 cm)");
  } else if (distanceTotal <= 3){
    Serial.print("distanceTotal = ");
    Serial.println("Out of range (distance is equal to or less than 3 cm)");
  } else {
  // Else: print statement
    Serial.print("Measured distanceTotal = ");
    Serial.print(distanceTotal);
    Serial.println(" cm");
// Delay set before loop restarts to ensure clear data
    delay(100);
  }
// Delay set before loop restarts to ensure clear data
  delay(100);
}
