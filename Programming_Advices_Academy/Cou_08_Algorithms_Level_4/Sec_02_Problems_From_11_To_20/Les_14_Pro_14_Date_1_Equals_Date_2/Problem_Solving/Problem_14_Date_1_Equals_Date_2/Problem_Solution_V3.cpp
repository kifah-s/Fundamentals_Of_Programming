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

bool IsDate1EqualsDate2(stDate date1, stDate date2)
{
    // if (date1.year != date2.year)
    // {
    //     return false;
    // }
    // else
    // {
    //     if (date1.month != date2.month)
    //     {
    //         return false;
    //     }
    //     else
    //     {
    //         if (date1.day != date2.day)
    //         {
    //             return false;
    //         }
    //     }
    // }
    // return true;

    // return ((date1.year != date2.year) ? false : (date1.month != date2.month) ? false : (date1.day != date2.day) ? false : true);

    // if (date1.year == date2.year)
    // {
    //     if (date1.month == date2.month)
    //     {
    //         if (date1.day == date2.day)
    //         {
    //             return true;
    //         }
    //         else
    //         {
    //             return false;
    //         }
    //     }
    //     else
    //     {
    //         return false;
    //     }
    // }
    // else
    // {
    //     return false;
    // }

    return (date1.year == date2.year) ? ((date1.month == date2.month) ? ((date1.day == date2.day) ? true : false) : false) : false;
}

int main()
{
    WelcomeMessage();

    stDate date1, date2;
    cout << "Date 1 Details: " << endl;
    date1 = ReadFullDate();
    cout << "\nDate 2 Details: " << endl;
    date2 = ReadFullDate();

    if (IsDate1EqualsDate2(date1, date2))
    {
        cout << "\nYes, Date 1 Equals Date 2." << endl;
    }
    else
    {
        cout << "\nNo, Date 1 Not Equals Date 2." << endl;
    }

    cout << endl
         << endl;

    return 0;
}