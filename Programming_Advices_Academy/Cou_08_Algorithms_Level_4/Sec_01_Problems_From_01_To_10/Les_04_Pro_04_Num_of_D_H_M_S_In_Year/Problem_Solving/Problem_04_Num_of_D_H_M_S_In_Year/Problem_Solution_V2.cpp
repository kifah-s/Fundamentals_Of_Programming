#include <iostream>
#include <iomanip>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAYear(short Year)
{
    return isLeapYear(Year) ? 366 : 365;
}

short NumberOfHoursInAYear(short Year)
{
    return NumberOfDaysInAYear(Year) * 24;
}

int NumberOfMinutesInAYear(short Year)
{
    return NumberOfHoursInAYear(Year) * 60;
}

int NumberOfSecondsInAYear(short Year)
{
    return NumberOfMinutesInAYear(Year) * 60;
}

short ReadYear()
{
    short Year;

    cout << "Please, enter a year to check: ";
    cin >> Year;

    return Year;
}

int main()
{
    WelcomeMessage();

    short Year = ReadYear();
    
    cout << "\nNumber of Days    in Year [" << Year << "] is " << NumberOfDaysInAYear(Year);
    cout << "\nNumber of Hours   in Year [" << Year << "] is " << NumberOfHoursInAYear(Year);
    cout << "\nNumber of Minutes in Year [" << Year << "] is " << NumberOfMinutesInAYear(Year);
    cout << "\nNumber of Seconds in Year [" << Year << "] is " << NumberOfSecondsInAYear(Year);

    cout << endl
         << endl;

    return 0;
}