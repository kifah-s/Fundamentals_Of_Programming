

/* >>> Company Bank Account Program ( Version 2 ) <<< */

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
class BankAccount
{
private:
     string name;
     int balance;

public:
     BankAccount(string name, int balance)
     {
          this->name = name;
          this->balance = balance;
     }

     void deposit(int amount)
     {
          balance += amount;
     }

     void withdraw(int amount)
     {
          balance -= amount;
     }

     int get_balance()
     {
          return balance;
     }
};

class Employee
{
public:
     virtual void operate_bank_account(BankAccount *account) = 0;
};

class Manager : public Employee
{
public:
     void operate_bank_account(BankAccount *account) override
     {
          cout << "مدير الحساب يقوم بإيداع مبلغ 1000 جنيه" << endl;
          account->deposit(1000);
     }
};

class Accountant : public Employee
{
public:
     void operate_bank_account(BankAccount *account) override
     {
          cout << "محاسب الحساب يقوم بسحب مبلغ 500 جنيه" << endl;
          account->withdraw(500);
     }
};
// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Company Bank Account Program ( Version 2 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // إنشاء حساب بنكي للشركة
     BankAccount bank_account("شركة مصرية", 10000);

     // إنشاء مدير وموظف محاسب
     Manager manager;
     Accountant accountant;

     // السماح للمدير بالتحكم في الحساب
     manager.operate_bank_account(&bank_account);

     // طباعة قيمة الحساب بعد إجراء العملية
     cout << "قيمة الحساب: " << bank_account.get_balance() << endl;

     // السماح للموظف المحاسب بالتحكم في الحساب
     accountant.operate_bank_account(&bank_account);

     // طباعة قيمة الحساب بعد إجراء العملية
     cout << "قيمة الحساب: " << bank_account.get_balance() << endl;

     cout << endl
          << endl
          << endl;

     return 0;
}