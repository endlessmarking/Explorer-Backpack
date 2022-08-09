// The pin the light sensor is attached to
const int analogInPin = A0;

// Set up the variable for the light sensor value
int sensorValue = 0;

void setup() {
  // initialize serial communications at 9600 baud
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);

  // print the results to the Serial Monitor:
  Serial.print("Light = ");
  Serial.println(sensorValue);

  // wait 1000 milliseconds before the next loop for the analog-to-digital
  delay(1000);
}
