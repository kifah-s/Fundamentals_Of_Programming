public class Sales : Employee
{
    public decimal SalesVolume { get; set; }
    public decimal Commission { get; set; }


    private decimal CalculateBonus()
    {
        return SalesVolume * Commission;
    }

    public override decimal Calculate()
    {
        return base.Calculate() + CalculateBonus();
    }

    public override string ToString()
    {
        return base.ToString() +
            $"\nCommission: {Commission}" +
            $"\nBonus: {CalculateBonus()}" +
            $"\nNet Salary: {this.Calculate()}";
    }
}

