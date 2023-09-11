#include "vex.h"

using namespace vex;


competition Competition;

void pre_auton(void) {
  vexcodeInit();
}

void autonomous(void) {

}


void usercontrol(void) {
  FL.stop(coast);
  ML.stop(coast);
  BL.stop(coast);
  FR.stop(coast);
  MR.stop(coast);
  BR.stop(coast);
  while (true) {
    FL.spin(fwd, (Controller1.Axis3.value() + Controller1.Axis1.value()*0.75), pct);
    ML.spin(fwd, (Controller1.Axis3.value() + Controller1.Axis1.value()*0.75), pct);
    BL.spin(fwd, (Controller1.Axis3.value() + Controller1.Axis1.value()*0.75), pct);
    FR.spin(fwd, (Controller1.Axis3.value() - Controller1.Axis1.value()*0.75), pct);
    MR.spin(fwd, (Controller1.Axis3.value() - Controller1.Axis1.value()*0.75), pct);
    BR.spin(fwd, (Controller1.Axis3.value() - Controller1.Axis1.value()*0.75), pct);
    wait(10, msec);
  }
}


int main() {
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  pre_auton();

  while (true) {
    wait(10, msec);
  }
}
