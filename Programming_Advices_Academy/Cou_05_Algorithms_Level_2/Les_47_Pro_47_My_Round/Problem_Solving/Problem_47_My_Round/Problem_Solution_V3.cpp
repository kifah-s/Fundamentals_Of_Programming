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

float GetFractionPart(float number)
{
    return number - int(number);
}

int MyRound(float number)
{
    int IntPart = int(number);
    float fractionsPart = GetFractionPart(number);

    if (abs(fractionsPart) >= 0.5)
    {
        if (number > 0)
        {
            return ++IntPart;
        }
        else
        {
            return --IntPart;
        }
    }
    else
    {
        return IntPart;
    }
}

int main()
{
    WelcomeMessage();

    float number = 0;

    number = ReadNumber();
    cout << "My Round Result: " << MyRound(number) << endl;
    cout << "C++ Round Result: " << round(number) << endl;

    cout << endl
         << endl;

    return 0;
}