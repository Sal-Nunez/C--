// iostream stands for input/output stream
#include <iostream>
#include <string>

using namespace std;

// Every program needs main, the first thing to run
int main()
{
    // Variables
    int num = 4;
    
    // initialization
    num = 5;
    // int a = 4;

    // assign multiple variables
    int num1 = 5, num2 = 0, num3 = 10;

    // int -2billion to 2 billion, 4 BYTES
    // short -32768 to 32767, 2 BYTES
    short smallNum = 300;
    cout << smallNum << endl;

    // float, 4 BYTES, numbers up to 38 zeros
    // double, 8 Bytes, numbers up to 308 zeros
    float decimal1 = 5.12;
    double decimal2 = 5.12;

    // char
    char a = 'a';
    // string
    string name = "Sal";
    string str = "Hello ";
    string combinedStrings = str + name;
    cout << combinedStrings << endl;

    cout << "num1: " << num1 << " address: " << &num1 << endl;
    cout << "num2: " << num2 << " address: " << &num2<< endl;
    cout << "num3: " << num3 << " address: " << &num3<< endl;

    // boolean true or false, false is always 0, anything else is true
    bool isIt = 0;
    cout << isIt << endl;

    // cout stands for console output
    cout << num << endl;
    cout << &num << endl;

    num = 10;

    cout << num << endl;
    cout << &num;
    // can also call this everytime instead of using namespace.
    // std::cout << "this is test";

    // for unsinged short int, 0 to 65535
    unsigned short smallBig = 65000;
    cout << smallBig << endl;

    const int seconds_per_hour = 3600;
    const double max_allowed_temperature = 76.8;

    

    return 0;
}