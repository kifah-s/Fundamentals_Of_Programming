




try
{
    BadMethod();
}
catch (ArgumentNullException ex)
{
    // Handle the exception.

    //Console.WriteLine($"You can not divide by zero.");
    Console.WriteLine($"{ex.Message}");
}
catch (DivideByZeroException ex)
{
    // Handle the exception.

    //Console.WriteLine($"You can not divide by zero.");
    Console.WriteLine($"{ex.Message}");
}
catch (Exception ex)
{
    // Handle the exception.

    //Console.WriteLine($"You can not divide by zero.");
    Console.WriteLine($"{ex.Message}");
}
finally
{
    Console.WriteLine("End.");
}




Console.ReadKey();



static int BadMethod()
{
    var x = 2;
    var y = 0;

    return x / y;
}
