/**
 * Copyright (c) 2020, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * Arduino/005
 * Example of LED logarithmic fade (LED connected with resistor in series to pin 11)
 */

#include <stdint.h>
#include <math.h>

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

class LogarithmicFade {
public:
  LogarithmicFade(const BasicLed& led, uint16_t extra_delay_us = 3000) : 
    led_(led), extra_delay_us_(extra_delay_us) {}
  /* fade-in */
  void in(void) {
    for (int16_t i = 0; i < 255; ++i) {
      led_.setBrightness(i);
      sleep(i);
    }  
  }
  /* fade-out */
  void out(void) {
    for (int16_t i = 255; i >= 0; --i) {
      led_.setBrightness(i);
      sleep(i);
    }
  }
private:
  BasicLed led_;
  uint16_t extra_delay_us_;
  
  void sleep(uint8_t i) {
    delayMicroseconds((uint16_t)(log(1. / (i + 1)) + 5.) * 1000);
    delayMicroseconds(extra_delay_us_);
  }
}; /* End of class LogarithmicFade */

BasicLed led(11);
LogarithmicFade fade(led);

void setup() {
  // do nothing
}

void loop() {
    fade.in();
    fade.out();
}

