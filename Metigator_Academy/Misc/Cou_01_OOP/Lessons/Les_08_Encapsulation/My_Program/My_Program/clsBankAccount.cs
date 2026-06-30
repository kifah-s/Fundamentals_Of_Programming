namespace My_Program
{
    internal class clsBankAccount
    {
        //public string accountNumber;
        //public decimal accountBalance;


        //----------------------------------------------------------


        //private string _accountNumber;
        //private decimal _accountBalance;

        //public void SetAccountNumber(string accNum)
        //{
        //    _accountNumber = accNum;
        //}
        //public string GetAccountNumber()
        //{
        //    return _accountNumber;
        //}

        //public void SetAccountBalance(decimal accBal)
        //{
        //    _accountBalance = accBal;
        //}
        //public decimal GetAccountBalance()
        //{
        //    return _accountBalance;
        //}




        //public string AccountNumber
        //{
        //    set
        //    {
        //        _accountNumber = value;
        //    }
        //    get
        //    {
        //        return _accountNumber;
        //    }
        //}

        //public decimal AccountBalance
        //{
        //    set
        //    {
        //        _accountBalance = value;
        //    }
        //    get
        //    {
        //        return _accountBalance;
        //    }
        //}


        //----------------------------------------------------------


        private readonly string _accountNumber;
        private readonly decimal _accountBalance;

        public clsBankAccount(string accNum, decimal accBal)
        {
            _accountNumber = accNum;
            _accountBalance = accBal;
        }

        public string AccountNumber => _accountNumber;

        public decimal AccountBalance => _accountBalance;

    }
}