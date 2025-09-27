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

short CalculateDiffInDays(stDate date1, stDate date2)
{
    short numberOfDaysForDate1 = NumberOfDaysFromBeginingOfYear(date1.day, date1.month, date1.year);

    short numberOfDaysForDate2 = NumberOfDaysFromBeginingOfYear(date2.day, date2.month, date2.year);

    short diffInDays = numberOfDaysForDate2 - numberOfDaysForDate1;

    return diffInDays;
}

int main()
{
    WelcomeMessage();

    stDate date1, date2;
    cout << "Date 1 Details: " << endl;
    date1 = ReadFullDate();

    cout << "\nDate 2 Details: " << endl;
    date2 = ReadFullDate();

    cout << "\nDiff Is: " << CalculateDiffInDays(date1, date2) << " Day(s)" << endl;
    cout << "Diff (Including End Day) Is: " << CalculateDiffInDays(date1, date2) + 1 << " Day(s)" << endl;

    cout
        << endl
        << endl;

    return 0;
}