




Print(1);
Print('k');
Print("kifah");
Sum(1, 2);
Sum(1.5, 2.5);

Console.ReadKey();


static void Print<T>(T value)
{
    Console.WriteLine($"Value Type: {typeof(T)}");
    Console.WriteLine(value);
    Console.WriteLine("------------------");
}


static void Sum<T>(T value01, T value02)
{
    Console.WriteLine($"Value Type: {typeof(T)}");
    Console.WriteLine((dynamic)value01 + (dynamic)value02);
    Console.WriteLine("------------------");
}

