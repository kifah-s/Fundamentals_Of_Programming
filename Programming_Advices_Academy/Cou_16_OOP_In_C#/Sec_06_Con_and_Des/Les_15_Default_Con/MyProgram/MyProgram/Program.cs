using System;

namespace MyProgram
{
    class clsPerson
    {
        public int id { get; set; }
        public string name { get; set; }
        public int age { get; set; }
    }

    internal class Program
    {
        static void Main(string[] args)
        {
            clsPerson person1 = new clsPerson();

            Console.WriteLine("ID: {0}", person1.id);
            Console.WriteLine("Name: {0}", person1.name);
            Console.WriteLine("Age: {0}", person1.age);

            Console.ReadLine();
        }
    }
}
