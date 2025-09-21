#include <iostream>
#include <iomanip>

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

short ReadMonth()
{
    short month = 0;

    do
    {
        cout << "Please, enter a Month: ";
        cin >> month;
    } while (month < 1 || month > 12);

    return month;
}

bool IsLeapYear(short year)
{
    return (year % 400 == 0);
}

bool IsFebruary(short month)
{
    return (month == 2);
}

int NumberOfDaysInMonth(short year, short month)
{
    // if (IsLeapYear(year) && IsFebruary(month))
    // {
    //     return 29;
    // }
    // else if (IsFebruary(month))
    // {
    //     return 28;
    // }
    // else
    // {
    //     return 30;
    // }

    return IsLeapYear(year) && IsFebruary(month) ? 29 : IsFebruary(month) ? 28
                                                                          : 30;
}

int NumberOfHoursInMonth(short year, short month)
{
    return NumberOfDaysInMonth(year, month) * 24;
}

int NumberOfMinutesInMonth(short year, short month)
{
    return NumberOfHoursInMonth(year, month) * 60;
}

int NumberOfSecondsInYear(short year, short month)
{
    return NumberOfMinutesInMonth(year, month) * 60;
}

int main()
{
    WelcomeMessage();

    short year = ReadYear();
    short month = ReadMonth();

    cout << "\nNumber of Days    in Year [" << year << "] [" << month << "] is " << NumberOfDaysInMonth(year, month);
    cout << "\nNumber of Hours   in Year [" << year << "] [" << month << "] is " << NumberOfHoursInMonth(year, month);
    cout << "\nNumber of Minutes in Year [" << year << "] [" << month << "] is " << NumberOfMinutesInMonth(year, month);
    cout << "\nNumber of Seconds in Year [" << year << "] [" << month << "] is " << NumberOfSecondsInYear(year, month);

    cout << endl
         << endl;

    return 0;
}