/**
 * Copyright (c) 2019, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ArduinoUno/002
 * Blinky with Timer1 OVF.
 */

#define LED_PIN     (13)
#define TIMER_TCNT  (57723) // 65536 - 16MHz/1024/2

void setup() {
  pinMode(LED_PIN, OUTPUT); // set LED pin as output
  TCCR1A = 0;
  TCCR1B = _BV(CS12)|_BV(CS10); // set Timer1 prescaler to 1024
  TIMSK1 |= _BV(TOIE1); // enable Timer1 overflow interrupt
  TCNT1 = TIMER_TCNT; // reload timer counter
  interrupts(); // enable global interrupts
}

void loop() {
  // do nothing
}

ISR(TIMER1_OVF_vect) {
  TCNT1 = TIMER_TCNT; // reload timer counter
  digitalWrite(LED_PIN, !digitalRead(LED_PIN)); // Toggle LED pin
}

