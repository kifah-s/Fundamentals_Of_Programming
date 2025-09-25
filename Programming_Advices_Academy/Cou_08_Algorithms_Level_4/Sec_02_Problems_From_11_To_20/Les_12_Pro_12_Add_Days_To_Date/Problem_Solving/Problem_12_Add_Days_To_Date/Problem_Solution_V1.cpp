#include <iostream>
#include <iomanip>

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

short ReadDaysToAdd()
{
    short days = 0;

    cout << "How many days to add: ";
    cin >> days;

    return days;
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

stDate DateAddDays(short days, stDate date)
{
    short remainingDays = days + NumberOfDaysFromBeginingOfYear(date.day, date.month, date.year);
    short MonthDays = 0;
    date.month = 1;

    while (true)
    {
        MonthDays = NumberOfDaysInAMonth(date.month, date.year);

        if (remainingDays > MonthDays)
        {
            remainingDays -= MonthDays;
            date.month++;

            if (date.month > 12)
            {
                date.month = 1;
                date.year++;
            }
        }
        else
        {
            date.day = remainingDays;
            break;
        }
    }
    
    return date;
}

int main()
{
    WelcomeMessage();

    stDate date = ReadFullDate();
    short days = ReadDaysToAdd();

    date = DateAddDays(days, date);
    cout << "\nDate after adding [" << days << "] days is: ";
    cout << date.day << "/" << date.month << "/" << date.year;

    cout << endl
         << endl;

    return 0;
}