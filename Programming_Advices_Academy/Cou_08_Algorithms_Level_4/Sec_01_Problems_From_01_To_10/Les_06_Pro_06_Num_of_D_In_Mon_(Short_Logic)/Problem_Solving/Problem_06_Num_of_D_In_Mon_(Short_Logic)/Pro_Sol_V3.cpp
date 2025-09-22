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
    if (month < 1 || month > 12)
    {
        return 0;
    }
    
    int numberOfDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (month == 2) ? (IsLeapYear(year) ? 29 : 28) : numberOfDays[month - 1];
}

int main()
{
    WelcomeMessage();

    short year = ReadYear();
    short month = ReadMonth();

    cout << "\nNumber of Days in Year [" << year << "] - Month [" << month << "] is: " << NumberOfDaysInMonth(year, month);

    cout << endl
         << endl;

    return 0;
}