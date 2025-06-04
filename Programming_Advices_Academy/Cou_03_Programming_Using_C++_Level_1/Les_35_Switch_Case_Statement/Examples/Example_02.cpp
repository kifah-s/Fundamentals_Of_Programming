#include <iostream>

using namespace std;

//* Enums

enum enDays
{
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7,

};

//* End Enums

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Examples ..\n"
         << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    enDays day = enDays::Wednesday;
    // int day = enDays::Wednesday;

    switch (day)
    {
    case 1:
        cout << "Sunday" << endl;
        break;

    case 2:
        cout << "Monday" << endl;
        break;

    case 3:
        cout << "Tuesday" << endl;
        break;

    case 4:
        cout << "Wednesday" << endl;
        break;

    case 5:
        cout << "Thursday" << endl;
        break;

    case 6:
        cout << "Friday" << endl;
        break;

    case 7:
        cout << "Saturday" << endl;
        break;
        
        default:
        cout << "Not a week day" << endl;
        break;
    }

    cout << endl
         << endl;

    return 0;
}