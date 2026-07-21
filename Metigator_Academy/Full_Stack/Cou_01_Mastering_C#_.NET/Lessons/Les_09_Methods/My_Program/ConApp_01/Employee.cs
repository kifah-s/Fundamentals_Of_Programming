namespace ConApp_01
{
    public class Employee
    {
        public const double TAX = 0.03;

        public string FName;
        public string LName;
        public double Wage;
        public double LoggedHours;

        private double CalculateSalary() => Wage * LoggedHours;
        private double CalculateTAX() => CalculateSalary() * TAX;
        private double CalculateNetSalary() => CalculateSalary() - CalculateTAX();

        public string PrintSlip()
        {
            return "\n-----------------------------------------" +
            $"\nFirst Name: {FName}" +
            $"\nLast Name: {LName}" +
            $"\nWage: {Wage}" +
            $"\nLogged Hours: {LoggedHours}" +
            $"\nSalary: {CalculateSalary()}" +
            $"\nTax: ({TAX * 100}%), Amount: ${CalculateTAX()}" +
            $"\nNet Salary: {CalculateNetSalary()}" +
            "\n-----------------------------------------";
        }
    }
}
