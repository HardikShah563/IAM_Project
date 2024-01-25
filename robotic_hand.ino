#include <Servo.h>

int pot_pin_claw = A0;
int pot_pin_bottom = A1;
int pot_pin_joint1 = A2;
int pot_pin_joint2 = A3;

int value_claw;
int value_bottom;
int value_joint1;
int value_joint2;

Servo servo_claw;
Servo servo_bottom;
Servo servo_joint1;
Servo servo_joint2;

void setup() {
  // put your setup code here, to run once:
  servo_claw.attach(2);
  servo_bottom.attach(3);
  servo_joint1.attach(4);
  servo_joint2.attach(5);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pot_input[4];
  pot_input[1] = analogRead(pot_pin_claw);
  pot_input[2] = analogRead(pot_pin_bottom);
  pot_input[3] = analogRead(pot_pin_joint1);
  pot_input[4] = analogRead(pot_pin_joint2);

  if (pot_input[0] > 511) {
    value_claw = 1;
  } else {
    value_claw = 0;
  }

  servo_bottom.write(value_bottom);
  servo_joint1.write(value_joint1);
  servo_joint2.write(value_joint2);

  delay(5);
}
