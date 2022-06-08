#include "computations.hpp"

int main()
{
    // vector<int> nums = {5, 6, 8};
    // cout << "Size of nums: " << nums.size() << endl;
    // add_zeros_to_list(nums, 4);
    // cout << "Size of nums: " << nums.size() << endl;
    // print_all_elements_from_list(nums);

    vector<int> list1 = {5, 6, 8};
    vector<int> list2 = {9, 22, 67};
    concatenate_lists(list1, list2);
    
    cout << list1.size() << endl;

    vector<string> list_of_strings = {"hello", "goodbye", "hello", "johnny"};
    cout << how_many_times(list_of_strings, "hello") << endl;


    return 0;
}