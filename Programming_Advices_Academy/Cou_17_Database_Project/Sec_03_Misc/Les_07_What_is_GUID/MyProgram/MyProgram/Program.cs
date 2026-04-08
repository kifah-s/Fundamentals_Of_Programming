using System;

namespace MyProgram
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //for (int i = 1; i <= 10; i++)
            //{
            //    Guid GuidNumber = Guid.NewGuid();
            //    Console.WriteLine(GuidNumber);
            //}

            Console.WriteLine(Guid.NewGuid());

            Console.ReadKey();
        }
    }
}
