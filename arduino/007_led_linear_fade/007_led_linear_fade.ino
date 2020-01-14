/**
 * Copyright (c) 2020, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * Arduino/005
 * Example of LED linear fade (LED connected with resistor in series to pin 11)
 */

#include <stdint.h>

/**
 * The instance of this class can control single LED.
 * - on, off, toggle (any digital pin)
 * - brightness (only PWM pins; i.e. for Arduino Uno: 3, 5, 6, 9, 10, 11)
 */
class BasicLed {
public:
  BasicLed(uint8_t pin): pin_(pin) {
    pinMode(pin, OUTPUT); 
  }
  /* Light the LED up */
  void on(void) {
    digitalWrite(pin_, HIGH);
  }
  /* Turn the LED off */
  void off(void) {
    digitalWrite(pin_, LOW);
  }
  /* Toogle LED on/off */
  void toggle(void) {
    digitalWrite(pin_, !digitalRead(pin_));
  }
  /* Set LED brightness from range <0, 255> */
  void setBrightness(uint8_t value) {
    analogWrite(pin_, value);
  }
private:
  uint8_t pin_;
}; /* End of class BasicLed */

class LinearFade {
public:
  LinearFade(const BasicLed& led, uint8_t delay_ms = 5):
    led_(led), delay_ms_(delay_ms) {}
  /* Fade-in */
  void in(void) {
    for (int16_t i = 0; i < 256; ++i) {
      led_.setBrightness(i);
      delay(delay_ms_);
    }
  }
  /* Fade-out */
  void out(void) {
    for (int16_t i = 255; i > 0; --i) {
      led_.setBrightness(i);
      delay(delay_ms_);
    }
  }
private:
  const BasicLed led_;
  uint8_t delay_ms_;
}; /* End of class LinearFade */

BasicLed led(11);
LinearFade fade(led);

void setup() {
  // do nothing
}

void loop() {
    fade.in();
    fade.out();
}

