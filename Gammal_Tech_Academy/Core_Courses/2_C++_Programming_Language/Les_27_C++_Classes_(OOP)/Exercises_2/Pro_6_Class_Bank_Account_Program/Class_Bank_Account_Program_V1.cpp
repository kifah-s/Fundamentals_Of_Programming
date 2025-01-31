
//* Class Bank Account Program (Version 1).

/*
* Create a program with a class BankAccount that has private members accountNumber, accountHolder, and balance,
* Implement public methods setAccountDetails to set the account details and displayAccountInfo to display account information.

! Output:
! Account Number: 12345
! Account Holder: kifah saloum
! Balance: 1000$
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>

using namespace std;

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Classes ..
class BankAccount
{
private:
    int accountNumber, balance;
    string accountHolder;

public:
    void setAccountNumber(int accNum)
    {
        accountNumber = accNum;
    }

    void setBalance(int bal)
    {
        balance = bal;
    }

    void setAccountHolder(string accHol)
    {
        accountHolder = accHol;
    }

    void getBankAccountDetails()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << "$" << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Bank Account Program (Version 1) ..\n"
         << endl;
}

// Print Account Details - Function.
void printAccountDetailsFun()
{
    BankAccount account_1;
    account_1.setAccountNumber(12345);
    account_1.setAccountHolder("kifah saloum");
    account_1.setBalance(1000);
    account_1.getBankAccountDetails();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    printAccountDetailsFun();

    cout << "\n"
         << endl;
}
//* End Function ..
