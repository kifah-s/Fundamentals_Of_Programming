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

float PositiveRound(float num)
{
    int wholePart = (int)num;
    double decimalPart = num - wholePart;

    if (decimalPart >= 0.5)
    {
        return num = (int)num + 1;
    }
    else
    {
        return num = (int)num;
    }
}

float NegativeRound(float num)
{
    int wholePart = (int)num;
    double decimalPart = num - wholePart;

    if (decimalPart <= -0.5)
    {
        return num = (int)num - 1;
    }
    else
    {
        return num = (int)num;
    }
}

float MyRound(float num)
{
    if (num > 0)
    {
        return PositiveRound(num);
    }
    else
    {
        return NegativeRound(num);
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