namespace Con_App_01
{
    public class clsDate
    {
        private static readonly int[] _DaysToMonth365 = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        private static readonly int[] _DaysToMonth366 = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        readonly int _Day = 01;
        readonly int _Month = 01;
        readonly int _Year = 0001;

        public clsDate(int day, int month, int year)
        {
            bool isLeap = (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);

            if (year >= 1 && year <= 9999 && month >= 1 && month <= 12)
            {
                int[] days = isLeap ? _DaysToMonth366 : _DaysToMonth365;

                if (day >= 1 && day <= days[month])
                {
                    _Day = day;
                    _Month = month;
                    _Year = year;
                }
            }
        }

        public clsDate(int month, int year) : this(01, month, year)
        {

        }

        public clsDate(int year) : this(01, 01, year)
        {

        }

        public string getDate()
        {
            return $"{_Day.ToString().PadLeft(2, '0')}/{_Month.ToString().PadLeft(2, '0')}/{_Year.ToString().PadLeft(4, '0')}";
        }
    }
}