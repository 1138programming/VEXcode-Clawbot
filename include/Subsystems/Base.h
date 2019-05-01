#ifndef SUBSYSTEMS_BASE_H
#define SUBSYSTEMS_BASE_H

#include "vex.h"
#include "Robot.h"

class Collector {
    public:
      Collector();

      //methods 
      void moveBase(int leftSpeed, int right Speed);
      void toggleBase();
      void stopCollector();        

    private:
      static vex::motor * LeftMotor;
      static vex::motor * RightMotor;
};

#endif // SUBSYSTEMS_BASE_H