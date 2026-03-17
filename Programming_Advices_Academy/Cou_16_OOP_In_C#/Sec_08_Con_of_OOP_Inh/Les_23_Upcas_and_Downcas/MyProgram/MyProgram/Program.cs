
using System;

public class clsPerson
{
    public string Name { get; set; }
    public int Age { get; set; }

    public void Greet()
    {
        Console.WriteLine($"Hi, my name is {Name} and I am {Age} years old.");
    }
}

public class clsEmployee : clsPerson
{
    public string Company { get; set; }
    public decimal Salary { get; set; }

    public void Work()
    {
        Console.WriteLine($"I work at {Company} and earn {Salary:C} per year.");
    }
}


internal class Program
{
    static void Main(string[] args)
    {
        // Upcasting
        clsEmployee employee = new clsEmployee { Name = "John", Age = 30, Company = "Acme Inc.", Salary = 50000 };
        clsPerson person = employee;
        person.Greet(); // Output: "Hi, my name is John and I am 30 years old."

        // Downcasting
        clsPerson person2 = new clsEmployee { Name = "Jane", Age = 25, Company = "XYZ Corp.", Salary = 60000 };
        clsEmployee employee2 = (clsEmployee)person2;
        employee2.Work(); // Output: "I work at XYZ Corp. and earn $60,000.00 per year."

        // Invalid downcasting - throws InvalidCastException at runtime
        //  Person person3 = new Person { Name = "Bob", Age = 40 };
        // Employee employee3 = (Employee)person3; // Runtime exception: InvalidCastException

        Console.ReadKey();
    }
}

