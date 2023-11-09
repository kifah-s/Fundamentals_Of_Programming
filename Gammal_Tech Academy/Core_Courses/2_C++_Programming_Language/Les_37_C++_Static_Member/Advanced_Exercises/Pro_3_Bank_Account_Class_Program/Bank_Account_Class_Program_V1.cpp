

/* >>> Bank Account Class Program ( Version 1 ) <<< */

/* >>> Create a class called "BankAccount" that has a static member variable "interestRate" and two member variables "balance" and "accountNumber".
The class should have a constructor that sets the initial balance and account number, and member functions "deposit" and "withdraw" to modify the balance.
The "deposit" and "withdraw" functions should also update the balance based on the current "interestRate".
The "interestRate" should be set using a static member function called "setInterestRate".
Write a simple main function to test the "BankAccount" class by creating several objects and calling the member functions. <<< */

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
// Create BankAccount class.
class BankAccount
{
private:
     static double interestRate;
     double balance;
     int accountNumber;

public:
     BankAccount(int accNum, double bal)
     {
          accountNumber = accNum;
          balance = bal;
     }

     void setInterestRate(double x)
     {
          interestRate = x;
     }

     void deposit(double x)
     {
          balance += x;
     }

     void withdraw(double x)
     {
          balance -= x;
     }

     void view()
     {
          cout << balance;
     }
};
double BankAccount::interestRate = 0;

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Bank Account Class Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     BankAccount b1(1, 0);
     b1.setInterestRate(10);
     b1.deposit(100);
     b1.deposit(100);
     b1.deposit(100);

     b1.withdraw(50);

     b1.view();

     cout
         << endl
         << endl
         << endl;

     return 0;
}