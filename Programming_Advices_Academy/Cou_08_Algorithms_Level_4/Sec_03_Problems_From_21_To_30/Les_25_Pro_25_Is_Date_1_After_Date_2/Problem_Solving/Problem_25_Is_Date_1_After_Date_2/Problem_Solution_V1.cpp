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

bool IsDate1BeforeDate2(stDate date1, stDate date2)
{
    return (date1.year < date2.year) ? true : ((date1.year == date2.year) ? (date1.month < date2.month ? true : (date1.month == date2.month ? date1.day < date2.day : false)) : false);
}

bool IsDate1AfterDate2(stDate date1, stDate date2)
{
    return (!IsDate1BeforeDate2(date1, date2));
}

int main()
{
    WelcomeMessage();

    stDate date1, date2;

    cout << "Please, enter date 1: ";
    date1 = ReadFullDate();

    cout << "\nPlease, enter date 2: ";
    date2 = ReadFullDate();

    if (IsDate1AfterDate2(date1, date2))
    {
        cout << "\nYes, Date 1 After Date 2." << endl;
    }
    else
    {
        cout << "\nNo, Date 1 Not After Date 2." << endl;
    }

    cout << endl
         << endl;

    return 0;
}