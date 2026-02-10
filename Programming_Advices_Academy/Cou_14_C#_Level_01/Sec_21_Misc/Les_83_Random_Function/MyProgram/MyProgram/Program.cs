using System;

namespace MyProgram
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Random rnd = new Random();

            for (int j = 0; j < 4; j++)
            {
                Console.WriteLine(rnd.Next(10, 20)); // returns random integers >= 10 and < 20
            }

            Console.ReadKey();
        }
    }
}
