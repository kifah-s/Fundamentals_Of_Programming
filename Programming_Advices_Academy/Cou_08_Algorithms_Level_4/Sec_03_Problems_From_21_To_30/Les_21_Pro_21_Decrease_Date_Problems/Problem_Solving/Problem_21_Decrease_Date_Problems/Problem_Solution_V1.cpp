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

stDate DecreaseDateByOneDay(stDate date)
{
    if (date.day == 1)
    {
        if (date.month == 1)
        {
            date.month = 12;
            date.day = 31;
            date.year--;
        }
        else
        {
            date.day = NumberOfDaysInAMonth(date.month, date.year);
            date.month--;
        }
    }
    else
    {
        date.day--;
    }

    return date;
}

stDate DecreaseDateByXDay(short days, stDate date)
{
    for (short i = 1; i <= days; i++)
    {
        date = DecreaseDateByOneDay(date);
    }

    return date;
}

stDate DecreaseDateByOneWeek(stDate date)
{
    for (short i = 1; i <= 7; i++)
    {
        date = DecreaseDateByOneDay(date);
    }

    return date;
}

stDate DecreaseDateByXWeeks(short weeks, stDate date)
{
    for (short i = 1; i <= weeks; i++)
    {
        date = DecreaseDateByOneWeek(date);
    }

    return date;
}

stDate DecreaseDateByOneMonth(stDate date)
{
    if (date.month == 1)
    {
        date.month = 12;
        date.year--;
    }
    else
    {
        date.month--;
    }

    short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(date.month, date.year);

    if (date.day > NumberOfDaysInCurrentMonth)
    {
        date.day = NumberOfDaysInCurrentMonth;
    }

    return date;
}

stDate DecreaseDateByXMonths(short months, stDate date)
{
    for (short i = 1; i <= months; i++)
    {
        date = DecreaseDateByOneMonth(date);
    }

    return date;
}

stDate DecreaseDateByOneYear(stDate date)
{
    date.year--;

    return date;
}

stDate DecreaseDateByXYears(short years, stDate date)
{
    for (short i = 1; i <= years; i++)
    {
        date = DecreaseDateByOneYear(date);
    }

    return date;
}

stDate DecreaseDateByXYearsFaster(short years, stDate date)
{
    date.year -= years;

    return date;
}

stDate DecreaseDateByOneDecade(stDate date)
{
    date.year -= 10;

    return date;
}

stDate DecreaseDateByXDecades(short decades, stDate date)
{
    for (short i = 1; i <= decades; i++)
    {
        date = DecreaseDateByOneDecade(date);
    }

    return date;
}

stDate DecreaseDateByXDecadesFaster(short decades, stDate date)
{
    date.year -= 10 * decades;

    return date;
}

stDate DecreaseDateByOneCentury(stDate date)
{
    date.year -= 100;

    return date;
}

stDate DecreaseDateByOneMillennium(stDate date)
{
    date.year -= 1000;

    return date;
}

int main()
{
    WelcomeMessage();

    stDate date;
    cout << "Date Details: " << endl;
    date = ReadFullDate();

    cout << "\nDate After: " << endl;

    date = DecreaseDateByOneDay(date);
    cout << "\n01 - Subtracting One Day Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByXDay(10, date);
    cout << "02 - Subtracting 10 Days Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByOneWeek(date);
    cout << "03 - Subtracting One Week Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByXWeeks(10, date);
    cout << "04 - Subtracting 10 Weeks Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByOneMonth(date);
    cout << "05 - Subtracting One Month Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByXMonths(5, date);
    cout << "06 - Subtracting 5 Months Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByOneYear(date);
    cout << "07 - Subtracting One Year Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByXYears(10, date);
    cout << "08 - Subtracting 10 Years Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByXYearsFaster(10, date);
    cout << "09 - Subtracting 10 Years (Faster) Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByOneDecade(date);
    cout << "10 - Subtracting One Decade Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByXDecades(10, date);
    cout << "11 - Subtracting 10 Decades Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByXDecadesFaster(10, date);
    cout << "12 - Subtracting 10 Decades (Faster) Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByOneCentury(date);
    cout << "13 - Subtracting One Century Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByOneMillennium(date);
    cout << "14 - Subtracting One Millennium Is: " << date.day << "/" << date.month << "/" << date.year << endl;

    cout << endl
         << endl;

    return 0;
}