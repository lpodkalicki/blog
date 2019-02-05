/**
 * Copyright (c) 2019, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ArduinoUno/003
 * Blinky with Timer1 COMPA.
 */

#define LED_PIN     (13)

void setup() {
  pinMode(LED_PIN, OUTPUT); // set LED pin as output
  TCCR1A = 0; // clear register
  TCCR1B = _BV(WGM12); // set Timer1 to CTC mode
  TCCR1B |= _BV(CS12)|_BV(CS10); // set Timer1 prescaler to 1024
  TIMSK1 |= _BV(OCIE1A); // enable Timer1 COMPA interrupt
  OCR1A = 7812; // set value for Fx=1Hz, OCRnx = (16Mhz/(Fx * 2 * 1024) + 1)
  interrupts(); // enable global interrupts
}

void loop() {
  // do nothing
}

ISR(TIMER1_COMPA_vect) {
  digitalWrite(LED_PIN, !digitalRead(LED_PIN)); // Toggle LED pin
}

