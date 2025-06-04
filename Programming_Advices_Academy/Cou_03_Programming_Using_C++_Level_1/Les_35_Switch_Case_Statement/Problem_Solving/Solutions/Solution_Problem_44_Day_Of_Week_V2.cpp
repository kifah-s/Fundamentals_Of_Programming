#include <iostream>

using namespace std;

//* Enums

enum enDays
{
    Sunday = 1,
    Monday = 2,
    Tuseday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7
};

//* End Enums

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    short day = 0;

    cout << "Please, enter a day: ";
    cin >> day;

    switch (day)
    {
    case enDays::Sunday:
        cout << "\nIts Sunday" << endl;
        break;

    case enDays::Monday:
        cout << "\nIts Monday" << endl;
        break;

    case enDays::Tuseday:
        cout << "\nIts Tuseday" << endl;
        break;

    case enDays::Wednesday:
        cout << "\nIts Wednesday" << endl;
        break;

    case enDays::Thursday:
        cout << "\nIts Thursday" << endl;
        break;

    case enDays::Friday:
        cout << "\nIts Friday" << endl;
        break;

    case enDays::Saturday:
        cout << "\nIts Saturday" << endl;
        break;

    default:
        cout << "\nWrong Day" << endl;
        break;
    }

    cout << endl
         << endl;

    return 0;
}