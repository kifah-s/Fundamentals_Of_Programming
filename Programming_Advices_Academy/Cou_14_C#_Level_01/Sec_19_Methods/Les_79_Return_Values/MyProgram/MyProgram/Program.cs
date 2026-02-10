using System;

namespace MyProgram
{
    internal class Program
    {
        static string GetMyName()
        {
            return "Mohammed-AbuHadhoud";
        }

        static void Main(string[] args)
        {
            Console.WriteLine("My Name is: {0}", GetMyName());
            Console.WriteLine("My Name is: " + GetMyName());

            Console.ReadKey();
        }
    }
}
