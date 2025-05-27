#include <iostream>
#include <cmath>

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

    float pen = 0, nic = 0, dim = 0, qua = 0, dol = 0;
    float totalPennies = 0, totalDollars = 0;

    cout << "Please, enter a Pennies: ";
    cin >> pen;

    cout << "Please, enter a Nickels: ";
    cin >> nic;

    cout << "Please, enter a Dimes: ";
    cin >> dim;

    cout << "Please, enter a Quarters: ";
    cin >> qua;

    cout << "Please, enter a Dollars: ";
    cin >> dol;

    totalPennies = (pen * 1) + (nic * 5) + (dim * 10) + (qua * 25) + (dol * 100);
    totalDollars = totalPennies / 100;

    cout << "\nTotal Pennies: " << totalPennies << endl;
    cout << "Total Dollars: " << totalDollars << endl;

    cout << endl
         << endl;

    return 0;
}