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
            // assigns default value 01/01/0001 00:00:00
            DateTime dt1 = new DateTime();
            Console.WriteLine(dt1);

            // assigns year, month, day
            DateTime dt2 = new DateTime(2023, 12, 31);
            Console.WriteLine(dt2);

            // assigns year, month, day, hour, min, seconds
            DateTime dt3 = new DateTime(2023, 12, 31, 5, 10, 20);
            Console.WriteLine(dt3);

            // assigns year, month, day, hour, min, seconds, UTC timezone
            DateTime dt4 = new DateTime(2023, 12, 31, 5, 10, 20, DateTimeKind.Utc);
            Console.WriteLine(dt4);



            Console.ReadKey();
        }
    }
}
