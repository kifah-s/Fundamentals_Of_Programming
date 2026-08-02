public class Employee
{
    public const int MinimumLoggedHours = 176;
    public const decimal OverTimeRate = 1.25m;

    public int ID { get; set; }

    public string Name { get; set; }

    public decimal LoggedHours { get; set; }

    public decimal Wage { get; set; }

    public virtual decimal Calculate()
    {
        return CalculateBaseSalary() + CalculateOverTime();
    }

    public decimal CalculateBaseSalary()
    {
        return LoggedHours * Wage;
    }

    public decimal CalculateOverTime()
    {
        var additionalHours = ((LoggedHours - MinimumLoggedHours) > 0 ? LoggedHours - MinimumLoggedHours : 0);
        return additionalHours * Wage * OverTimeRate;
    }

    public override string ToString()
    {
        return $"{GetType()}\n" +
               $"\nID: {ID}" +
               $"\nName: {Name}" +
               $"\nLogged Hours: {LoggedHours}" +
               $"\nWage: {Wage}" +
               $"\nBase Salary: {CalculateBaseSalary()}" +
               $"\nOver Time: {CalculateOverTime()}";
    }
}
