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

bool IsDate1LessThanDate2(stDate date1, stDate date2)
{
    if (date1.year < date2.year)
    {
        return true;
    }
    else if (date1.year > date2.year)
    {
        return false;
    }
    else
    {
        if (date1.month < date2.month)
        {
            return true;
        }
        else if (date1.month > date2.month)
        {
            return false;
        }
        else
        {
            if (date1.day < date2.day)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}

int main()
{
    WelcomeMessage();

    stDate date1, date2;
    cout << "Date 1 Details: " << endl;
    date1 = ReadFullDate();
    cout << "\nDate 2 Details: " << endl;
    date2 = ReadFullDate();

    if (IsDate1LessThanDate2(date1, date2))
    {
        cout << "\nYes, Date 1 Less Than Date 2." << endl;
    }
    else
    {
        cout << "\nNo, Date 1 Not Less Than Date 2." << endl;
    }

    cout << endl
         << endl;

    return 0;
}