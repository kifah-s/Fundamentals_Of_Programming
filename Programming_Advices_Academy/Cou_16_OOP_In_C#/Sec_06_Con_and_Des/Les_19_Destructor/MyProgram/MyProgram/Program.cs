using System;

namespace MyProgram
{
    class clsPerson
    {
        public clsPerson()
        {
            Console.WriteLine("Constructor called.");
        }

        // Destructor.
        ~clsPerson()
        {
            Console.WriteLine("Destructor called.");
        }
    }

    internal class Program
    {
        static void Main(string[] args)
        {
            // Creates object of Person.
            clsPerson p1 = new clsPerson();

            //Console.ReadKey();
        }
    }
}
