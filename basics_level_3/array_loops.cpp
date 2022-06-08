#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<double> temperature_list = {12.3, -4.5, 15.0, 11.7, -0.4};

    // for (int i = 0; i < temperature_list.size(); i++)
    // {
    //     double temp = temperature_list.at(i);
    //     cout << "Temperature: " << temp << endl;
    //     if (temp < 0.0) {
    //         cout << "It's Freezing!!!!" << endl;
    //     }
    // }

    for (double temp: temperature_list)
    {
        cout << "Temperature: " << temp << endl;
    }
    
}