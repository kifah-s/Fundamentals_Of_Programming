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

    if (day == 1)
    {
        cout << "\nIts Sunday" << endl;
    }
    else if (day == 2)
    {
        cout << "\nIts Monday" << endl;
    }
    else if (day == 3)
    {
        cout << "\nIts Tuseday" << endl;
    }
    else if (day == 4)
    {
        cout << "\nIts Wednesday" << endl;
    }
    else if (day == 5)
    {
        cout << "\nIts Thursday" << endl;
    }
    else if (day == 6)
    {
        cout << "\nIts Friday" << endl;
    }
    else if (day == 7)
    {
        cout << "\nIts Saturday" << endl;
    }
    else
    {
        cout << "\nWrong Day" << endl;
    }

    cout << endl
         << endl;

    return 0;
}