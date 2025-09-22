#include <iostream>
#include <cmath>

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

void PrintDate(short year, short month, short day)
{
    cout << "\nDate: " << day << "/" << month << "/" << year << endl;
}

short GregorianCalender(short year, short month, short day)
{
    short a = (14 - month) / 12;
    short y = year - a;
    short m = month + (12 * a) - 2;
    short d = (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;

    return d;
}

void PrintDay(short d)
{
    string daysOfWeek[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    cout << "Day Name: " << daysOfWeek[d] << endl;
}

int main()
{
    WelcomeMessage();

    short year = ReadYear();
    short month = ReadMonth();
    short day = ReadDay();

    PrintDate(year, month, day);
    short d = GregorianCalender(year, month, day);
    cout << "Dya Order: " << d << endl;
    PrintDay(d);

    cout << endl
         << endl;

    return 0;
}