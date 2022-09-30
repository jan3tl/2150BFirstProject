/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       janetlim                                                  */
/*    Created:      Fri Sep 23 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// FrontRightMotor      motor         11              
// FrontLeftMotor       motor         20              
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;
competition Competition;

void userMethod() {
  FrontLeftMotor.spin(forward);
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  // Competition.drivercontrol();
  Competition.autonomous(userMethod);
  //Controller1.ButtonL2.pressed();
  while(true)
  {
    FrontLeftMotor.spin(forward);
    
    FrontLeftMotor.setVelocity(Controller1.Axis3.position(percent),percent);
    FrontLeftMotor.setVelocity(Controller1.Axis4.position(percent),percent);
    FrontRightMotor.setVelocity(Controller1.Axis2.position(percent),percent);
    FrontRightMotor.setVelocity(Controller1.Axis1.position(percent),percent);

    if (Controller1.ButtonA.pressing())
    {

    }

    


    

  }
  
}