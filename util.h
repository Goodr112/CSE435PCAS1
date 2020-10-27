#pragma once

#include <iostream>
#include "Pedestrian.h"
#include "Vehicle.h"

using namespace std;

double checkForCollisions(double ped_x, double ped_y,
	double ped_speed, double veh_x, double veh_y,
	double veh_speed);

double moveStopScenario(double ped_x_start, double ped_y_start, 
	double ped_x_end, double ped_y_end, double ped_speed);

double stopMoveScenario(double ped_x_start, double ped_y_start,
	double delay_time, double final_speed);

double staticScenario(double x, double y);

double timeLost(double time_activated, double speed,
	double distance, double time_stopped);

