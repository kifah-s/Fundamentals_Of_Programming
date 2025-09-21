#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

short ReadYear()
{
    short year = 0;
    cout << "Please, enter a year: ";
    cin >> year;

    return year;
}

bool IsLeapYear(short year)
{
    if (year % 400 == 0)
    {
        return true;
    }
    else if (year % 100 == 0)
    {
        return false;
    }
    else if (year % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    WelcomeMessage();

    short year = ReadYear();

    if (IsLeapYear(year))
    {
        cout << "\n"
             << year << ": is a Leap Year." << endl;
    }
    else
    {
        cout << "\n"
             << year << ": is Not a Leap Year." << endl;
    }

    cout << endl
         << endl;

    return 0;
}