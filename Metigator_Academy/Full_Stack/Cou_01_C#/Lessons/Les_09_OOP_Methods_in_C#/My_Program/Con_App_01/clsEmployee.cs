namespace Con_App_01
{
    public class clsEmployee
    {
        //public const double TAX = 0.03;
        public static double TAX = 0.03;

        public string firstName;
        public string lastName;
        public double wage;
        public double loggedHours;

        private double calculateSalary() => wage * loggedHours;
        private double calculateTax() => calculateSalary() * TAX;
        private double calculateNet() => calculateSalary() - calculateTax();

        public string printSlip()
        {
            return $"\nFirst Name: {firstName}" +
                   $"\nLast Name: {lastName}" +
                   $"\nWage: {wage}" +
                   $"\nLogged Hours: {loggedHours}" +
                   $"\nSalary: {calculateSalary()}$" +
                   $"\nTax: {TAX * 100}%, Amount: {calculateTax()}$" +
                   $"\nNet Salary: {calculateNet()}$";
        }
    }
}


