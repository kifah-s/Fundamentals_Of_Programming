namespace ConApp_01
{
    public class Date
    {
        private readonly int _Day = 1;
        private readonly int _Month = 1;
        private readonly int _Year = 1;

        private static readonly int[] DaysToMonth365 = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        private static readonly int[] DaysToMonth366 = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        public Date(int day, int month, int year)
        {
            var isLeap = year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);

            if (year >= 1 && month >= 1 && month <= 12)
            {
                int[] days = isLeap ? DaysToMonth366 : DaysToMonth365;

                if (day >= 1 && day <= days[month])
                {
                    _Day = day;
                    _Month = month;
                    _Year = year;
                }
            }
        }

        //public Date(int month, int year)
        //{
        //    if (year >= 1 && month >= 1 && month <= 12)
        //    {
        //        _Month = month;
        //        _Year = year;
        //    }
        //}
        public Date(int month, int year) : this(01, month, year) { }

        //public Date(int year)
        //{
        //    if (year >= 1)
        //    {
        //        _Year = year;
        //    }
        //}
        public Date(int year) : this(01, 01, year) { }



        public string GetDate()
        {
            return $"{_Day.ToString().PadLeft(2, '0')} / {_Month.ToString().PadLeft(2, '0')} / {_Year.ToString().PadLeft(4, '0')}";
        }
    }
}
