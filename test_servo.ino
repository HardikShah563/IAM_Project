#include <Servo.h>

Servo myservo;

int potpin = 0;
int val = 90;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(8);
}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(0);
  delay(200);

  myservo.write(180);
  delay(200);

  myservo.write(val);
  delay(200);
}
