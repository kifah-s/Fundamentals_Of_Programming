#include <iostream>

using namespace std;

//* Function

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

//* End Function

int main()
{
    welcomeMessage();

    int loanAmount = 0, monthlyPayment = 0, numberOfMonths = 0;

    cout << "Please, enter loan amount: ";
    cin >> loanAmount;

    cout << "Please, enter monthly payment: ";
    cin >> monthlyPayment;

    numberOfMonths = loanAmount / monthlyPayment;

    cout << "\nNumber of months: " << numberOfMonths << endl;

    cout << endl
         << endl;

    return 0;
}