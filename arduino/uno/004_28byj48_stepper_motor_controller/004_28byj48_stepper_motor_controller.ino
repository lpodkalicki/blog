
/**
 * Copyright (c) 2019, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ArduinoUno/004
 * Example of stepper motor (28BYJ-48) controller. 
 */
 
class StepperMotor {
  public:
    StepperMotor(uint8_t _in1, uint8_t _in2, uint8_t _in3, uint8_t _in4):
      in1(_in1), in2(_in2), in3(_in3), in4(_in4) {
      pinMode(in1, OUTPUT);
      pinMode(in2, OUTPUT);
      pinMode(in3, OUTPUT);
      pinMode(in4, OUTPUT);
      dir = 1;
      seq = 0;
    }

    /* Move one step */
    void move(void) {
      seq = (seq + (dir?1:-1)) & 7;

      switch (seq) {
      /* Pattern for 8 microsteps: A-AB-B-BC-C-CD-D-DA */
      /*      [        A        ][         B        ][         C        ][         D        ] */
      case 0: digitalWrite(in1,1);digitalWrite(in2,0);digitalWrite(in3,0);digitalWrite(in4,0);break;
      case 1: digitalWrite(in1,1);digitalWrite(in2,1);digitalWrite(in3,0);digitalWrite(in4,0);break;
      case 2: digitalWrite(in1,0);digitalWrite(in2,1);digitalWrite(in3,0);digitalWrite(in4,0);break;      
      case 3: digitalWrite(in1,0);digitalWrite(in2,1);digitalWrite(in3,1);digitalWrite(in4,0);break;
      case 4: digitalWrite(in1,0);digitalWrite(in2,0);digitalWrite(in3,1);digitalWrite(in4,0);break;
      case 5: digitalWrite(in1,0);digitalWrite(in2,0);digitalWrite(in3,1);digitalWrite(in4,1);break;      
      case 6: digitalWrite(in1,0);digitalWrite(in2,0);digitalWrite(in3,0);digitalWrite(in4,1);break;      
      case 7: digitalWrite(in1,1);digitalWrite(in2,0);digitalWrite(in3,0);digitalWrite(in4,1);break;
      }
    }

    /* Set direction. 
       1 - clock wise
       0 - counter clock wise
    */
    void setDir(uint8_t _dir) {
      dir = !!_dir;
    }
  
  private:
    uint8_t in1;
    uint8_t in2;
    uint8_t in3;
    uint8_t in4;
    uint8_t dir;
    uint8_t seq;
};

StepperMotor stepper(0, 1, 2, 3);

void setup() {
  // do nothing
}

void loop() {
  uint8_t dir = 1;
  while (1) {
    /* Do full turn */
    for (uint16_t i = 0; i < 4096; ++i) {
      stepper.move();
      delay(1); // max 100Hz (1ms)
    }
    /* Change direction */
    stepper.setDir(dir^=1);
  }
}
