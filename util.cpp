#include "util.h"

#include <iostream>

using namespace std;

double checkForCollisions(double ped_x, double ped_y,
	double ped_speed, double veh_x, double veh_y,
	double veh_speed) {
	//run every 100ms
	//return minimum acceleration needed to avoid collision
	//return 0 otherwise
}

double moveStopScenario(double ped_x_start, double ped_y_start,
	double ped_x_end, double ped_y_end, double ped_speed) {
	//create pedestrian with parameters
	//create vehicle object
	//update position of the vehicle and pedestrian based on their
	//velocity
	//run every 100ms
	//return lost time due to avoidance maneuver
}

double stopMoveScenario(double ped_x_start, double ped_y_start,
	double delay_time, double final_speed) {
	//create pedestrian with parameters
	//create vehicle object
	//update position of vehicle and pedestrian based on velocity
	//run check collision every 100ms
	//return lost time due to avoidance maneuver
}

double staticScenario(double x, double y) {
	//create pedestrian with parameters
	//create vehicle
	//update position of vehicle and pedestrian
	//run check collision every 100ms
	//return lost time due to avoidance maneuver
}

double timeLost(double time_activated, double speed,
	double distance, double time_stopped) {
	//calcualte time lost
	//return time lost due to avoidance maneuver
}