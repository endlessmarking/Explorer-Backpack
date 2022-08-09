// Resource:
// https://create.arduino.cc/projecthub/SURYATEJA/use-a-buzzer-module-piezo-speaker-using-arduino-uno-89df45

// The Arduino pin connected to the AUDIO IN on the amplifier (PAM8304)
const int buzzer = A1;

// The Arduino pin connected to the ENABLE pin on the amp
const int enable = 8;

void setup(){
  // Set both pins to outputs
  pinMode(buzzer, OUTPUT);
  pinMode(enable, OUTPUT);

  // Turn on the enable pin
  digitalWrite(enable, HIGH);
}

void loop(){
  tone(buzzer, 262);  // Middle C in hertz
  delay(500);         // Delay for 500 ms
  tone(buzzer, 294);  // D in hertz
  delay(500);         // Delay for 500 ms
  tone(buzzer, 330);  // E in hertz
  delay(500);         // Delay for 500 ms
  tone(buzzer, 349);  // F in hertz
  delay(500);         // Delay for 500 ms
  tone(buzzer, 392);  // G in hertz
  delay(500);         // Delay for 500 ms
  tone(buzzer, 440);  // A in hertz
  delay(500);         // Delay for 500 ms
  tone(buzzer, 493);  // B in hertz
  delay(500);         // Delay for 500 ms
  tone(buzzer, 523);  // C in hertz
  delay(500);         // Delay for 500 ms
  noTone(buzzer);     // Stop the sound...
  delay(5000);        // ...for 5 sec
}
