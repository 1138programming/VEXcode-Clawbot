#ifndef ROBOT_H
#define ROBOT_H

#include "vex.h"

class Robot {
  public:
    Robot();
    static Robot* getInstance;
    static vex::motor* LeftMotor;
    static vex::motor* RightMotor;
    static vex::motor* ArmMotor;
    static vex::motor* ClawMotor;
  
  private:
    static Robot* instance;
};

#endif // ROBOT_H