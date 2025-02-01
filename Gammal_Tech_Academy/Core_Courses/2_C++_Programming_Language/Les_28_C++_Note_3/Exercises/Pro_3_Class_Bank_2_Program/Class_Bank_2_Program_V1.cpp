
//* Class Bank 2 Program (Version 1).

/*
* Extend the previous program to add a public method deposit to deposit money into the account and display the updated balance. 

! Output:
! Your balance: 1000$
! Update balance: 800$
! Update balance: 1300$
! Update balance: 1100$
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
class Bank
{
private:
    int balance = 0;

public:
    void setBalance(int b)
    {
        balance = b;
        cout << "Your Balance: " << balance << "$" << endl;
    }

    void setWithdrawal(int w)
    {
        balance = balance - w;
        cout << "Update Balance: " << balance << "$" << endl;
    }
    
    void setDeposit(int d)
    {
        balance = balance + d;
        cout << "Update Balance: " << balance << "$" << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Bank 2 Program (Version 1) ..\n"
         << endl;
}

// Print Person Details - Function.
void printPersonDetailsFun()
{
    Bank user_1;
    user_1.setBalance(1000);
    user_1.setWithdrawal(200);
    user_1.setDeposit(500);
    user_1.setWithdrawal(300);
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    printPersonDetailsFun();

    cout << "\n"
         << endl;
}
//* End Function ..
