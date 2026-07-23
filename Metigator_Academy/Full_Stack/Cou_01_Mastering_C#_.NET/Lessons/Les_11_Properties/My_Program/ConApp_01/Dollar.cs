namespace ConApp_01
{
    public class Dollar
    {
        private decimal _Amount;

        public decimal Amount
        {
            get
            {
                return _Amount;
            }
            set
            {
                if (value < 0)
                {
                    _Amount = 0;
                }
                else
                {
                    _Amount = value;
                }
            }
        }


        public bool IsZeroProp => _Amount == 0;

        //public bool IsZeroFun() => _Amount == 0;

    }
}
