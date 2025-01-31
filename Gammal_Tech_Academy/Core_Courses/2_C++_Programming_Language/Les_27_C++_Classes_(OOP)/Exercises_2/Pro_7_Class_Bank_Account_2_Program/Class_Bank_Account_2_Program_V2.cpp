
//* Class Bank Account 2 Program (Version 2).

/*
* Extend the previous program to add a public method deposit to deposit money into the account and update the balance.

! Output:
! deposit successful: 500$.
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
    int accountNumber, balance, deposit;
    string accountHolder;

public:
    void setAccountNumber(int accNum)
    {
        accountNumber = accNum;
    }

    void setBalance(int bal)
    {
        balance = bal + deposit;
    }

    void setAccountHolder(string accHol)
    {
        accountHolder = accHol;
    }
    
    void setDeposit(int dep)
    {
        deposit = dep;
    }

    void getBankAccountDetails()
    {
        cout << "Deposit successful: " << deposit << "$" << endl;
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
    cout << "\n\nYou welcome in Class Bank Account 2 Program (Version 2) ..\n"
         << endl;
}

// Print Account Details - Function.
void printAccountDetailsFun()
{
    BankAccount account_1;
    account_1.setDeposit(500);
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
