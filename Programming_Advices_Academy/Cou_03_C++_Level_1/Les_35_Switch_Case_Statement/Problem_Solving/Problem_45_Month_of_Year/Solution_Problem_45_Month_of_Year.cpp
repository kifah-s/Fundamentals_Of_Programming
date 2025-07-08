#include <iostream>

using namespace std;

//* Enums

enum enMoths
{
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12
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

    short month = 0;

    cout << "Please, enter a moth: ";
    cin >> month;

    switch (month)
    {
    case enMoths::January:
        cout << "\nIts January" << endl;
        break;

    case enMoths::February:
        cout << "\nIts February" << endl;
        break;

    case enMoths::March:
        cout << "\nIts March" << endl;
        break;

    case enMoths::April:
        cout << "\nIts April" << endl;
        break;

    case enMoths::May:
        cout << "\nIts May" << endl;
        break;

    case enMoths::June:
        cout << "\nIts June" << endl;
        break;

    case enMoths::July:
        cout << "\nIts July" << endl;
        break;

    case enMoths::August:
        cout << "\nIts August" << endl;
        break;

    case enMoths::September:
        cout << "\nIts September" << endl;
        break;

    case enMoths::October:
        cout << "\nIts October" << endl;
        break;

    case enMoths::November:
        cout << "\nIts November" << endl;
        break;

    case enMoths::December:
        cout << "\nIts December" << endl;
        break;

    default:
        cout << "\nWrong Month" << endl;
        break;
    }

    cout << endl
         << endl;

    return 0;
}