#include <iostream>
#include <string>

using namespace std;

int main()
{
    string user_name;

    cout << "What is your username?" << endl;
    cin >> user_name;

    cout << user_name << endl;

    cin >> user_name;

    return 0;
}