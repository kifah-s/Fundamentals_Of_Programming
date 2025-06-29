#include <iostream>

using namespace std;

//* Enums

enum enDays
{
    sunday = 1,
    monday = 2,
    tuesday = 3,
    wednesday = 4,
    thursday = 5,
    friday = 6,
    saturday = 7
};

//* End Enums

//* Functions

void WelcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

enDays ReadDayFun()
{
    int day = 0;

    do
    {
        cout << "\nPlease, enter a day: ";
        cin >> day;

        if (day < 1 || day > 7)
        {
            cout << "\nWrong Day" << endl;
        }

    } while (day < 1 || day > 7);

    return (enDays)day;
}

void PrintResultFun(enDays day)
{
    switch (day)
    {
    case enDays::sunday:
        cout << "\nIt's sunday" << endl;
        break;

    case enDays::monday:
        cout << "\nIt's monday" << endl;
        break;

    case enDays::tuesday:
        cout << "\nIt's tuesday" << endl;
        break;

    case enDays::wednesday:
        cout << "\nIt's wednesday" << endl;
        break;

    case enDays::thursday:
        cout << "\nIt's thursday" << endl;
        break;

    case enDays::friday:
        cout << "\nIt's friday" << endl;
        break;

    case enDays::saturday:
        cout << "\nIt's saturday" << endl;
        break;

    default:
        break;
    }
}

//* End Functions

int main()
{
    WelcomeMessageFun();

    PrintResultFun(ReadDayFun());

    cout << endl
         << endl;

    return 0;
}