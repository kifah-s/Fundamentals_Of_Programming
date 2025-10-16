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

    float totalBill = 0, cashPaid = 0, remainder = 0;

    cout << "Please, enter a total bill: ";
    cin >> totalBill;
    
    cout << "Please, enter a cash paid: ";
    cin >> cashPaid;

    remainder = cashPaid - totalBill;

    cout << "\nRemainder: " << remainder << endl;

    cout << endl
         << endl;

    return 0;
}