#include "Robot.hpp"

Robot::Robot(string name, int version_number)
        : name(name), version_number(version_number), internal_temperature(30.0)
    {
    }

    void Robot::say_hi()
    {
        cout << "Hello, my name is " << name << ", ready to help!" << endl;
    }

    void Robot::init_hardware()
    {
        cout << "Initialize Hardware" << endl;
    }

    void Robot::print_info()
    {
        say_hi();
        cout << "Version number: " << version_number << endl;
        cout << "Internal temperature: " << internal_temperature << "°C" << endl;
    }

    int Robot::get_version_number()
    {
        return this->version_number;
    }