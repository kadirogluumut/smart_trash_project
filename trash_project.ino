#include <Servo.h>

#define TRIG_PIN A0
#define ECHO_PIN A1
#define SERVO_PIN 2

Servo lidServo;

const int openDistance = 20;   // Distance in cm
const int closedAngle = 0;     // Lid closed position
const int openAngle = 90;      // Lid open position
const int openTime = 3000;     // Lid stays open for 3 seconds

long duration;
int distance;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  lidServo.attach(SERVO_PIN);
  lidServo.write(closedAngle);

  Serial.begin(9600);
}

void loop() {
  distance = readDistance();

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 0 && distance <= openDistance) {
    lidServo.write(openAngle);
    delay(openTime);
    lidServo.write(closedAngle);
    delay(500);
  }

  delay(100);
}

int readDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH, 30000);

  if (duration == 0) {
    return -1;
  }

  int cm = duration * 0.034 / 2;
  return cm;
}