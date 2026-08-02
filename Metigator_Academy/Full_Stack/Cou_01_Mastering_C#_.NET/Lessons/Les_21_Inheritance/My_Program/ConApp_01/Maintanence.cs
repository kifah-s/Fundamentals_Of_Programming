public class Maintanence : Employee
{
    public const decimal HardShip = 100m;


    public override decimal Calculate()
    {
        return base.Calculate() + HardShip;
    }

    public override string ToString()
    {
        return base.ToString() +
            $"\nHard Ship: {HardShip}" +
            $"\nNet Salary: {this.Calculate()}";
    }
}
