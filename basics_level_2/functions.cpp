#include <iostream>
#include <string>

using namespace std;

namespace abc
{

}

// This is a comment, it will not be executed

// Say hello to user, with user name and age
void say_hello(string user_name, int age)
{

    cout << "Hello " << user_name << " You are " << age << " years old." << endl;
}

// Multiply given number by 3
int triple_number(int num)
{
    return num * 3;
}

// Print number multiplied by 3
void print_triple_number(int num)
{
    cout << triple_number(num) << endl;
}

double convert_to_farenheit(double temp)
{
    temp  = temp * 1.8 + 32.0;
    return temp;
}

void print_farenheit(double temp)
{
    double result = convert_to_farenheit(temp);
    cout << result << endl;
}

int main()
{
    string username;
    int age;
    cin >> username;
    cin >> age;
    for (size_t i = 0; i < 3; i++)
    {
        say_hello(username, age);
    }
    print_triple_number(3);

    print_farenheit(30.5);

    return 0;
}