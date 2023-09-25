

// >>> Currency Converter Program ( Version 1 ) <<< */

/* >>> Currency converter software...

When traveling from one country to another, most captains need to change money from one currency to another.

Required: Write a program that asks the user to enter the amount of money, the country he wants to travel from, and the country he is heading to. The program converts the money into the currency of the country he is heading to and prints the transferred money for the user. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
int moneyTransferFun(int quaMon, int amoTra, int tF, int tT);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    int quantityOfMoney = 0, amountTransferred = 0;
    int travelFrom = 0, travelTo = 0;
    // ... End Variables ...

    cout << "Please Enter the amount of money you want to transfer: ";
    cin >> quantityOfMoney;

    cout << endl
         << "Please select country you want to travel \' FROM \': " << endl;
    cout << "1) Saudi Arabia" << endl
         << endl;
    cout << "Enter here: ";
    cin >> travelFrom;

    cout << endl
         << "Please select country you want to travel \' TO \': " << endl;
    cout << "1) Syria" << endl;
    cout << "2) Egypt" << endl
         << endl;
    cout << "Enter here: ";
    cin >> travelTo;

    cout << endl
         << "The amount is: ";

    // ... Functions ...
    amountTransferred = moneyTransferFun(quantityOfMoney, amountTransferred, travelFrom, travelTo);
    // ... End Functions ...

    cout << amountTransferred << endl
         << endl
         << endl;

    return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Currency Converter Program ( Version 1 ) .." << endl
         << endl;
}

// Money transfer / Function.
int moneyTransferFun(int quaMon, int amoTra, int tF, int tT)
{
    if (tF == 1 && tT == 1)
    {
        amoTra = quaMon * 3601;
    }
    if (tF == 1 && tT == 2)
    {
        amoTra = quaMon * 11.03;
    }
    return amoTra;
}
// ... End Functions ...