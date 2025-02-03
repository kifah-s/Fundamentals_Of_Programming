
//* Class Savings Account Program (Version 2).

/*
* Create a base class BankAccount with attributes accountNumber and balance and a method displayBalance to display the account balance.
* Derive a class SavingsAccount from BankAccount with an additional attribute interestRate and a method calculateInterest to display the interest earned.

! Output:
! Account number: 12345, Balance: 1000$
! Interest earned: 50$
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
public:
    int accountNumber;
    float balance;

    // Getter.
    void displayBalance()
    {
        cout << "Account Number: " << accountNumber << ", Balance: " << balance << "$" << endl;
    }
};

class SavingsAccount : public BankAccount
{
public:
    float interestRate;

    // Getter.
    void calculateInterest()
    {
        float interest = balance * interestRate / 100;
        cout << "Interest earned: " << interest << "$" << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Savings Account Program (Version 2) ..\n"
         << endl;
}

// Bank Account - Function.
void bankAccountFun()
{
    SavingsAccount account_1;
    account_1.accountNumber = 12345;
    account_1.balance = 1000;
    account_1.interestRate = 5;
    account_1.displayBalance();
    account_1.calculateInterest();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    bankAccountFun();

    cout << "\n"
         << endl;
}
//* End Function ..
