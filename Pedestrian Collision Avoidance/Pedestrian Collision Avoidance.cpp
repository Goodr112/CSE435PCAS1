// Pedestrian Collision Avoidance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Pedestrian.h"
#include "Vehicle.h"
#include "util.h"

using namespace std;

float CheckCollisions(float ped_x, float ped_y, float ped_vel, float v_x, float v_y, float v_velocity);
float TimeLost(float init_time, float init_vel, float dist, float end_time);
/** Scenario functions */
float MoveThenStop(float ped_x, float ped_y, float end_x, float end_y, float ped_vel);
float StaticThenMove(float ped_x, float ped_y, float delay, float final_vel);
float Static(float ped_x, float ped_y);

int main()
{
    //Run scenarios

    MoveThenStop(35, -7, 35, 0, 10);
    MoveThenStop(35, -7, 35, -2, 10);
    MoveThenStop(35, -7, 35, -3, 10);
    MoveThenStop(35, -7, 35, -5, 10);

    StaticThenMove(35, 0, 1.5, 10);
    StaticThenMove(35, -2, 1.8, 10);
    StaticThenMove(35, -4, 1.1, 10);

    Static(35, 0);
    Static(35, -2);
    Static(35, -4);
}

/** This function runs calculations to determine if the pedestrian and vehicle are within specified minimum
* distance of each other and if they are what minimum deceleration is needed to avoid collision
* param: ped_x The pedestrian's x position
* param: ped_y The pedestrian's y position
* param: ped_vel The pedestrian's velocity
* param: v_x The vehicle's x position
* param: v_y The vehicle's y position
* param: v_velocity The vehicle's velocity
* return: returns 0 if collision is not a possibitily, otherwise returns minimum deceleration value needed
*           to avoid collision*/
float CheckCollisions(float ped_x, float ped_y, float ped_vel, float v_x, float v_y, float v_velocity)
{

}

/** This function carries out a scenario in which a pedestrian moves and then stops in front of a vehicle
* param: ped_x The pedestrian's starting x position
* param: ped_y The pedestrian's startying y position
* param: end_x The pedestrian's ending x position
* param: end_y The pedestrians ending y position
* param: ped_vel The pedestrian's velocity
* return: The time lost due to the avoidance manuever */
float MoveThenStop(float ped_x, float ped_y, float end_x, float end_y, float ped_vel)
{
    //Create pedestrian object

    //Create vehicle object

    //loop that updates vehicles positon and pedestrians every 100ms, calls Check collision function
    // and finishe when both pedestrian and vehicle are stopped

    //return lost time due to avoidance manuever
}

/** This function carries out a scenario in which a pedestrian is stopped in front of a moving vehicle
* and then begins to move
* param: ped_x The pedestrian's x position
* param: ped_y The pedestrian's y position
* param: delay The time delay before the pedestrian begins moving
* param: final_vel The final velocity of the pedestrian 
* return: Time lost due to avoidance manuever */
float StaticThenMove(float ped_x, float ped_y, float delay, float final_vel)
{
    //Create pedestrian object

    //Create vehicle object

    //loop that updates vehicle and pedestrian's location every 100ms and runs check collision function
    // and ends when the vehicle has passed the pedestrians x position

    //return lost time due to avoidance manuever
}

/** This function carries out a scenario in which a pedestrian is stopped in front of a moving vehicle
* param: ped_x The pedestrian's x position
* param: ped_y The pedestrian's y position
* return: The time lost due to avoidance manuever
*/
float Static(float ped_x, float ped_y)
{
    //Create pedestrian object

    //Create vehicle object

    //loop that updates vehicle position every 100 ms and runs check collison function until vehicle successfully stops

    //return lost time due to avoidance manuever
}

/** This function calculates the time lost due to an avoidance manuever
* param: init_time The time an avoidance maneuver was initiated
* param: init_vel The velocity of the car when avoidance maneuver initiated
* param: dist The distance traveled from initation of avoidance manuever to stop or to returning to 
*           steady state velocity
* param: end_time The time vehicle was stopped or when it returned to steady_state velocity 
* return: the time lost due to avoidance manuever
*/
float TimeLost(float init_time, float init_vel, float dist, float end_time)
{

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
