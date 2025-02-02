
//* Class Date 2 Program (Version 1).

/*
* create a program to represent a date using classes.
* Implement methods to set the date, increment the date by one day using the ++ operator, and display the date.
* Additionally, create a method to check if a given year is a leap year.
* In the main program, create an object, set a date, increment it, check if the year is a leap year, and print the date.

! Output:
! Date: 31 / 12 / 2024
! Date: 1 / 1 / 2025
! 2025 is not a leap year.
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>

using namespace std;

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Classes ..
class Date
{
private:
    int day, month, year;

public:
    // Setter
    bool setDate(int d, int m, int y)
    {
        if (d >= 1 && d <= 31)
        {
            day = d;
        }
        else
        {
            return false;
        }

        if (m >= 1 && m <= 12)
        {
            month = m;
        }
        else
        {
            return false;
        }

        if (y >= 2020)
        {
            year = y;
        }
        else
        {
            return false;
        }

        return true;
    }

    void operator++()
    {
        if (day < 31)
        {
            day++;
        }
        else
        {
            day = 1;

            if (month < 12)
            {
                month++;
            }
            else
            {
                month = 1;
                year++;
            }
        }
    }

    // Getter
    void checkYear()
    {
        if (year % 4 == 0)
        {
            cout << year << " is a leap year." << endl;
        }
        else
        {
            cout << year << " is not a leap year." << endl;
        }
    }

    void getDate()
    {
        cout << "Date: " << day << " / " << month << " / " << year << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Date 2 Program (Version 1) ..\n"
         << endl;
}

// Date - Function.
void dateFun()
{
    Date d1;
    if (d1.setDate(2, 2, 2024))
    {
        cout << "Date is correct\n";
    }
    else
    {
        cout << "Date is incorrect\n";
    }

    d1.getDate();
    d1.operator++();
    d1.getDate();
    ++d1;
    d1.getDate();
    d1.checkYear();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    dateFun();

    cout << "\n"
         << endl;
}
//* End Function ..
