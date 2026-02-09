using System;

namespace MyProgram
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int number = 0;
            bool isEven = true;

            Console.Write("Please enter a number: ");
            number = Convert.ToInt32(Console.ReadLine());

            // if (number % 2 == 0)
            // {
            //     isEven = true;
            // }
            // else
            // {
            //     isEven = false;
            // }

            isEven = (number % 2 == 0) ? true : false;

            Console.WriteLine("{0} is even: {1}", number, isEven);

            Console.ReadKey();
        }
    }
}
