
//* Class Bank Program (Version 1).

/*
* Create a program with a class Bank that has private members balance,
* Implement public methods setBalance to set the initial balance and withdraw to withdraw an amount,
* Display the updated balance after each withdrawal.

! Output:
! Your balance: 1000$
! Update balance: 800$
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
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Bank Program (Version 1) ..\n"
         << endl;
}

// Print Person Details - Function.
void printPersonDetailsFun()
{
    Bank user_1;
    user_1.setBalance(1000);
    user_1.setWithdrawal(200);
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
