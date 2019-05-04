#ifndef ROBOT_H
#define ROBOT_H

#include "vex.h"
#include "Subsystems/Base.h"

class Robot {
  public:
    Robot();
    static Robot* getInstance;
    static Base* base;
    static vex::controller* MainController;
  
  private:
    static Robot* instance;
};

#endif // ROBOT_H