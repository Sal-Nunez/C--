#ifndef RoboticArm_H
#define RoboticArm_H

#include "Robot.hpp"
#include <iostream>
#include <string>

using namespace std;

class RoboticArm: public Robot
{
private:
    double reach;
public:
    RoboticArm(string name, int version_number, double reach);

    void pick_up_object(double x, double y);
    void place_object(double x, double y);

};


#endif