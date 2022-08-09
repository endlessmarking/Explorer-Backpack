//Arduino pins connected to the buttons
const int toggleSwitch = A3;

// variables for the pushbutton status
int switchState = 0;

void setup() {
  // initialize serial communications at 9600 baud
  Serial.begin(9600);

  // initialize the pushbuttons as inputs
  pinMode(toggleSwitch, INPUT);
}

void loop() {
  // read the state of the switch
  switchState = digitalRead(toggleSwitch);

  // check if either of the buttons were pressed
  if (switchState == LOW) {
    Serial.println("Switch left");
    } else {
      Serial.println("Switch right");
  }
  delay(500);
}
