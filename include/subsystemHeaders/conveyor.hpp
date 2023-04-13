#include "main.h"

extern pros::Motor intake1;
extern pros::Motor intake2;
extern pros::Motor flywheel1;
extern pros::Motor flywheel2;
extern pros::ADIDigitalOut endgame;
extern pros::ADIDigitalOut blooper;
extern pros::ADIDigitalOut basket;

void deployTask();
void forward();
void outake();
void feedDiscs(int);
void feedDiscsVolt(int);
void stopIntake();
void flywheelGo(int);
void stopFlying();
void endgameGo();
void blooperUp(bool);
void basketGoUp(bool);