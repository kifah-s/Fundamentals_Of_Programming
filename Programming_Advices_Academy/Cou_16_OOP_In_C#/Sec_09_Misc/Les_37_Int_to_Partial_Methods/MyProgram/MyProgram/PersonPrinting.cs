using System;

namespace MyProgram
{
    public partial class Person
    {
        partial void PrintAge()
        {
            //Console.WriteLine("Current age: {0}", age);
            Console.WriteLine($"Current age: {age}");
        }
    }
}
