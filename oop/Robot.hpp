#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <string>

using namespace std;

class Robot
{
private:
    string name;
    int version_number;
    double internal_temperature;

public:
    Robot(string name, int version_number);

    void say_hi();

    void init_hardware();

    void print_info();

    int get_version_number();

};

#endif