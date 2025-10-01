#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

struct stDate
{
    short year;
    short month;
    short day;
};

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

stDate GetSystemDate()
{
    stDate date;

    time_t t = time(0);
    tm *now = localtime(&t);

    date.year = now->tm_year + 1900;
    date.month = now->tm_mon + 1;
    date.day = now->tm_mday;

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

int GetDifferenceInDays(stDate date1, stDate date2, bool includeEndDay = false)
{
    int Days = 0;

    while (IsDate1BeforeDate2(date1, date2))
    {
        Days++;
        date1 = IncreaseDateByOneDay(date1);
    }

    return includeEndDay ? ++Days : Days;
}

short DayOfWeekOrder(short day, short month, short year)
{
    short a, y, m;

    a = (14 - month) / 12;
    y = year - a;
    m = month + (12 * a) - 2;

    return (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

short DayOfWeekOrder(stDate date)
{
    return DayOfWeekOrder(date.day, date.month, date.year);
}

string DayShortName(short dayOfWeekOrder)
{
    string arrDayNames[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    return arrDayNames[dayOfWeekOrder];
}

short IsEndOfWeek(stDate date)
{
    return DayOfWeekOrder(date) == 6;
}

bool IsWeekEnd(stDate date)
{
    // Weekends are Fri and Sat.
    short dayIndex = DayOfWeekOrder(date);

    return (dayIndex == 5 || dayIndex == 6);
}

bool IsBusinessDay(stDate Date)
{
    /*
    short DayIndex = DayOfWeekOrder(Date);
    return (DayIndex >= 5 && DayIndex <= 4);
    */

    return !IsWeekEnd(Date);
}

short CalculateVacationDays(stDate vacationStarts, stDate vacationEnds)
{
    short actualVacationDays = 0;
    while (IsDate1BeforeDate2(vacationStarts, vacationEnds))
    {
        if (IsWeekEnd(vacationStarts))
        {
            actualVacationDays++;
        }

        vacationStarts = IncreaseDateByOneDay(vacationStarts);
    }

    return actualVacationDays;
}

short ReadNumberOfVacationDays()
{
    short numberOfVacationDays = 0;

    cout << "\nPlease, enter vacation days: ";
    cin >> numberOfVacationDays;

    return numberOfVacationDays;
}

stDate CalculateVacationDaysReturnDate(stDate vacationStarts, short numberOfVacationDays)
{
    for (short i = 0; i < numberOfVacationDays; i++)
    {
        if (IsWeekEnd(vacationStarts))
        {
            i -= 1;
        }

        vacationStarts = IncreaseDateByOneDay(vacationStarts);
    }

    return vacationStarts;
}

int main()
{
    WelcomeMessage();

    stDate vacationStarts, vacationEnds;

    cout << "Vacation Starts: ";
    vacationStarts = ReadFullDate();

    vacationStarts = CalculateVacationDaysReturnDate(vacationStarts, ReadNumberOfVacationDays());

    cout << "\nReturn Date: " << DayShortName(DayOfWeekOrder(vacationStarts)) << ", " << vacationStarts.day << "/" << vacationStarts.month << "/" << vacationStarts.year << endl;

    cout << endl
         << endl;

    return 0;
}