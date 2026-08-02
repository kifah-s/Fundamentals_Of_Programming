public class Devloper : Employee
{
    public bool TaskCompleted { get; set; }
    public const decimal Commission = 0.03m;


    private decimal CalculateBonus()
    {
        if (TaskCompleted)
        {
            return base.Calculate() * Commission;
        }

        return 0;
    }

    public override decimal Calculate()
    {
        return base.Calculate() + CalculateBonus();
    }

    public override string ToString()
    {
        return base.ToString() +
            $"\nTask Completed: {(TaskCompleted ? "Yes" : "NO")}" +
            $"\nBonus: {CalculateBonus()}" +
            $"\nNet Salary: {this.Calculate()}";
    }
}

