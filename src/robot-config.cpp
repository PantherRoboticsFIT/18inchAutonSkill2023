#include "vex.h"
#include "Vision.h"

using namespace vex;


// A global instance of brain used for printing to the V5 brain screen
brain Brain;
controller Controller1 = controller(primary);

vision VisionSensor(PORT9);

motor FL = motor(PORT4, ratio6_1, true);
motor ML = motor(PORT5, ratio6_1, false);
motor BL = motor(PORT6, ratio6_1, true);
motor FR = motor(PORT1, ratio6_1, false);
motor MR = motor(PORT2, ratio6_1, true);
motor BR = motor(PORT3, ratio6_1, false);


/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void) {
  // Nothing to initialize
}