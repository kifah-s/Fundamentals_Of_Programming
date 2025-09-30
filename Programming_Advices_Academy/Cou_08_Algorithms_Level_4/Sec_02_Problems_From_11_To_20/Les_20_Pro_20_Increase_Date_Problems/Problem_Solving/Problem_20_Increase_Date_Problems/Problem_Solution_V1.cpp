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

stDate IncreaseDateByXDay(short days, stDate date)
{
    for (short i = 1; i <= days; i++)
    {
        date = IncreaseDateByOneDay(date);
    }

    return date;
}

stDate IncreaseDateByOneWeek(stDate date)
{
    for (short i = 1; i <= 7; i++)
    {
        date = IncreaseDateByOneDay(date);
    }

    return date;
}

stDate IncreaseDateByXWeeks(short weeks, stDate date)
{
    for (short i = 1; i <= weeks; i++)
    {
        date = IncreaseDateByOneWeek(date);
    }

    return date;
}

stDate IncreaseDateByOneMonth(stDate date)
{
    if (date.month == 12)
    {
        date.month = 1;
        date.year++;
    }
    else
    {
        date.month++;
    }

    short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(date.month, date.year);

    if (date.day > NumberOfDaysInCurrentMonth)
    {
        date.day = NumberOfDaysInCurrentMonth;
    }

    return date;
}

stDate IncreaseDateByXMonths(short months, stDate date)
{
    for (short i = 1; i <= months; i++)
    {
        date = IncreaseDateByOneMonth(date);
    }

    return date;
}

stDate IncreaseDateByOneYear(stDate date)
{
    date.year++;

    return date;
}

stDate IncreaseDateByXYears(short years, stDate date)
{
    for (short i = 1; i <= years; i++)
    {
        date = IncreaseDateByOneYear(date);
    }

    return date;
}

stDate IncreaseDateByXYearsFaster(short years, stDate date)
{
    date.year += years;

    return date;
}

stDate IncreaseDateByOneDecade(stDate date)
{
    date.year += 10;

    return date;
}

stDate IncreaseDateByXDecades(short decades, stDate date)
{
    for (short i = 1; i <= decades; i++)
    {
        date = IncreaseDateByOneDecade(date);
    }

    return date;
}

stDate IncreaseDateByXDecadesFaster(short decades, stDate date)
{
    date.year += 10 * decades;

    return date;
}

stDate IncreaseDateByOneCentury(stDate date)
{
    date.year += 100;

    return date;
}

stDate IncreaseDateByOneMillennium(stDate date)
{
    date.year += 1000;

    return date;
}

int main()
{
    WelcomeMessage();

    stDate date;
    cout << "Date Details: " << endl;
    date = ReadFullDate();

    cout << "\nDate After: " << endl;

    date = IncreaseDateByOneDay(date);
    cout << "\n01 - Adding One Day Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = IncreaseDateByXDay(10, date);
    cout << "02 - Adding 10 Days Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = IncreaseDateByOneWeek(date);
    cout << "03 - Adding One Week Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = IncreaseDateByXWeeks(10, date);
    cout << "04 - Adding 10 Weeks Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = IncreaseDateByOneMonth(date);
    cout << "05 - Adding One Month Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = IncreaseDateByXMonths(5, date);
    cout << "06 - Adding 5 Months Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = IncreaseDateByOneYear(date);
    cout << "07 - Adding One Year Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = IncreaseDateByXYears(10, date);
    cout << "08 - Adding 10 Years Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = IncreaseDateByXYearsFaster(10, date);
    cout << "09 - Adding 10 Years (Faster) Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = IncreaseDateByOneDecade(date);
    cout << "10 - Adding One Decade Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = IncreaseDateByXDecades(10, date);
    cout << "11 - Adding 10 Decades Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = IncreaseDateByXDecadesFaster(10, date);
    cout << "12 - Adding 10 Decades (Faster) Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = IncreaseDateByOneCentury(date);
    cout << "13 - Adding One Century Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = IncreaseDateByOneMillennium(date);
    cout << "14 - Adding One Millennium Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    cout << endl
         << endl;

    return 0;
}