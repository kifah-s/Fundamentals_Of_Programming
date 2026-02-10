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

            int[] numbers = { 20, 22, 19, 18, 1 };

            // Compute Count
            Console.WriteLine("Count : " + numbers.Count());

            // Compute Sum
            Console.WriteLine("Sum : " + numbers.Sum());

            // Compute the average
            Console.WriteLine("Average: " + numbers.Average());

            Console.ReadKey();
        }
    }
}
