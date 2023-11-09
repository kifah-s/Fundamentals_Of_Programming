

/* >>> Bank Account Class Program ( Version 2 ) <<< */

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
class BankAccount
{
private:
     static double interestRate;
     double balance;
     int accountNumber;

public:
     BankAccount(double initialBalance, int accountNum)
     {
          balance = initialBalance;
          accountNumber = accountNum;
     }

     void deposit(double amount)
     {
          balance += amount * (1 + interestRate);
     }

     void withdraw(double amount)
     {
          balance -= amount * (1 + interestRate);
     }

     static void setInterestRate(double rate)
     {
          interestRate = rate;
     }

     double getBalance()
     {
          return balance;
     }
};
double BankAccount::interestRate = 0.0;
// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Bank Account Class Program ( Version 2 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     BankAccount acc1(1000.0, 1234), acc2(500.0, 5678);

     BankAccount::setInterestRate(0.05);

     acc1.deposit(200.0);
     cout << "Account " << acc1.getBalance() << endl;

     acc2.withdraw(100.0);
     cout << "Account " << acc2.getBalance() << endl;

     cout << endl
          << endl
          << endl;

     return 0;
}