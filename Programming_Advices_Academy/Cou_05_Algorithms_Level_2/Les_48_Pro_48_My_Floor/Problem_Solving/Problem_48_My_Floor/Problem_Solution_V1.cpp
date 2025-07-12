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

float PositiveFloor(float num)
{
    // int wholePart = (int)num;
    // double decimalPart = num - wholePart;
    // if (decimalPart >= 0.5)
    // {
    //     return num = (int)num + 1;
    // }
    // else
    // {
    //     return num = (int)num;
    // }

    return num = (int)num;
}

float NegativeFloor(float num)
{
    // int wholePart = (int)num;
    // double decimalPart = num - wholePart;
    // if (decimalPart <= -0.5)
    // {
    //     return num = (int)num - 1;
    // }
    // else
    // {
    //     return num = (int)num;
    // }

    return num = (int)num - 1;
}

float MyFloor(float num)
{
    if (num > 0)
    {
        return PositiveFloor(num);
    }
    else
    {
        return NegativeFloor(num);
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