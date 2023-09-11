/*vex-vision-config:begin*/
#include "vex.h"
vex::vision::signature GREEN_BALL = vex::vision::signature (1, -5263, -4649, -4956, -4761, -3815, -4288, 6.6, 0);
vex::vision::signature BLUE_BALL = vex::vision::signature (2, -3585, -2895, -3240, 10015, 11457, 10736, 4.8, 0);
vex::vision::signature RED_BALL = vex::vision::signature (3, 7969, 9521, 8746, -705, -147, -426, 3.3, 0);
vex::vision::signature YELLOW_CAP = vex::vision::signature (4, 605, 1293, 949, -4513, -4075, -4294, 5.7, 0);
vex::vision::signature SIG_5 = vex::vision::signature (5, 0, 0, 0, 0, 0, 0, 3, 0);
vex::vision::signature SIG_6 = vex::vision::signature (6, 0, 0, 0, 0, 0, 0, 3, 0);
vex::vision::signature SIG_7 = vex::vision::signature (7, 0, 0, 0, 0, 0, 0, 3, 0);
vex::vision Vision1 = vex::vision (vex::PORT9, 50, GREEN_BALL, BLUE_BALL, RED_BALL, YELLOW_CAP, SIG_5, SIG_6, SIG_7);
/*vex-vision-config:end*/