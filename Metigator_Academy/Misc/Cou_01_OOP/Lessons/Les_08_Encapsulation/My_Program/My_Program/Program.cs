using System;

namespace My_Program
{
    internal class Program
    {
        static void Main(string[] args)
        {

            //clsBankAccount account_01 = new clsBankAccount();

            //account_01.accountNumber = "A_123";
            //account_01.accountBalance = 1000;

            //-------------------------------------------------

            //clsBankAccount account_01 = new clsBankAccount();

            //account_01.SetAccountNumber("A_123");
            //account_01.SetAccountBalance(1000);

            //Console.WriteLine("Account Number: " + account_01.GetAccountNumber());
            //Console.WriteLine("Account Balance: " + account_01.GetAccountBalance());





            //account_01.AccountNumber = "A_123";
            //account_01.AccountBalance = 1000;

            //Console.WriteLine($"Account Number: {account_01.AccountNumber}");
            //Console.WriteLine($"Account Balance: {account_01.AccountBalance}");

            //-------------------------------------------------

            clsBankAccount account_01 = new clsBankAccount("A_123", 1000);

            Console.WriteLine($"Account Number: {account_01.AccountNumber}");
            Console.WriteLine($"Account Balance: {account_01.AccountBalance}");


            Console.ReadLine();
        }
    }
}
