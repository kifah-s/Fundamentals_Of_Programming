

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
            setDate(getDay(), 1, getYear() + 1);
        else
            setDate(getDay(), getMonth() + 1, getYear());
    }
};

int main()
{
    monthly_member Aly;
    yearly_member Nader;
    Aly.setDate(1, 12, 2021);
    Nader.setDate(1, 11, 2021);
    Aly.print();
    Nader.print();
    ++Aly;
    ++Nader;
    Aly.print();
    Nader.print();

    return 0;
}
