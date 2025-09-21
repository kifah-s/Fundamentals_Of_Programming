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

int NumberOfDaysInYear(short year)
{
    return IsLeapYear(year) ? 366 : 35;
}

int NumberOfHoursInYear(short year)
{
    return NumberOfDaysInYear(year) * 24;
}

int NumberOfMinutesInYear(short year)
{
    return NumberOfHoursInYear(year) * 60;
}

int NumberOfSecondsInYear(short year)
{
    return NumberOfMinutesInYear(year) * 60;
}

int main()
{
    WelcomeMessage();

    short year = ReadYear();
    
    cout << "\nNumber of Days    in Year [" << year << "] is " << NumberOfDaysInYear(year);
    cout << "\nNumber of Hours   in Year [" << year << "] is " << NumberOfHoursInYear(year);
    cout << "\nNumber of Minutes in Year [" << year << "] is " << NumberOfMinutesInYear(year);
    cout << "\nNumber of Seconds in Year [" << year << "] is " << NumberOfSecondsInYear(year);

    cout << endl
         << endl;

    return 0;
}