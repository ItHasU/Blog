#include <Arduino.h>

const int LED = D0;    // GPIO 16

void setup() {
  // Init LED pin as an output
  pinMode(LED, OUTPUT);

  // Welcome message
  Serial.begin(9600);
  Serial.print("Hello world");
}

void loop() {
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000);
}
