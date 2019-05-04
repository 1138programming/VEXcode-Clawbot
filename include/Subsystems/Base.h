#ifndef SUBSYSTEMS_BASE_H
#define SUBSYSTEMS_BASE_H

#include "vex.h"
#include "Robot.h"

class Base {
  private:
  
  public:
    //methods 
    void moveBase(int leftSpeed, int rightSpeed);
    void toggleBase();
    void stopCollector();
    static vex::motor* LeftMotor;
    static vex::motor* RightMotor;
    Base();
};

#endif // SUBSYSTEMS_BASE_H