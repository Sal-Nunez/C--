#include "RoboticArm.hpp"

RoboticArm::RoboticArm(string name, int version_number, double reach)
: Robot(name, version_number), reach(reach)
{
}

void RoboticArm::pick_up_object(double x, double y)
{
    cout << "pick_up_object" << endl;
}

void RoboticArm::place_object(double x, double y)
{
    cout << "place_object" << endl;
}