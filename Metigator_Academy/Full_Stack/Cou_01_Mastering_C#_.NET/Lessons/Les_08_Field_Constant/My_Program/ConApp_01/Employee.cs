namespace ConApp_01
{
    public class Employee
    {
        public const double TAX = 0.03;

        public string firstName;
        public string lastName;
        public double wage;
        public double loggedHours;

        public void getEmployeeInfo()
        {
            Console.WriteLine("-------------------------------------------");
            Console.Write("Please, enter your First Name: ");
            firstName = Console.ReadLine();

            Console.Write("Please, enter your Last Name: ");
            lastName = Console.ReadLine();

            Console.Write("Please, enter your Wage: ");
            wage = Convert.ToDouble(Console.ReadLine());

            Console.Write("Please, enter your Logged Hours: ");
            loggedHours = Convert.ToDouble(Console.ReadLine());

            var netSalary = wage * loggedHours - (wage * loggedHours * TAX);

            Console.WriteLine($"First Name: {firstName}");
            Console.WriteLine($"Last Name: {lastName}");
            Console.WriteLine($"Wage: {wage}");
            Console.WriteLine($"Logged Hours: {loggedHours}");
            Console.WriteLine($"Net Salary: {netSalary}");
            Console.WriteLine("-------------------------------------------");
        }

    }
}
