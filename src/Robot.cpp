#include "robot.h"

vex::motor* Robot::LeftMotor = new vex::motor(vex::PORT1, false);
vex::motor* Robot::RightMotor = new vex::motor(vex::PORT10, true);
vex::motor* Robot::ArmMotor = new vex::motor(vex::PORT8, false);
vex::motor* Robot::ClawMotor = new vex::motor(vex::PORT3, false);