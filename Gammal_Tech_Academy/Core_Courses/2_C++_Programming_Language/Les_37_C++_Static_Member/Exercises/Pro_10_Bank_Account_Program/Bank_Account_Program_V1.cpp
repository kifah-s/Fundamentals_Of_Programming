
//* Bank Account Program (Version 1).

/*
* Create a program with a class GT_Bank_Account to represent a bank account.
* The class has a static variable balance to store the account balance.
* Implement two derived classes sales and bills from the base class GT_Bank_Account.
* The sales class should have a method deposit to add money to the balance,
* and the bills class should have a method withdraw to subtract money from the balance.
* Additionally, create another derived class accountant with a method getBalance to display the current balance.
* Demonstrate the usage of these classes in the main function by creating objects,
* making deposits and withdrawals, and printing the final balance.

! Output:
! Balance: 3550
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

//* Class ..
class GT_Bank_Account
{
private:
public:
    static float balance;
};

class Sales : public GT_Bank_Account
{
private:
public:
    void deposit(float x)
    {
        balance = balance + x;
    }
};

class Bills : public GT_Bank_Account
{
private:
public:
    void pull(float x)
    {
        balance = balance - x;
    }
};

class Accountant : public GT_Bank_Account
{
private:
public:
    void getBalance()
    {
        cout << "Balance: " << balance << endl;
    }
};

float GT_Bank_Account::balance = 0.0;
//* End Class ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Bank Account Program (Version 1) ..\n"
         << endl;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.

    // Call Functions.
    printWelcomeMessageFun();

    Sales s1;
    s1.deposit(1000);

    Bills b1;
    b1.pull(500);

    Accountant a1;
    a1.getBalance();

    cout << "\n"
         << endl;
}
//* End Function ..
