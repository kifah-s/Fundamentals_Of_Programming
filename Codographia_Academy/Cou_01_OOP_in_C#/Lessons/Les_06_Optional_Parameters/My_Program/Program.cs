



SumNumbers(1);
SumNumbers(1, 2);



Console.ReadKey();


static void SumNumbers(int num1, int num2 = 0)
{
    int result = num1 + num2;
    Console.WriteLine($"{num1} + {num2}: {result}");
}