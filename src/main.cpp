#include "vex.h"
#include "Robot.h"

using namespace vex;

vex::brain Brain;
vex::competition Competition;


void pre_auton( void ) {
  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
  
}

void autonomous( void ) {

}

void usercontrol( void ) {
  while (1) {
    // Display that the program has started to the screen.
    Brain.Screen.print("Tank Drive Program Started");
    
    // Set the speed of the arm and claw.
    /*int armSpeedPCT  = 200;
    int clawSpeedPCT = 200;*/

    while(1) {
      //Drive Control
      //Set the left and right motor to spin forward using the controller's Axis positions as the velocity value.
      Robot::base->moveBase(Robot::MainController->Axis3.position(), Robot::MainController->Axis2.position());
    
      // Arm Control
      // If button up is pressed...
      /*if(Robot::MainController->ButtonUp.pressing()) { 
        //...Spin the arm motor forward.
        Robot::ArmMotor->spin(vex::directionType::fwd, armSpeedPCT, vex::velocityUnits::pct);
      }
      // else If the down button is pressed...
      else if(Robot::MainController->ButtonDown.pressing()) { 
        //...Spin the arm motor backward.
        Robot::ArmMotor->spin(vex::directionType::rev, armSpeedPCT, vex::velocityUnits::pct);
      }
      // else If neither up or down button is pressed...
      else { 
        //...Stop the arm motor.
        Robot::ArmMotor->stop(vex::brakeType::brake);
      }
    
      // Claw Control
      // If the A button is pressed...
      if(Robot::MainController->ButtonA.pressing()) { 
        //...Spin the claw motor forward.
        Robot::ClawMotor->spin(vex::directionType::fwd, clawSpeedPCT, vex::velocityUnits::pct);
      }
      // else If the Y button is pressed...
      else if(Robot::MainController->ButtonY.pressing()) { 
        //...Spin the claw motor backward.
        Robot::ClawMotor->spin(vex::directionType::rev, clawSpeedPCT, vex::velocityUnits::pct);
      }
      // else If neither the A or Y button is pressed...
      else {
        //...Stop the claw motor.
        Robot::ClawMotor->stop(vex::brakeType::brake);        
      }*/

    // Sleep the task for a short amount of time to prevent wasted resources.
    vex::task::sleep(20);
    }
  }
}

int main() {
    Competition.autonomous( autonomous );
    Competition.drivercontrol( usercontrol );
    pre_auton();                   
    while(1) {
      vex::task::sleep(100);
    }    
       
}