/**
 * Copyright (c) 2019, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ArduinoUno/001
 * Blinky with delay function.
 */

#define LED_PIN (13)

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, !digitalRead(LED_PIN)); // Toggle LED pin
  delay(500); // wait 0.5s
}

