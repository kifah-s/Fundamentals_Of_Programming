using Library_02;
using Library1;
using System;

internal class Program
{
    static void Main(string[] args)
    {
        clsMath math = new clsMath();

        Console.WriteLine(math.Sum(1, 1));
        Console.WriteLine(math.Sum(1, 2, 3));

        clsSayHello sayHello = new clsSayHello();
        sayHello.SayHello_01();

        Console.ReadLine();
    }
}

