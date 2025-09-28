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
    short day;
    cout << "Please enter a Day: ";
    cin >> day;
    return day;
}

short ReadMonth()
{
    short month;
    cout << "Please enter a Month: ";
    cin >> month;
    return month;
}

short ReadYear()
{
    short year;
    cout << "Please enter a Year: ";
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

bool isLeapYear(short year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool IsDate1BeforeDate2(stDate date1, stDate date2)
{
    return (date1.year < date2.year) ? true : ((date1.year == date2.year) ? (date1.month < date2.month ? true : (date1.month == date2.month ? date1.day < date2.day : false)) : false);
}

short NumberOfDaysInAMonth(short month, short year)
{
    if (month < 1 || month > 12)
    {
        return 0;
    }

    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return (month == 2) ? (isLeapYear(year) ? 29 : 28) : days[month - 1];
}

bool IsLastDayInMonth(stDate date)
{
    return (date.day == NumberOfDaysInAMonth(date.month, date.year));
}

bool IsLastMonthInYear(short month)
{
    return (month == 12);
}

stDate IncreaseDateByOneDay(stDate date)
{
    if (IsLastDayInMonth(date))
    {
        if (IsLastMonthInYear(date.month))
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

void SwapDates(stDate &date1, stDate &date2)
{
    stDate tempDate;

    tempDate.year = date1.year;
    tempDate.month = date1.month;
    tempDate.day = date1.day;

    date1.year = date2.year;
    date1.month = date2.month;
    date1.day = date2.day;

    date2.year = tempDate.year;
    date2.month = tempDate.month;
    date2.day = tempDate.day;
}

int GetDifferenceInDays(stDate date1, stDate date2, bool includeEndDay = false)
{
    int days = 0;
    short SwapFlagValue = 1;

    if (!IsDate1BeforeDate2(date1, date2))
    {
        // Swap Dates.
        SwapDates(date1, date2);
        SwapFlagValue = -1;
    }

    while (IsDate1BeforeDate2(date1, date2))
    {
        days++;
        date1 = IncreaseDateByOneDay(date1);
    }

    return includeEndDay ? ++days * SwapFlagValue : days * SwapFlagValue;
}

int main()
{
    WelcomeMessage();

    cout << "Date 1 Details: " << endl;
    stDate date1 = ReadFullDate();

    cout << "\nDate 2 Details: " << endl;
    stDate date2 = ReadFullDate();

    cout << "\nDiff is: " << GetDifferenceInDays(date1, date2) << " Day(s).";
    cout << "\nDiff (Including End Day) is: " << GetDifferenceInDays(date1, date2, true) << " Day(s).";

    cout << endl
         << endl;

    return 0;
}