class Program
{
    public delegate bool Filter(int n);

    static void Main()
    {
        IEnumerable<int> list_01 = new int[] { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };

        Console.WriteLine("Numbers Less Than 06:");
        PrintNumbers(list_01, n => n < 6);

        Console.WriteLine("Numbers Less Than 09:");
        PrintNumbers(list_01, n => n < 9);

        Console.WriteLine("Numbers More Than 06:");
        PrintNumbers(list_01, n => n > 6);

        Console.WriteLine("Numbers More Than 09:");
        PrintNumbers(list_01, n => n > 9);

        Console.WriteLine("Even Numbers:");
        PrintNumbers(list_01, n => n % 2 == 0);

        Console.WriteLine("Odd Numbers:");
        PrintNumbers(list_01, n => n % 2 != 0);


        Console.ReadKey();
    }


    static void PrintNumbers(IEnumerable<int> list, Filter filter)
    {
        foreach (var item in list)
        {
            if (filter(item))
            {
                Console.Write($"{item} ");
            }
        }
        Console.WriteLine("\n------------------------");
    }
}


