
IEnumerable<int> list_01 = new int[] { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };

Console.WriteLine("Numbers Less Than 06:");
PrintNumbersLessThan_06(list_01);

Console.WriteLine("Numbers Less Than 09:");
PrintNumbersLessThan_09(list_01);

Console.WriteLine("Numbers More Than 06:");
PrintNumbersMoreThan_06(list_01);

Console.WriteLine("Numbers More Than 09:");
PrintNumbersMoreThan_09(list_01);

Console.WriteLine("Even Numbers:");
PrintEvenNumbers(list_01);

Console.WriteLine("Odd Numbers:");
PrintOddNumbers(list_01);

Console.ReadKey();

static void PrintNumbersLessThan_06(IEnumerable<int> list)
{
    foreach (var item in list)
    {
        if (item < 6)
        {
            Console.Write($"{item} ");
        }
    }
    Console.WriteLine("\n------------------------");
}

static void PrintNumbersLessThan_09(IEnumerable<int> list)
{
    foreach (var item in list)
    {
        if (item < 9)
        {
            Console.Write($"{item} ");
        }
    }
    Console.WriteLine("\n------------------------");
}

static void PrintNumbersMoreThan_06(IEnumerable<int> list)
{
    foreach (var item in list)
    {
        if (item > 6)
        {
            Console.Write($"{item} ");
        }
    }
    Console.WriteLine("\n------------------------");
}

static void PrintNumbersMoreThan_09(IEnumerable<int> list)
{
    foreach (var item in list)
    {
        if (item > 9)
        {
            Console.Write($"{item} ");
        }
    }
    Console.WriteLine("\n------------------------");
}

static void PrintEvenNumbers(IEnumerable<int> list)
{
    foreach (var item in list)
    {
        if (item % 2 == 0)
        {
            Console.Write($"{item} ");
        }
    }
    Console.WriteLine("\n------------------------");
}

static void PrintOddNumbers(IEnumerable<int> list)
{
    foreach (var item in list)
    {
        if (item % 2 != 0)
        {
            Console.Write($"{item} ");
        }
    }
    Console.WriteLine("\n------------------------");
}