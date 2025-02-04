
//* Class Yearly and Monthly Member Program (Version 1).

/*
* Create a program defines a class Gammal_Tech_member representing a generic member with the ability to set and print a date.
* It also includes two derived classes, yearly_member and monthly_member, representing members with yearly and monthly subscriptions.
* The derived classes inherit from the base class Gammal_Tech_member and override the operator++ to implement the increment behavior.

! Output:
! Yearly Member:
! Original date: 31/12/2022
! Date after increment: 31/12/2023

! Monthly Member:
! Original date: 31/12/2022
! Date after increment: 31/1/2023
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
class Gammal_Tech_member
{
private:
    int day, month, year;

public:
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

    int getDay()
    {
        return day;
    }

    int getMonth()
    {
        return month;
    }

    int getYear()
    {
        return year;
    }

    void print()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class yearly_member : public Gammal_Tech_member
{
public:
    void operator++()
    {
        setDate(getDay(), getMonth(), getYear() + 1);
    }
};

class monthly_member : public Gammal_Tech_member
{
public:
    void operator++()
    {
        if (getMonth() == 12)
        {
            setDate(getDay(), 1, getYear());
        }
        else
        {
            setDate(getDay(), getMonth() + 1, getYear());
        }
    }
};

//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Yearly and Monthly Member Program (Version 1) ..\n"
         << endl;
}

// Date - Function.
void dateFun()
{
    yearly_member yearly;
    monthly_member monthly;

    cout << "Yearly member: " << endl;
    yearly.setDate(31, 12, 2024);
    cout << "Original date: ";
    yearly.print();
    cout << "Date after increment: ";
    ++yearly;
    yearly.print();

    
    cout << "\nMonthly member: " << endl;
    monthly.setDate(31, 12, 2024);
    cout << "Original date: ";
    monthly.print();
    cout << "Date after increment: ";
    ++monthly;
    monthly.print();


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
