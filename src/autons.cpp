#include "main.h"


const int DRIVE_SPEED = 70; // This is 110/127 (around 87% of max speed).  We don't suggest making this 127.
                             // If this is 127 and the robot tries to heading correct, it's only correcting by
                             // making one side slower.  When this is 87%, it's correcting by making one side
                             // faster and one side slower, giving better heading correction.
const int TURN_SPEED  = 70;
const int SWING_SPEED = 90;



///
// Constants
///

// It's best practice to tune constants when the robot is empty and with heavier game objects, or with lifts up vs down.
// If the objects are light or the cog doesn't change much, then there isn't a concern here.

void default_constants() {
  chassis.set_slew_min_power(80, 80);
  chassis.set_slew_distance(7, 7);
  chassis.set_pid_constants(&chassis.headingPID, 11, 0, 20, 0);
  chassis.set_pid_constants(&chassis.forward_drivePID, 0.45, 0, 5, 0);
  chassis.set_pid_constants(&chassis.backward_drivePID, 0.45, 0, 5, 0);
  chassis.set_pid_constants(&chassis.turnPID, 4, 0.003, 35, 15);
  chassis.set_pid_constants(&chassis.swingPID, 7, 0, 45, 0);
}

void exit_condition_defaults() {
  chassis.set_exit_condition(chassis.turn_exit, 40, 4, 500, 7, 500, 500);//100, 3, 500, 7, 500, 500
  chassis.set_exit_condition(chassis.swing_exit, 80, 4, 500, 7, 500, 500);//100
  chassis.set_exit_condition(chassis.drive_exit, 20, 60, 300, 150, 500, 500);//80, 50, 300, 150, 500, 500
}

void skills_auton(){


}

void right_auton(){


}

void left_auton(){
 

}


void awp_auton(){
  

}


