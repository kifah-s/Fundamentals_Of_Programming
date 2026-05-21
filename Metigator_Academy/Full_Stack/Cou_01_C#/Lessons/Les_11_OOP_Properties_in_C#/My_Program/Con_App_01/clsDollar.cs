namespace Con_App_01
{
    internal class clsDollar
    {
        private int _Amount;

        private int ProcessValue(int value) => (value < 0) ? 0 : value;

        public int Amount
        {
            get
            {
                return _Amount;
            }
            private set
            {
                _Amount = ProcessValue(value);
            }
        }

        public bool isZero => _Amount == 0;
        //{
        //    get
        //    {
        //        return (_Amount == 0);
        //    }
        //}

        //public int ConversionFactor { get; } = 25;
        public int ConversionFactor { get; set; } = 25;

        public void SetAmount(int value)
        {
            Amount = value;
        }

        public clsDollar()
        {

        }

        public clsDollar(int amount)
        {
            _Amount = ProcessValue(amount);
        }
    }
}
