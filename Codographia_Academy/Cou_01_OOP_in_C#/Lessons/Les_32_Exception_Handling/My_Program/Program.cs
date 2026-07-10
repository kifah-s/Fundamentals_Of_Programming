
int x = 7;
int y = 0;
int div = 0;

try
{
    div = x / y;
}
catch (Exception ex)
{
    //Console.WriteLine("Exception Found.");
    Console.WriteLine($"Exception is: {ex.Message}");
}
finally
{
    Console.WriteLine($"Result: {div}");
}


Console.ReadKey();