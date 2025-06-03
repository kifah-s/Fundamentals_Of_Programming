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

    int code = 1234, pinCode = 0;

    cout << "Please, enter a pin code: ";
    cin >> pinCode;

    if (pinCode == code)
    {
        cout << "\nYour balance is: 7500" << endl;
    }
    else
    {
        cout << "\nWrong pin" << endl;
    }

    cout << endl
         << endl;

    return 0;
}