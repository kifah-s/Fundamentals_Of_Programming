

/* >>> Example 1 <<< */

#include <iostream>

using namespace std;

class GT_Bank_Account
{
public:
    static double balance;
};

class sales : public GT_Bank_Account
{
public:
    void deposit(double a)
    {
        balance += a;
    }
};

class bills : public GT_Bank_Account
{
public:
    void withdraw(double a)
    {
        balance -= a;
    }
};

class account : public GT_Bank_Account
{
public:
    void getBalance()
    {
        cout << balance << endl;
    }
};
double GT_Bank_Account::balance = 0;

int main()
{
    sales s;
    s.deposit(100);
    s.deposit(3500);

    bills b;
    b.withdraw(50);

    account a;
    a.getBalance();

    return 0;
}
