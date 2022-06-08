#ifndef COMPUTATIONS_H
#define COMPUTATIONS_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_all_elements_from_list(const vector<int> &list);
void add_zeros_to_list(vector<int> &nums, int amount_of_zeros);
// void concatenate_lists(vector<int> &list1, const vector<int> list2);
void concatenate_lists(vector<int> &list, const vector<int> &list2);
int how_many_times(vector<string> &list, string str);

#endif