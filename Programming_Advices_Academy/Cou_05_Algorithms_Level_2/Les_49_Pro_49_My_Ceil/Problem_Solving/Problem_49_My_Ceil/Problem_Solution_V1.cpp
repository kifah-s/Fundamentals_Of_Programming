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

int MyCeil(float number)
{
    if (number > 0)
    {
        return int(number) + 1;
    }
    else
    {
        return int(number);
    }
}

int main()
{
    WelcomeMessage();

    float number = 0;

    number = ReadNumber();
    cout << "My Ceil Result: " << MyCeil(number) << endl;
    cout << "C++ Ceil Result: " << ceil(number) << endl;

    cout << endl
         << endl;

    return 0;
}