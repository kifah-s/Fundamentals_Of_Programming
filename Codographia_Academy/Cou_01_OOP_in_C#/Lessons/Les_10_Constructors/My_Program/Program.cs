

BankAccount account_01 = new BankAccount();
BankAccount account_02 = new BankAccount("Bemo");
account_02.PrintInfo();


Console.ReadKey();



public class BankAccount
{
    public string BankName { get; set; }

    public BankAccount()
    {
        Console.WriteLine("Constructor is called.");
    }

    public BankAccount(string bankName)
    {
        BankName = bankName;
    }

    public void PrintInfo()
    {
        Console.WriteLine($"Bank Name: {BankName}");
    }
}