int number = 5;
Console.WriteLine("Non recursive way:");
Console.WriteLine($"Factorial {number}: {FactorialNonRecursive(number)}");

Console.WriteLine("----------------------------------------------------");

Console.WriteLine("Recursive way:");
Console.WriteLine($"Factorial {number}: {FactorialRecursive(number)}");


Console.ReadKey();

static int FactorialNonRecursive(int number)
{
    if (number == 0)
    {
        return 1;
    }

    int value = 1;
    for (int i = number; i > 0; i--)
    {
        value *= i;
    }

    return value;
}

static int FactorialRecursive(int number)
{
    if (number == 0)
    {
        return 1;
    }

    return number * FactorialRecursive(number - 1);
}