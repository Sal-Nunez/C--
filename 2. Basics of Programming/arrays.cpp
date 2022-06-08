#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main ()
{

    double temperature_list[4] = {34.5, 27.8, 26.8, 22.0};

    temperature_list[3] = 15.4;

    // cout << temperature_list[3] << endl;

    vector<double> temperatures = {34.5, 27.8, 26.8};
    cout << temperatures.at(0) << endl;
    temperatures.at(1) = 30.7;
    temperatures.push_back(17.4);
    cout << temperatures.size() << endl;


    return 0;
}