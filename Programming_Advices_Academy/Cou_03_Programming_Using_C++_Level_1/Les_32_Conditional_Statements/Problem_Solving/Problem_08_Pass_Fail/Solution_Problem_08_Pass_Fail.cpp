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

    int mark = 0;

    cout << "Please, enter a mark: ";
    cin >> mark;

    if (mark >= 50)
    {
        cout << "\nPass" << endl;
    }
    else
    {
        cout << "\nFail" << endl;
    }

    cout << endl
         << endl;

    return 0;
}