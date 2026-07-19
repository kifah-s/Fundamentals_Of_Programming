
/*
const double TAX = 0.03;


Console.Write("Please, enter your First Name: ");
var firstName = Console.ReadLine();

Console.Write("Please, enter your Last Name: ");
var lastName = Console.ReadLine();

Console.Write("Please, enter your Wage: ");
var wage = Convert.ToDouble(Console.ReadLine());

Console.Write("Please, enter your Logged Hours: ");
var loggedHours = Convert.ToDouble(Console.ReadLine());

var netSalary = wage * loggedHours - (wage * loggedHours * TAX);

Console.WriteLine($"First Name: {firstName}");
Console.WriteLine($"Last Name: {lastName}");
Console.WriteLine($"Wage: {wage}");
Console.WriteLine($"Logged Hours: {loggedHours}");
Console.WriteLine($"Net Salary: {netSalary}");
*/

// ----------------------------------------------------------------------------

/*
using ConApp_01;

Employee emp_01 = new Employee();
emp_01.getEmployeeInfo();
*/

// ----------------------------------------------------------------------------

/*
using ConApp_01;

Employee[] employees = new Employee[5];

employees[0] = new Employee();
employees[0].getEmployeeInfo();

employees[1] = new Employee();
employees[1].getEmployeeInfo();

employees[2] = new Employee();
employees[2].getEmployeeInfo();

employees[3] = new Employee();
employees[3] = new Employee();

employees[4].getEmployeeInfo();
employees[4].getEmployeeInfo();
*/

// ----------------------------------------------------------------------------

/*
using ConApp_01;

Employee[] employees = new Employee[5];

for (int i = 0; i < employees.Length; i++)
{
    employees[i] = new Employee();
    employees[i].getEmployeeInfo();
}
*/

// ----------------------------------------------------------------------------

/*
using ConApp_01;

Employee_02[] employees = new Employee_02[2];

for (int i = 0; i < employees.Length; i++)
{
    employees[i] = new Employee_02();

    Console.WriteLine("------------------------------------------------------");
    Console.WriteLine($"Employee{i + 1}: ");
    Console.Write("Please, enter your First Name: ");
    employees[i].firstName = Console.ReadLine();

    Console.Write("Please, enter your Last Name: ");
    employees[i].lastName = Console.ReadLine();

    Console.Write("Please, enter your Wage: ");
    employees[i].wage = Convert.ToDouble(Console.ReadLine());

    Console.Write("Please, enter your Logged Hours: ");
    employees[i].loggedHours = Convert.ToDouble(Console.ReadLine());
    Console.WriteLine("------------------------------------------------------");

    employees[i].netSalary = employees[i].wage * employees[i].loggedHours - (employees[i].wage * employees[i].loggedHours * Employee_02.TAX);
}

for (int i = 0; i < employees.Length; i++)
{
    Console.WriteLine("------------------------------------------------------");
    Console.WriteLine($"Employee{i + 1}: ");
    Console.WriteLine($"First Name: {employees[i].firstName}");
    Console.WriteLine($"Last Name: {employees[i].lastName}");
    Console.WriteLine($"Wage: {employees[i].wage}");
    Console.WriteLine($"Logged Hours: {employees[i].loggedHours}");
    Console.WriteLine($"Net Salary: {employees[i].netSalary}");
    Console.WriteLine("------------------------------------------------------");
}
*/

// ----------------------------------------------------------------------------

/*
using ConApp_01;

Employee_02[] employees = new Employee_02[2];

GetEmployeeInfo(employees);
PrintEmployeeInfo(employees);

void GetEmployeeInfo(Employee_02[] emp)
{
    for (int i = 0; i < emp.Length; i++)
    {
        emp[i] = new Employee_02();

        Console.WriteLine("------------------------------------------------------");
        Console.WriteLine($"Employee{i + 1}: ");
        Console.Write("Please, enter your First Name: ");
        emp[i].firstName = Console.ReadLine();

        Console.Write("Please, enter your Last Name: ");
        emp[i].lastName = Console.ReadLine();

        Console.Write("Please, enter your Wage: ");
        emp[i].wage = Convert.ToDouble(Console.ReadLine());

        Console.Write("Please, enter your Logged Hours: ");
        emp[i].loggedHours = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("------------------------------------------------------");

        emp[i].netSalary = emp[i].wage * emp[i].loggedHours - (emp[i].wage * emp[i].loggedHours * Employee_02.TAX);
    }
}

void PrintEmployeeInfo(Employee_02[] emp)
{
    for (int i = 0; i < emp.Length; i++)
    {
        Console.WriteLine("------------------------------------------------------");
        Console.WriteLine($"Employee{i + 1}: ");
        Console.WriteLine($"First Name: {emp[i].firstName}");
        Console.WriteLine($"Last Name: {emp[i].lastName}");
        Console.WriteLine($"Wage: {emp[i].wage}");
        Console.WriteLine($"Logged Hours: {emp[i].loggedHours}");
        Console.WriteLine($"Net Salary: {emp[i].netSalary}");
        Console.WriteLine("------------------------------------------------------");
    }
}
*/

// ----------------------------------------------------------------------------





Console.ReadKey();





