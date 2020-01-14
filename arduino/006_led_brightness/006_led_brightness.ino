/**
 * Copyright (c) 2020, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * Arduino/006
 * Control LED brightness (LED connected with resistor in series to pin 11)
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

BasicLed led(11);

void setup() {
  // do nothing
}

void loop() {
    led.setBrightness(10); // 10/255 ~= 4%
}

