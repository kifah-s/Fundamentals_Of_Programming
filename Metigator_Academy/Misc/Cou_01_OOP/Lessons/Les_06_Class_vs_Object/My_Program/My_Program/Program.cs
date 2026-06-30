using System;

namespace My_Program
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Account a1;
            //a1 = new Account();

            Account a1 = new Account();
            a1.Balance = 100;

            Account a2 = new Account();
            a2.Balance = 200;

            Account a3 = new Account();
            a3.Balance = 300;

            Console.ReadKey();
        }
    }
}

class Account
{
    private decimal _balance;

    public decimal Balance
    {
        set
        {
            _balance = value;
        }
        get
        {
            return _balance;
        }
    }
}