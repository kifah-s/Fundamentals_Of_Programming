class Program
{
    static void Main()
    {
        Action<string> action_01 = PrintName;
        Action<string, string> action_02 = PrintTwoName;
        Func<int, int, int> func = Add;
        Predicate<int> predicate = IsEven;


        action_01("kifah");
        action_02("kifah", "saloum");
        Console.WriteLine(func(1, 2));
        Console.WriteLine(predicate(2));


        Console.ReadKey();
    }


    static void PrintName(string name) => Console.WriteLine(name);

    static void PrintTwoName(string FName, string LName) => Console.WriteLine(FName + " " + LName);

    static int Add(int n1, int n2) => n1 + n2;

    static bool IsEven(int n) => n % 2 == 0;
}


