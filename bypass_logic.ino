// Smart Hardware Bypass - Relay Frequency Control
// Built by Aliasgar Meman

const int relayPin = 7; // Relay IN pin connected to Arduino Pin 7

void setup() {
  pinMode(relayPin, OUTPUT);
}

void loop() {
  // Automatic Custom Pulse Pattern
  for(int i = 0; i < 3; i++) {
    digitalWrite(relayPin, LOW);  // Horn ON
    delay(150);                   // Duration 150ms
    digitalWrite(relayPin, HIGH); // Horn OFF
    delay(100);                   // Gap 100ms
  }
  
  delay(1000); // 1 Second gap
  
  digitalWrite(relayPin, LOW);  // Long Pulse ON
  delay(600);                   // Duration 600ms
  digitalWrite(relayPin, HIGH); // Horn OFF
  
  delay(2000); // 2 Second gap before looping again
}

