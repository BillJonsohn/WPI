#include "main.h"
#include "pros/motors.h"

pros::Motor intake1(11, true);
pros::Motor intake2(12, true);
pros::Motor flywheel1(4, pros::E_MOTOR_GEARSET_06, true);
pros::Motor flywheel2(10,pros::E_MOTOR_GEARSET_06);
pros::ADIDigitalOut endgame('B');
pros::ADIDigitalOut blooper('H');
pros::ADIDigitalOut basket('A');

void forward(){
  intake1.move_voltage(12000);
  intake2.move_voltage(12000);
}

void outake(){
  intake1.move_voltage(-12000);
  intake2.move_voltage(-12000);
}

void feedDiscs(int speed){
  intake1.move(speed);
  intake2.move(speed);
}

void feedDiscsVolt(int speed){
  intake1.move_voltage(speed);
  intake2.move_voltage(speed);
}

void stopIntake(){
  intake1.move(0);
  intake2.move(0);
}

void flywheelGo(int speed){
  flywheel1.move(speed);
  flywheel2.move(speed);
}

void stopFlying(){
  flywheel1.set_brake_mode(MOTOR_BRAKE_COAST);  
  flywheel1.move(0);
  flywheel2.set_brake_mode(MOTOR_BRAKE_COAST);  
  flywheel2.move(0);
}

void endgameGo(){
  endgame.set_value(true);
}

void blooperUp(bool tf){
  blooper.set_value(tf);
}

void basketGoUp(bool tf){
  basket.set_value(tf);
}