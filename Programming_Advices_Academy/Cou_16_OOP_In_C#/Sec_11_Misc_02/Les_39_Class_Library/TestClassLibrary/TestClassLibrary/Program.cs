using Library_02;
using Library1;
using System;

internal class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Hi");

        clsMath math = new clsMath();
        Console.WriteLine(math.Sum(1, 2));
        Console.WriteLine(math.Sum(1, 2, 3));


        clsSayHello sayHello = new clsSayHello();
        sayHello.SayHello_01();

        Console.ReadKey();
    }
}

