
Bank.CreateNewAccountStatic();

Bank b1 = new Bank();
b1.CreateNewAccountNotStatic();


Console.ReadKey();


public class Bank
{
    // Static Method.
    public static void CreateNewAccountStatic()
    {
        Console.WriteLine("New account has been created using static method.");
    }

    // Instance Method.
    public void CreateNewAccountNotStatic()
    {
        Console.WriteLine("New account has been created using NON static method.");
    }
}