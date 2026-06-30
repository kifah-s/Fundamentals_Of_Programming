using System;

namespace My_Program
{
    internal class Program
    {
        static void Main(string[] args)
        {

            //SavingAccount account_01 = new SavingAccount();
            IBankAccount account_01 = new SavingAccount();

            account_01.AccountNumber = "A_123";
            account_01.AccountBalance = 5000;

            account_01.Deposit(100);

            Console.WriteLine(account_01.AccountBalance);



            Console.ReadKey();

        }
    }



    //public abstract class BankAccount
    //{
    //    public string AccountNumber { get; set; }
    //    public decimal AccountBalance { get; set; }


    //    public abstract void Deposit(decimal amount);

    //    public abstract void Withdraw(decimal amount);
    //}

    //public class CheckingAccount : BankAccount
    //{
    //    private const decimal dailyWithdrawalLimit = 5000;

    //    public override void Deposit(decimal amount)
    //    {
    //        if (amount <= 0)
    //        {
    //            throw new InvalidOperationException();
    //        }

    //        AccountBalance += amount;
    //    }

    //    public override void Withdraw(decimal amount)
    //    {
    //        if (amount <= 0)
    //        {
    //            throw new InvalidOperationException();
    //        }

    //        if (amount > dailyWithdrawalLimit)
    //        {
    //            throw new InvalidOperationException();
    //        }

    //        AccountBalance -= amount;
    //    }
    //}

    //public class SavingAccount : BankAccount
    //{
    //    private const decimal dailyWithdrawalLimit = 2000;

    //    public override void Deposit(decimal amount)
    //    {
    //        if (amount <= 0)
    //        {
    //            throw new InvalidOperationException();
    //        }

    //        AccountBalance += amount;
    //    }

    //    public override void Withdraw(decimal amount)
    //    {
    //        if (amount <= 0)
    //        {
    //            throw new InvalidOperationException();
    //        }

    //        if (amount > dailyWithdrawalLimit)
    //        {
    //            throw new InvalidOperationException();
    //        }

    //        AccountBalance -= amount;
    //    }
    //}


    //-------------------------------------------------------------------------------


    public interface IBankAccount
    {
        string AccountNumber { get; set; }
        decimal AccountBalance { get; set; }


        void Deposit(decimal amount);

        void Withdraw(decimal amount);
    }

    public class CheckingAccount : IBankAccount
    {
        private const decimal dailyWithdrawalLimit = 5000;

        public string AccountNumber { get; set; }
        public decimal AccountBalance { get; set; }

        public void Deposit(decimal amount)
        {
            if (amount <= 0)
            {
                throw new InvalidOperationException();
            }

            AccountBalance += amount;
        }

        public void Withdraw(decimal amount)
        {
            if (amount <= 0)
            {
                throw new InvalidOperationException();
            }

            if (amount > dailyWithdrawalLimit)
            {
                throw new InvalidOperationException();
            }

            AccountBalance -= amount;
        }
    }

    public class SavingAccount : IBankAccount
    {
        private const decimal dailyWithdrawalLimit = 2000;

        public string AccountNumber { get; set; }
        public decimal AccountBalance { get; set; }

        public void Deposit(decimal amount)
        {
            if (amount <= 0)
            {
                throw new InvalidOperationException();
            }

            AccountBalance += amount;
        }

        public void Withdraw(decimal amount)
        {
            if (amount <= 0)
            {
                throw new InvalidOperationException();
            }

            if (amount > dailyWithdrawalLimit)
            {
                throw new InvalidOperationException();
            }

            AccountBalance -= amount;
        }
    }
}
