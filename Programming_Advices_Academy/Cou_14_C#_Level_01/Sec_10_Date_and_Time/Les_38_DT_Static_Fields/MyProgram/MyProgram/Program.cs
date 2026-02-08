using System;

namespace MyProgram
{
    internal class Program
    {
        static void Main(string[] args)
        {
            DateTime currentDateTime = DateTime.Now;  // returns current date and time
            Console.WriteLine("currentDateTime: " + currentDateTime);

            DateTime todaysDate = DateTime.Today; // returns today's date
            Console.WriteLine("Today: " + todaysDate);

            DateTime currentDateTimeUTC = DateTime.UtcNow; // returns current UTC date and time
            Console.WriteLine("currentDateTimeUTC: " + currentDateTimeUTC);

            DateTime maxDateTimeValue = DateTime.MaxValue; // returns max value of DateTime
            Console.WriteLine("maxDateTimeValue: " + maxDateTimeValue);

            DateTime minDateTimeValue = DateTime.MinValue; // returns min value of DateTime
            Console.WriteLine("minDateTimeValue: " + minDateTimeValue);

            Console.ReadKey();
        }
    }
}
