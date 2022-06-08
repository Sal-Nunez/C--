// #include "Robot.hpp"
#include "RoboticArm.hpp"



int main()
{
    Robot robot001("Mark Zuckerberg", 1);
    Robot robot002("R2D2", 2);
    robot001.print_info();
    robot002.print_info();
    cout << robot001.get_version_number() << endl;

    RoboticArm robot_arm_001("Bob", 3, 300);
    
    robot_arm_001.print_info();
    robot_arm_001.pick_up_object(1.0, 2.0);
    robot_arm_001.place_object(4.0, 5.0);

    return 0;
}