class Program
{
    public delegate bool Filter<T>(T n);

    static void Main()
    {
        IEnumerable<int> list_01 = new int[] { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };

        Console.WriteLine("\nInt Numbers:\n");
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

        IEnumerable<double> list_02 = new double[] { 1.5, 3.2, 5.1, 7.6, 9.7, 2.2, 4.4, 6.3, 8.2, 10.5 };

        Console.WriteLine("\nDouble Numbers:\n");
        Console.WriteLine("Numbers Less Than 06:");
        PrintNumbers(list_02, n => n < 6);

        Console.WriteLine("Numbers Less Than 09:");
        PrintNumbers(list_02, n => n < 9);

        Console.WriteLine("Numbers More Than 06:");
        PrintNumbers(list_02, n => n > 6);

        Console.WriteLine("Numbers More Than 09:");
        PrintNumbers(list_02, n => n > 9);

        Console.WriteLine("Even Numbers:");
        PrintNumbers(list_02, n => n % 2 == 0);

        Console.WriteLine("Odd Numbers:");
        PrintNumbers(list_02, n => n % 2 != 0);


        Console.ReadKey();
    }


    static void PrintNumbers<T>(IEnumerable<T> list, Filter<T> filter)
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


