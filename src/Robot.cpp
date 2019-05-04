#include "Robot.h"

Base* Robot::base = 0;

Robot::Robot() {
  base = new Base();
  MainController = new vex::controller();
}