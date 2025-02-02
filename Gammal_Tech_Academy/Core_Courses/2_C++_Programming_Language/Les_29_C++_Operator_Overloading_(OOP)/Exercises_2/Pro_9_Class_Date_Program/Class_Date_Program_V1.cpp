
//* Class Date Program (Version 1).

/*
* Create a program using classes to represent a date (day, month, year).
* Implement a method setDate in the class to set the date with given parameters and ensure the validity of the date.
* Also, implement the ++ operator overload to increment the date by one day.
* Finally, create an object, set a date, print it, increment it, and print again.

! Output:
! Date: 31 / 12 / 2024
! Date: 1 / 1 / 2025
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
    cout << "\n\nYou welcome in Class Date Program (Version 1) ..\n"
         << endl;
}

// Date - Function.
void dateFun()
{
    Date d1;
    if (d1.setDate(2, 2, 2025))
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
