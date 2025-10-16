#include <iostream>
// #include <cmath>

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

float MyAbsolute(float num)
{
    if (num > 0)
    {
        return num;
    }
    else
    {
        return num * (-1);
    }
}

int main()
{
    WelcomeMessage();

    float number = 0;

    number = ReadNumber();
    cout << "My abc Result: " << MyAbsolute(number) << endl;
    cout << "C++ abc Result: " << abs(number) << endl;

    cout << endl
         << endl;

    return 0;
}