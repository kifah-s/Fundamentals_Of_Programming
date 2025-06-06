#include <iostream>

using namespace std;

enum enWeekDay
{
    sun = 1,
    mon = 2,
    tue = 3,
    wed = 4,
    thu = 5,
    fri = 6,
    sat = 7
};

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Examples ..\n"
         << endl;
}

void showWeekDayMenu()
{
    cout << "***************************" << endl;
    cout << "\tWeek Day" << endl;
    cout << "***************************" << endl;
    cout << "1) Sunday" << endl;
    cout << "2) Monday" << endl;
    cout << "3) Tuseday" << endl;
    cout << "4) Wednesday" << endl;
    cout << "5) Thursday" << endl;
    cout << "6) Friday" << endl;
    cout << "7) Saturday" << endl;
    cout << "***************************" << endl;
    cout << "Please, enter a number of day: ";
}

enWeekDay readWeekDay()
{
    enWeekDay weekDay;
    weekDay = enWeekDay::sun;

    int wd;
    cin >> wd;
    return (enWeekDay)wd;
}

string getWeekDayName(enWeekDay weekDay)
{
    switch (weekDay)
    {
    case enWeekDay::sun:
        return "Sunday";
        break;

    case enWeekDay::mon:
        return "Monday";
        break;

    case enWeekDay::tue:
        return "Tuesday";
        break;

    case enWeekDay::wed:
        return "Wednesday";
        break;

    case enWeekDay::thu:
        return "Thursday";
        break;

    case enWeekDay::fri:
        return "Friday";
        break;

    case enWeekDay::sat:
        return "Saturday";
        break;

    default:
        return "Not a week day";
        break;
    }
}

//* End Functions

int main()
{
    welcomeMessage();

    showWeekDayMenu();
    string today = getWeekDayName(readWeekDay());
    cout << "\nToday is: " << today << endl;

    cout << endl
         << endl;

    return 0;
}