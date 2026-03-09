using System;

namespace MyProgram
{
    public class clsPerson
    {
        // Fileds.
        public string FirstName;
        public string LastName;

        // Method.
        public string FullName()
        {
            return FirstName + ' ' + LastName;
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            // Create object from class.
            clsPerson Person1 = new clsPerson();
            Console.WriteLine("Accessing Object 1 (Person 1):");
            Person1.FirstName = "Kifah";
            Person1.LastName = "Saloum";
            Console.WriteLine(Person1.FullName());

            // Create another object from class.
            clsPerson Person2 = new clsPerson();
            Console.WriteLine("Accessing Object 2 (Person 2):");
            Person2.FirstName = "ShoSho";
            Person2.LastName = "Saloum";
            Console.WriteLine(Person2.FullName());
        }
    }
}
