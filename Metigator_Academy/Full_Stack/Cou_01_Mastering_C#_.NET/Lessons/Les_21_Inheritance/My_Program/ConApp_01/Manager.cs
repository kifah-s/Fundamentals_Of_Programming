public class Manager : Employee
{
    public const decimal AllowanceRate = 0.05m;

    public decimal CalculateAllowance()
    {
        return base.Calculate() * AllowanceRate;
    }

    public override decimal Calculate()
    {
        return base.Calculate() + CalculateAllowance();
    }

    public override string ToString()
    {
        return base.ToString() +
            $"\nAllowance: {CalculateAllowance()}" +
            $"\nNet Salary: {this.Calculate()}";
    }
}
