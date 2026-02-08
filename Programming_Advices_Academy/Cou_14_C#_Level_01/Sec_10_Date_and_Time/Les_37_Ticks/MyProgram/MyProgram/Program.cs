using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyProgram
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // Number of 100-nanosecond intervals that have elapsed
            // since January 1, 0001, at 00:00:00.000 in the Gregorian calendar. 

            DateTime dt = new DateTime();
            Console.WriteLine(DateTime.MinValue.Ticks); // min value of ticks
            Console.WriteLine(DateTime.MaxValue.Ticks); // max value of ticks


            Console.ReadKey();
        }
    }
}
