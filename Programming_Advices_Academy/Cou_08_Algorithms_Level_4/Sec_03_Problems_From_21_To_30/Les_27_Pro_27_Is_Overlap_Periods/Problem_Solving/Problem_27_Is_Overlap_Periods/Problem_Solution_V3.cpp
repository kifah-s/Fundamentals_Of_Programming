#include <iostream>

using namespace std;

struct stDate
{
    short year;
    short month;
    short day;
};

struct stPeriods
{
    stDate startDate;
    stDate endDate;
};

enum enDateCompare
{
    date1BeforDate2 = -1,
    date1EqualDate2 = 0,
    date1AfterDate2 = 1
};

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

short ReadDay()
{
    short day;

    cout << "\nPlease enter a Day: ";
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

stPeriods ReadPeriods()
{
    stPeriods periods;

    cout << "Please, enter start date: ";
    periods.startDate = ReadFullDate();
    cout << "\nPlease, enter end date: ";
    periods.endDate = ReadFullDate();

    return periods;
}

bool isLeapYear(short year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
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

bool IsDate1BeforeDate2(stDate date1, stDate date2)
{
    return (date1.year < date2.year) ? true : ((date1.year == date2.year) ? (date1.month < date2.month ? true : (date1.month == date2.month ? date1.day < date2.day : false)) : false);
}

bool IsDate1EqualDate2(stDate date1, stDate date2)
{
    return (date1.year == date2.year) ? ((date1.month == date2.month) ? ((date1.day == date2.day) ? true : false) : false) : false;
}

bool IsDate1AfterDate2(stDate date1, stDate date2)
{
    return (!IsDate1BeforeDate2(date1, date2) && !IsDate1EqualDate2(date1, date2));
}

enDateCompare CompareDates(stDate date1, stDate date2)
{
    if (IsDate1BeforeDate2(date1, date2))
    {
        return enDateCompare::date1BeforDate2;
    }
    else if (IsDate1EqualDate2(date1, date2))
    {
        return enDateCompare::date1EqualDate2;
    }
    else
    {
        return enDateCompare::date1AfterDate2;
    }
}

bool IsOverlapPeriods(stPeriods period1, stPeriods period2)
{
    // while (IsDate1BeforeDate2(periods1.startDate, periods1.endDate))
    // {
    //     if (IsDate1EqualDate2(periods1.startDate, periods2.startDate))
    //     {
    //         return true;
    //     }
    //     periods1.startDate = IncreaseDateByOneDay(periods1.startDate);
    // }
    // return false;

    if (CompareDates(period2.endDate, period1.startDate) == enDateCompare::date1BeforDate2 || CompareDates(period2.startDate, period1.endDate) == enDateCompare::date1AfterDate2)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    WelcomeMessage();

    stPeriods periods1, periods2;

    cout << "Please, enter period 1: " << endl;
    periods1 = ReadPeriods();

    cout << "\nPlease, enter period 2: " << endl;
    periods2 = ReadPeriods();

    if (IsOverlapPeriods(periods1, periods2))
    {
        cout << "\nYes, Periods Overlap.";
    }
    else
    {
        cout << "\nNo, Periods Not Overlap.";
    }

    cout << endl
         << endl;

    return 0;
}