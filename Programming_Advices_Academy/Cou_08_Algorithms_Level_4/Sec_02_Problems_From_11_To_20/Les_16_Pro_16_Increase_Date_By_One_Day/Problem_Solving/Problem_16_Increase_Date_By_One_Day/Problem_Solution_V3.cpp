#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

struct stDate
{
    short day;
    short month;
    short year;
};

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

stDate ReadFullDate()
{
    stDate date;

    date.day = ReadDay();
    date.month = ReadMonth();
    date.year = ReadYear();

    return date;
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

bool IsLastDayInMonth(stDate date)
{
    // if (date.day == NumberOfDaysInAMonth(date.month, date.year))
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    return (date.day == NumberOfDaysInAMonth(date.month, date.year) ? true : false);
}

bool IsLastMonthInYear(stDate date)
{
    return (date.month == 12) ? true : false;
}

stDate IncreaseDateByOneDay(stDate date)
{
    if (IsLastDayInMonth(date))
    {
        if (IsLastMonthInYear(date))
        {
            date.month = 1;
            date.day = 1;
            date.year++;
        }
        else
        {
            date.day = 1;
            date.month++;
        }
    }
    else
    {
        date.day++;
    }

    return date;
}

int main()
{
    WelcomeMessage();

    stDate date;
    cout << "Date Details: " << endl;
    date = ReadFullDate();

    date = IncreaseDateByOneDay(date);
    cout << "\nDate After Adding One Day Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    cout << endl
         << endl;

    return 0;
}