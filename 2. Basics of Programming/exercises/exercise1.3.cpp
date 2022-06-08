#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

int main ()
{
    vector<double> nums = {23.5, 100.5, 23.75, 24.25};

    cout << "Average: "
    << accumulate(nums.begin(), nums.end(), 0.0)/nums.size() << endl;

    return 0;
}