#include "Subsystems/Base.h"

Base::Base() {
  vex::motor LeftMotor = vex::motor(vex::PORT1, false);
  vex::motor RightMotor = vex::motor(vex::PORT10, true);
}

void moveBase(int leftSpeed, int rightSpeed) {
  Base::LeftMotor->spin(vex::directionType::fwd, leftSpeed, vex::velocityUnits::pct);
  Base::RightMotor->spin(vex::directionType::fwd, rightSpeed, vex::velocityUnits::pct);
}