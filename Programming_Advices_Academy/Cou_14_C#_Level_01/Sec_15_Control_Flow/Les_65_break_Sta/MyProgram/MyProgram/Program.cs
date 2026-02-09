using System;

namespace MyProgram
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int i = 1;

            do
            {
                Console.WriteLine("C# while Loop: Iteration {0}", i);

                if (i == 3)
                {
                    break;
                }
                i++;
            } while (i <= 5);

            Console.ReadKey();
        }
    }
}
