
//* Derive Savings Account Program (Version 1).

/*
* Create a base class BankAccount with attributes accountNumber and balance and a method displayBalance to display the account balance.
* Derive a class SavingsAccount from BankAccount with an additional attribute interestRate and a method calculateInterest to display the interest earned.

! Output:
! Account Number: 12345, Balance: 1000$
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
protected:
    int accountNumber;
    float balance;

public:
    // Setter.
    void setAccountNumber(int an)
    {
        accountNumber = an;
    }

    void setBalance(float b)
    {
        balance = b;
    }

    // Getter.
    void displayBalance()
    {
        cout << "Account Number: " << accountNumber << ", Balance: " << balance << "$." << endl;
    }
};

class SavingsAccount : public BankAccount
{
private:
    float interestRate;

public:
    // Setter.
    void setInterestRate(float ir)
    {
        interestRate = ir / 100;
    }

    // Getter.
    void calculateInterest()
    {
        float interestAmount = balance * interestRate;
        cout << "Interest earned: " << interestAmount << "$." << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Derive Savings Account Program (Version 1) ..\n"
         << endl;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    SavingsAccount s1;
    s1.setAccountNumber(12345);
    s1.setBalance(1000);
    s1.displayBalance();
    s1.setInterestRate(5);
    s1.calculateInterest();


    cout << "\n"
         << endl;
}
//* End Function ..
