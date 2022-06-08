#include "computations.hpp"

void concatenate_lists(vector<int> &list1, const vector<int> &list2)
{
    cout << "concatenate_lists" << endl;
    for (int item : list2)
    {
        list1.push_back(item);
    }
}

void add_zeros_to_list(vector<int> &nums, int amount_of_zeros)
{
    for (int i = 0; i < amount_of_zeros; i++)
    {
        nums.push_back(0);
    }
}

void print_all_elements_from_list(const vector<int> &list)
{
    for (int num : list)
        cout << num << endl;
}


int how_many_times(vector<string> &list, string str)
{
    int count = 0;
    for (string word : list)
    {
        if (word == str)
        {
            count++;
        }
    }
    return count;
}