#include <iostream>

using namespace std;

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
    case 1:
        cout << "\nIts Sunday" << endl;
        break;

    case 2:
        cout << "\nIts Monday" << endl;
        break;

    case 3:
        cout << "\nIts Tuseday" << endl;
        break;

    case 4:
        cout << "\nIts Wednesday" << endl;
        break;

    case 5:
        cout << "\nIts Thursday" << endl;
        break;

    case 6:
        cout << "\nIts Friday" << endl;
        break;

    case 7:
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