using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyProgram
{
    internal class Program
    {
        struct stStudent
        {
            public string FirstName;
            public string LastName;
        }

        static void Main(string[] args)
        {
            // A struct object can be created with or without the new operator,
            // same as primitive type variables.

            stStudent Student;
            Student.FirstName = "Mohammed";
            Student.LastName = "Abu-Hadhoud";
            Console.WriteLine(Student.FirstName);
            Console.WriteLine(Student.LastName);

            stStudent Student2 = new stStudent();
            Student2.FirstName = "Ali";
            Student2.LastName = "Ahmed";
            Console.WriteLine(Student2.FirstName);
            Console.WriteLine(Student2.LastName);

            Console.ReadKey();
        }
    }
}
