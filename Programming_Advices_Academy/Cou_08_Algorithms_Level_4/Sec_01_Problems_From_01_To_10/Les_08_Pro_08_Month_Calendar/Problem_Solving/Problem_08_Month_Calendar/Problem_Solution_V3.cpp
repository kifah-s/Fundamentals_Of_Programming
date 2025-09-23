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
    cout << "Please, Enter a Year: ";
    cin >> year;

    return year;
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

void PrintMonthName(short month)
{
    string monthOfYear[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Sept", "Oct", "Nov", "Dec"};

    cout << "\n_________________" << monthOfYear[month - 1] << "___________________\n"
         << endl;
}

void PrintDaysOfWeek()
{
    string daysOfWeek[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    for (short i = 0; i < 7; i++)
    {
        cout << daysOfWeek[i] << "   ";
    }
    cout << endl;
}

bool IsLeapYear(short year)
{
    return (year % 400 == 0);
}

short NumberOfDaysInAMonth(short year, short month)
{
    if (month < 1 || month > 12)
    {
        return 0;
    }

    int numberOfDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return (month == 2) ? (IsLeapYear(year) ? 29 : 28) : numberOfDays[month - 1];
}

short DayOfWeekOrder(short year, short month, short day)
{
    short a = (14 - month) / 12;
    short y = year - a;
    short m = month + (12 * a) - 2;
    short d = (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;

    return d;
}

void PrintMonthCalender(short year, short month)
{
    PrintMonthName(month);
    PrintDaysOfWeek();

    int current = DayOfWeekOrder(month, year, 1);
    int numberOfDays = NumberOfDaysInAMonth(year, month);

    short i;
    for (i = 0; i < current; i++)
    {
        cout << "      ";
    }

    for (short j = 1; j <= numberOfDays; j++)
    {
        cout << setw(2) << j << "    ";

        if (++i == 7)
        {
            i = 0;
            cout << "\n";
        }
    }

    cout << "\n_______________________________________" << endl;
}

int main()
{
    WelcomeMessage();

    short year = ReadYear();
    short month = ReadMonth();

    PrintMonthCalender(year, month);

    cout << endl
         << endl;

    return 0;
}