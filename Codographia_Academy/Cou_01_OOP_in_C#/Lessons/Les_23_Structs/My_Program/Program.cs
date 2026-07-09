

Employee employee_01 = new Employee();
employee_01.EmployeeName = "kifah";
employee_01.EmployeeNumber = 1;
employee_01.PrintEmployeeInfo();


Console.WriteLine("--------------------------------------");


Employee employee_02 = new Employee("saloum", 2);
employee_02.PrintEmployeeInfo();


Console.WriteLine("--------------------------------------");



Console.ReadKey();



public struct Employee
{
    public string EmployeeName { get; set; }
    public int EmployeeNumber { get; set; }

    public Employee(string name, int number)
    {
        EmployeeName = name;
        EmployeeNumber = number;
    }

    public void PrintEmployeeInfo()
    {
        Console.WriteLine($"Employee Name: {EmployeeName}");
        Console.WriteLine($"Employee Number: {EmployeeNumber}");
    }
}
