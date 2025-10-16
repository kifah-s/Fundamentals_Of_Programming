#include <iostream>

using namespace std;

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int readAtmPinCodeFun()
{
    int pinCode = 0;

    cout << "Please, enter ATM PIN CODE: ";
    cin >> pinCode;

    return pinCode;
}

void checkAtmPinCodeFun()
{
    int i = 0;
    while (i < 3)
    {
        int pinCode = readAtmPinCodeFun();

        if (pinCode == 1234)
        {
            cout << "Balance: 7500$" << endl;
            break;
        }
        else
        {
            cout << "Wrong ATM PIN CODE" << endl;
        }

        i++;
    }
}

//* End Functions

int main()
{
    welcomeMessageFun();

    checkAtmPinCodeFun();

    cout << endl
         << endl;

    return 0;
}