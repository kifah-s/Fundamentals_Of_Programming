#include <iostream>
#include <cmath>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

float ReadNumber()
{
    float num = 0;

    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

int MySqrt(float number)
{
    return pow(number, 0.5);
}

int main()
{
    WelcomeMessage();

    float number = 0;

    number = ReadNumber();
    cout << "My Sqrt Result: " << MySqrt(number) << endl;
    cout << "C++ Sqrt Result: " << sqrt(number) << endl;

    cout << endl
         << endl;

    return 0;
}