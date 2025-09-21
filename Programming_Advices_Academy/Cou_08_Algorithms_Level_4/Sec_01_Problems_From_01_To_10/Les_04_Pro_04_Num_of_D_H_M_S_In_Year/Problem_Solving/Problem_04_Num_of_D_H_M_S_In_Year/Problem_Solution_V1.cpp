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

bool IsLeapYear(short year)
{
    return (year % 400 == 0);
}

void NumberOfDaysInYear(short year)
{
    if (IsLeapYear(year))
    {
        cout << "Number Of Days  In Year (" << year << ") Is: 366" << endl;
    }
    else
    {
        cout << "Number Of Days  In Year (" << year << ") Is: 365" << endl;
    }
}

void NumberOfHoursInYear(short year)
{
    double numOfHouInYear = 0;
    if (IsLeapYear(year))
    {
        numOfHouInYear = 366 * 24;
        cout << "Number Of Hours In Year (" << year << ") Is: " << numOfHouInYear << endl;
    }
    else
    {
        numOfHouInYear = 365 * 24;
        cout << "Number Of Hours In Year (" << year << ") Is: " << numOfHouInYear << endl;
    }
}

void NumberOfMinutesInYear(short year)
{
    double numOfHouInYear = 0;
    if (IsLeapYear(year))
    {
        numOfHouInYear = 366 * 24 * 60;
        cout << "Number Of Hours In Year (" << year << ") Is: " << numOfHouInYear << endl;
    }
    else
    {
        numOfHouInYear = 365 * 24 * 60;
        cout << "Number Of Hours In Year (" << year << ") Is: " << numOfHouInYear << endl;
    }
}

void NumberOfSecondsInYear(short year)
{
    double numOfHouInYear = 0;
    if (IsLeapYear(year))
    {
        numOfHouInYear = 366 * 24 * 60 * 60;
        cout << "Number Of Hours In Year (" << fixed << setprecision(0) << year << ") Is: " << numOfHouInYear << endl;
    }
    else
    {
        numOfHouInYear = 365 * 24 * 60 * 60;
        cout << "Number Of Hours In Year (" << fixed << setprecision(0) << year << ") Is: " << numOfHouInYear << endl;
    }
}

int main()
{
    WelcomeMessage();

    short year = ReadYear();
    
    NumberOfDaysInYear(year);
    NumberOfHoursInYear(year);
    NumberOfMinutesInYear(year);
    NumberOfSecondsInYear(year);

    cout << endl
         << endl;

    return 0;
}