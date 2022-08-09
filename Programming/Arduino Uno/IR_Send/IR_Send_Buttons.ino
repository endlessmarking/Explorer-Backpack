#include <IRremote.h>  // Version 2.9.0

IRsend IrSender;  // Pin 3 to IR LED

const int ledPin = LED_BUILTIN;
const int button1Pin = 2;  // With 10K pull down resistor, other lead to VCC
const int button2Pin = 4;  // With 10K pull down resistor, other lead to VCC

int button1State = 0;
int button2State = 0;

const uint8_t irSignalP[] PROGMEM
= { 180, 90 /*Start bit*/, 11, 11, 11, 11, 11, 34, 11, 34/*0011 0xC of address LSB first*/, 11, 11, 11, 11, 11, 11, 11, 11/*0000*/,
        11, 34, 11, 34, 11, 11, 11, 34/*1101 0xB*/, 11, 34, 11, 34, 11, 34, 11, 34/*1111*/, 11, 11, 11, 11, 11, 11, 11,
        34/*0001 0x08 of command LSB first*/, 11, 34, 11, 11, 11, 11, 11, 11/*1000 0x01*/, 11, 34, 11, 34, 11, 34, 11,
        11/*1110 Inverted 8 of command*/, 11, 11, 11, 34, 11, 34, 11, 34/*0111 inverted 1 of command*/, 11 /*stop bit*/};

void setup() {
  Serial.begin(9600);
  
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.println(F("START " __FILE__ " from " __DATE__ "\r\nUsing library version " VERSION_IRREMOTE));
  Serial.print(F("Ready to send IR signals at pin "));
  Serial.println(IR_SEND_PIN);
}

void loop() {

  const uint8_t NEC_KHZ = 38; // 38kHz carrier frequency for the NEC protocol
  
  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);
  
  if (button1State == HIGH || button2State == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);

    Serial.println(F("Send NEC 16 bit address 0x0102, 8 bit data 0x34 with generated timing"));
    IrSender.sendNEC(0x0102, 0x34, true, 0);

    delay(1000);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
