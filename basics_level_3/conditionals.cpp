#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << boolalpha;
    // cout << ((1 == 1) || (1 == 2)) << endl;

    int user_age = 17;

    if (user_age >= 18)
    {
        cout << "User is older than 18 years old" << endl;
    }
    else
    {
        cout << "User is NOT older than 18 years old" << endl;
    }
    
    
    
    return 0;
}