


using ConApp_01;

Employee[] emps = new Employee[2];

GetEmployeeInfo(emps);
PrintEmployeeInfo(emps);


Console.ReadKey();


void GetEmployeeInfo(Employee[] emps)
{
    for (int i = 0; i < emps.Length; i++)
    {
        Console.WriteLine("-----------------------------------------");
        Console.WriteLine($"Employee {i + 1}");

        emps[i] = new Employee();

        Console.Write("First Name: ");
        emps[i].FName = Console.ReadLine();

        Console.Write("Last Name: ");
        emps[i].LName = Console.ReadLine();

        Console.Write("Wage: ");
        emps[i].Wage = Convert.ToDouble(Console.ReadLine());

        Console.Write("Logged Hours: ");
        emps[i].LoggedHours = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("-----------------------------------------");
    }
}

void PrintEmployeeInfo(Employee[] emps)
{
    for (int i = 0; i < emps.Length; i++)
    {
        Console.WriteLine($"\nEmployee {i + 1}");
        Console.WriteLine(emps[i].PrintSlip());
    }
}


