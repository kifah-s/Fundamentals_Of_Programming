using System;

// Provides us various methods to use in an array
using System.Linq;

namespace MyProgram
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // Note that we used System.Linq above.

            int[] numbers = { 51, -1, 2, 14, 18, 40, 178 };

            // Get the minimum element
            Console.WriteLine("Smallest  Element: " + numbers.Min());

            // Max() returns the largest number in array
            Console.WriteLine("Largest Element: " + numbers.Max());

            Console.ReadKey();
        }
    }
}
