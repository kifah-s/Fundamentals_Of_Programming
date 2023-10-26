

/* >>> Example 1 <<< */

#include <iostream>
#include <string>
using namespace std;

class Gammal_Tech_member
{
private:
    int day, month, year;

public:
    bool setDate(int d, int m, int y)
    {
        if (d >= 1 && d <= 31)
            day = d;
        else
            return false;
        if (m >= 1 && m <= 12)
            month = m;
        else
            return false;
        if (y >= 2020)
            year = y;
        else
            return false;
        return true;
    }

    void operator++()
    {
        if (day < 31)
            day++;
        else
        {
            day = 1;
            if (month < 12)
                month++;
            else
            {
                month = 1;
                year++;
            }
        }
    }

    void print()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main()
{
    Gammal_Tech_member omar;
    if (omar.setDate(31, 12, 2022) == false)
        cout << "Date is incorrect\n";
    else
        cout << "Date is correct\n";
    omar.print();
    ++omar;
    omar.print();

    return 0;
}
