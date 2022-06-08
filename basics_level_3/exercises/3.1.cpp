#include <iostream>
#include <string>
#include <vector>

using namespace std;

int max_value(vector<int> nums)
{
    int max = 0;
    for(int num: nums) if (num > max) max = num;
    return max;
}

int main()
{

    vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};

    vector<int> nums = {};

    // cout << "Give me 5 numbers..." << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     int num;
    //     cout << "Number " << i + 1 << ":" << endl;
    //     cin >> num;
    //     nums.push_back(num);
    // }

    cout << "Give me as many numbers as you want enter 0 when done" << endl;

    int num = 1;
    while(num != 0)
    {
        cin >> num;
        nums.push_back(num);
    }
    

    cout << "Biggest value you entered is : " << max_value(nums) << endl;

    return 0;
}