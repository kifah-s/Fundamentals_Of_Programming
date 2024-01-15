

/* >>> Company Bank Account Program ( Version 1 ) <<< */

/* >>> Company bank account program:
All companies have their own bank account, and there are several employees to control this account.
The employee can add an amount, withdraw an amount, or display the value in the account.
Required: Write a program that includes a class for a bank account, and each employee has the right to control it according to his position in the company. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>
#include <utility>
#include <map>
#include <cstring>

using namespace std;

// ... Classes ...
// Create main class.
class Kifah_Company
{
public:
     static double Company_Bank_Account;
};

// Create class for deposit.
class Deposit : public Kifah_Company
{
public:
     void deposit(double x)
     {
          Company_Bank_Account += x;
     }
};

// Create class for Withdraw.
class Withdraw : public Kifah_Company
{
public:
     void withdraw(double x)
     {
          Company_Bank_Account -= x;
     }
};

// Create class for view.
class View : public Kifah_Company
{
public:
     void view()
     {
          cout << "The amount currently in the account is: " << Company_Bank_Account << "$";
     }
};

double Kifah_Company::Company_Bank_Account = 0;

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Company Bank Account Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Deposit an amount into the account.
     Deposit d1;
     d1.deposit(100);
     d1.deposit(100);

     // Withdraw an amount into the account.
     Withdraw w1;
     w1.withdraw(50);

     // View the amount in the account.
     View v1;
     v1.view();

     cout
         << endl
         << endl
         << endl;

     return 0;
}