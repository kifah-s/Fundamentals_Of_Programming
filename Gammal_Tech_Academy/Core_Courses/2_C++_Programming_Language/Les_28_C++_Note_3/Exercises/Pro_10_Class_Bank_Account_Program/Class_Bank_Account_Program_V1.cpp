
//* Class Bank Account Program (Version 1).

/*
* Create a program with a class BankAccount that has private members accountNumber, accountHolder, and balance.
* Implement public methods setDetails to set account details and displayInfo to display the account information.

! Input:
! Please, enter Account Number: 12345
! Please, enter Account Holder Name: kifah saloum
! Please, enter Balance: 2000$

! Output:
! Account Number: 12345
! Account Holder Name: kifah saloum
! Balance: 2000$
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
    int accountNumber = 0, balance;
    string accountHolder;

public:
    // Setter.
    void setAccountNumber()
    {
        cout << "Please, enter Account Number: ";
        cin >> accountNumber;
    }

    void setAccountHolder()
    {
        cout << "Please, enter Account Holder: ";
        getline(cin, accountHolder);
    }

    void setBalance()
    {
        cout << "Please, enter Balance: ";
        cin >> balance;
    }

    // Getter.
    void getInfo()
    {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolder << endl;
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

// Account Details - Function.
void accountDetailsFun()
{
    BankAccount account_1;
    account_1.setAccountNumber();
    account_1.setAccountHolder();
    account_1.setBalance();
    account_1.getInfo();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    accountDetailsFun();

    cout << "\n"
         << endl;
}
//* End Function ..
