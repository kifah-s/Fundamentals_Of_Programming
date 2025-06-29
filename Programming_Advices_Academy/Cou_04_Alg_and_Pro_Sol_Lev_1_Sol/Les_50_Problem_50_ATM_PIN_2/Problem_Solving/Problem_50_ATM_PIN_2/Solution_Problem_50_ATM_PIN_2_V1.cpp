#include <iostream>

using namespace std;

//* Functions

void WelcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int ReadAtmPinFun()
{
    int pin = 0;
    cout << "Please, enter a ATM PIN: ";
    cin >> pin;

    return pin;
}

void CheckPinCodeFun()
{
    int pin = 0, counter = 0;

    do
    {
        if (counter == 3)
        {
            cout << "Card is locked!" << endl;
            break;
        }

        pin = ReadAtmPinFun();

        if (pin == 1234)
        {
            cout << "Balance is 7500." << endl;
        }
        else
        {
            cout << "Wong PIN." << endl;
        }

        counter++;

    } while (pin != 1234);
}

//* End Functions

int main()
{
    WelcomeMessageFun();

    CheckPinCodeFun();

    cout << endl
         << endl;

    return 0;
}