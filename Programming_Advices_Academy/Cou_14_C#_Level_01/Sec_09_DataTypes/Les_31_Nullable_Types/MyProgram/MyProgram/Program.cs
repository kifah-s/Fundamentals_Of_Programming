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
            //  Nullable<int> can be assigned any value.
            //  from -2147483648 to 2147483647, or a null value.

            Nullable<int> i = null;

            Console.WriteLine(i);

            Console.ReadKey();
        }
    }
}
