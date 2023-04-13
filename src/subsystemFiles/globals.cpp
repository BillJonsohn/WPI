#include "main.h"

//Motors
pros::Controller master(CONTROLLER_MASTER);

bool flywheelOn = true;
bool longShot = false;
double endgameTimer = 0;
bool blooperOn = true;
bool basketUp = true;

void wait(double secs){
  pros::delay(secs);
}
