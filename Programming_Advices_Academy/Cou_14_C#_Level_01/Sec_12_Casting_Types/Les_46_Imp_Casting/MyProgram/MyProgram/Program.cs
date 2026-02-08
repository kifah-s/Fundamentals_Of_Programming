using System;

namespace MyProgram
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int myInt = 17;
            double myDouble = myInt;       // Automatic casting: int to double

            Console.WriteLine(myInt);      // Outputs 17
            Console.WriteLine(myDouble);   // Outputs 17


            Console.ReadKey();
        }
    }
}
