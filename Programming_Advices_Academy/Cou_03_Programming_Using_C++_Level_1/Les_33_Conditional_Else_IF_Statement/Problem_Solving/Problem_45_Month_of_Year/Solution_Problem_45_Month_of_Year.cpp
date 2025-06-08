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

    short month = 0;

    cout << "Please, enter a moth: ";
    cin >> month;

    if (month == 1)
    {
        cout << "\nIts January" << endl;
    }
    else if (month == 2)
    {
        cout << "\nIts February" << endl;
    }
    else if (month == 3)
    {
        cout << "\nIts March" << endl;
    }
    else if (month == 4)
    {
        cout << "\nIts April" << endl;
    }
    else if (month == 5)
    {
        cout << "\nIts May" << endl;
    }
    else if (month == 6)
    {
        cout << "\nIts June" << endl;
    }
    else if (month == 7)
    {
        cout << "\nIts July" << endl;
    }
    else if (month == 8)
    {
        cout << "\nIts August" << endl;
    }
    else if (month == 9)
    {
        cout << "\nIts September" << endl;
    }
    else if (month == 10)
    {
        cout << "\nIts October" << endl;
    }
    else if (month == 11)
    {
        cout << "\nIts November" << endl;
    }
    else if (month == 12)
    {
        cout << "\nIts December" << endl;
    }
    else
    {
        cout << "\nWrong Month" << endl;
    }

    cout << endl
         << endl;

    return 0;
}