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
            DateTime dt1 = new DateTime();
            dt1 = DateTime.Now;

            Console.WriteLine(dt1);

            Console.ReadKey();
        }
    }
}
