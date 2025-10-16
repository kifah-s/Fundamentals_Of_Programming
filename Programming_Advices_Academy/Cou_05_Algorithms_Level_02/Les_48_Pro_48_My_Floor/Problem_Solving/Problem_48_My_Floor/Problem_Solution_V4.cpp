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

int MyFloor(float number)
{
    if (number > 0)
    {
        return int(number);
    }
    else
    {
        return int(number) - 1;
    }
}

int main()
{
    WelcomeMessage();

    float number = 0;

    number = ReadNumber();
    cout << "My Floor Result: " << MyFloor(number) << endl;
    cout << "C++ Floor Result: " << floor(number) << endl;

    cout << endl
         << endl;

    return 0;
}