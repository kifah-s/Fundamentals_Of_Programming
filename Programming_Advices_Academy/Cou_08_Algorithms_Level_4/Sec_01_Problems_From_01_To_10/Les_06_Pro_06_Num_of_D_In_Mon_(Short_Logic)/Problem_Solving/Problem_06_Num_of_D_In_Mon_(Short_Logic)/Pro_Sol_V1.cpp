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

int NumberOfDaysInMonth(short year, short month)
{
    // if (month < 1 || month > 12)
    // {
    //     return 0;
    // }

    // if (month == 2)
    // {
    //     return IsLeapYear(year) ? 29 : 28;
    // }

    // short arr31Days[7] = {1, 3, 5, 7, 8, 10, 12};
    // for (short i = 1; i <= 7; i++)
    // {
    //     if (arr31Days[i - 1] == month)
    //     {
    //         return 31;
    //     }
    // }
    
    // if you reach here then its 30 days.
    // return 30;

    if (month < 1 || month > 12)
    {
        return 0;
    }

    // int NumberOfDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // return (month == 2) ? (IsLeapYear(year) ? 29 : 28) : NumberOfDays[month - 1];
    
    int NumberOfDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (month == 2) ? (IsLeapYear(year) ? 29 : 28) : NumberOfDays[month];
}

// int NumberOfHoursInMonth(short year, short month)
// {
//     return NumberOfDaysInMonth(year, month) * 24;
// }

// int NumberOfMinutesInMonth(short year, short month)
// {
//     return NumberOfHoursInMonth(year, month) * 60;
// }

// int NumberOfSecondsInYear(short year, short month)
// {
//     return NumberOfMinutesInMonth(year, month) * 60;
// }

int main()
{
    WelcomeMessage();

    short year = ReadYear();
    short month = ReadMonth();

    cout << "\nNumber of Days in Year [" << year << "] - Month [" << month << "] is: " << NumberOfDaysInMonth(year, month);
    // cout << "\nNumber of Hours   in Year [" << year << "] - Month [" << month << "] is: " << NumberOfHoursInMonth(year, month);
    // cout << "\nNumber of Minutes in Year [" << year << "] - Month [" << month << "] is: " << NumberOfMinutesInMonth(year, month);
    // cout << "\nNumber of Seconds in Year [" << year << "] - Month [" << month << "] is: " << NumberOfSecondsInYear(year, month);

    cout << endl
         << endl;

    return 0;
}