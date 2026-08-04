class Program
{
    static void Main()
    {
        Print(10);
        Print('k');
        Print("kifah");


        Console.ReadKey();
    }

    static void Print(int value)
    {
        Console.ForegroundColor = ConsoleColor.Red;
        Console.WriteLine(value);
    }

    static void Print(char value)
    {
        Console.ForegroundColor = ConsoleColor.Red;
        Console.WriteLine(value);
    }

    static void Print(string value)
    {
        Console.ForegroundColor = ConsoleColor.Red;
        Console.WriteLine(value);
    }
}