




Cashier c1 = new Cashier(new Cash());
c1.Checkout(99999.99m);

Cashier c2 = new Cashier(new Visa());
c2.Checkout(9555.99m);


Console.ReadKey();

interface IPayment
{
    void Pay(decimal amount);
}

class Cash : IPayment
{
    public void Pay(decimal amount)
    {
        Console.WriteLine($"Cash Payment: {Math.Round(amount, 2):N0}$");
    }
}

class Debit : IPayment
{
    public void Pay(decimal amount)
    {
        Console.WriteLine($"Debit Payment: {Math.Round(amount, 2):N0}$");
    }
}

class Visa : IPayment
{
    public void Pay(decimal amount)
    {
        Console.WriteLine($"Visa Payment: {Math.Round(amount, 2):N0}$");
    }
}

class Cashier
{
    private IPayment _Payment;

    public Cashier(IPayment payment)
    {
        _Payment = payment;
    }

    public void Checkout(decimal amount)
    {
        _Payment.Pay(amount);
    }
}