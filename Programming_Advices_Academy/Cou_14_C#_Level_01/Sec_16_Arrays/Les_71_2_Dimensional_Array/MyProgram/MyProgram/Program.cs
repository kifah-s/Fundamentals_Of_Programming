using System;

namespace MyProgram
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // int[,] x = new int[2, 3];

            // int[,] x = { { 1, 2, 3 }, { 3, 4, 5 } };

            // int[,] x = new int[2, 3] { { 1, 2, 3 }, { 3, 4, 5 } };

            //initializing 2D array
            int[,] numbers = { { 12, 13 }, { 55, 77 } };

            // access first element from the first row
            Console.WriteLine("Element at index [0, 0] : " + numbers[0, 0]);

            // access first element from second row
            Console.WriteLine("Element at index [1, 0] : " + numbers[1, 0]);

            Console.ReadKey();
        }
    }
}
