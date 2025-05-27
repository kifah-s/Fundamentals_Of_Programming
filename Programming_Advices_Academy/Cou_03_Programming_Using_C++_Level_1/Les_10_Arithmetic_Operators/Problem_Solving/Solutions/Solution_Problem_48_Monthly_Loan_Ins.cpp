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

    cout << "Please, enter number of months: ";
    cin >> numberOfMonths;

    monthlyPayment = loanAmount / numberOfMonths;

    cout << "\nMonthly payment: " << monthlyPayment << endl;

    cout << endl
         << endl;

    return 0;
}