#include <iostream>
#include <iomanip>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

short ReadDay()
{
    short day = 0;

    do
    {
        cout << "Please, Enter a Day: ";
        cin >> day;
    } while (day < 1 || day > 31);

    return day;
}

short ReadMonth()
{
    short month = 0;

    do
    {
        cout << "Please, Enter a Month: ";
        cin >> month;
    } while (month < 1 || month > 12);

    return month;
}

short ReadYear()
{
    short year = 0;
    cout << "Please, Enter a Year: ";
    cin >> year;

    return year;
}

bool IsLeapYear(short year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short NumberOfDaysInAMonth(short month, short year)
{
    int numberOfDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return (month == 2) ? (IsLeapYear(year) ? 29 : 28) : numberOfDays[month - 1];
}

short NumberOfDaysFromBeginingOfYear(short day, short month, short year)
{
    short totalDays = 0;

    for (short i = 1; i <= month - 1; i++)
    {
        totalDays += NumberOfDaysInAMonth(i, year);
    }

    totalDays += day;

    return totalDays;
}

int main()
{
    WelcomeMessage();

    short day = ReadDay();
    short month = ReadMonth();
    short year = ReadYear();

    cout << "\nNumber of days from the begining of the year is: " << NumberOfDaysFromBeginingOfYear(day, month, year) << endl;

    cout << endl
         << endl;

    return 0;
}