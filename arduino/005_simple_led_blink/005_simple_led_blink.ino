/**
 * Copyright (c) 2020, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * Arduino/005
 * Blinking LED with SimpleLED class.
 */

#include <stdint.h>

/**
 * The instance of this class can control single LED.
 * - on, off, toggle (any digital pin)
 * - brightness (only PWM pins: 3, 5, 6, 9, 10, 11)
 */
class SimpleLed {
public:
  SimpleLed(uint8_t pin): pin_(pin) {
    pinMode(pin, OUTPUT); 
  }
  void on(void) {
    digitalWrite(pin_, HIGH);
  }
  void off(void) {
    digitalWrite(pin_, LOW);
  }
  void toggle(void) {
    digitalWrite(pin_, !digitalRead(pin_));
  }
  void setBrightness(uint8_t value) {
    analogWrite(pin_, value);
  }
private:
  uint8_t pin_;
}; /* End of class SimpleLed */

SimpleLed led(13);

void setup() {
  // do nothing
}

void loop() {
  while (1) {
    led.toggle();
    delay(500); // wait 0.5s
  }
}

