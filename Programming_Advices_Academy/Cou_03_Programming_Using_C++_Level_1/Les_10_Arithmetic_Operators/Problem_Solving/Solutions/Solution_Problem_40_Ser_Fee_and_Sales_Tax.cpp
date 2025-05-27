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

    float billValue = 0, totalBill = 0;

    cout << "Please, enter a Bill Value: ";
    cin >> billValue;

    totalBill = billValue * 1.1;
    totalBill = totalBill * 1.16;

    cout << "\nTotal: " << totalBill << endl;

    cout << endl
         << endl;

    return 0;
}