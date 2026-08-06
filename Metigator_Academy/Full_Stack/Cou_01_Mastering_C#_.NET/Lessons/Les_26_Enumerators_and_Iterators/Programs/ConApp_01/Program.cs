/*
string name_01 = "kifah";
string name_02 = "kifah";

Console.WriteLine(name_01 == name_02); // Content.
*/

Employee emp_01 = new Employee { ID = 1, Name = "kifah", Salary = 1500, Department = "IT" };
Employee emp_02 = new Employee { ID = 1, Name = "kifah", Salary = 1500, Department = "IT" };
Employee emp_03 = emp_01;

Console.WriteLine($"emp 1 == emp 2: {emp_01 == emp_02}"); // References.
Console.WriteLine($"emp 1 == emp 3: {emp_01 == emp_03}"); // References.
Console.WriteLine($"emp 1 Equals emp 2: {emp_01.Equals(emp_02)}"); // Content.

Console.ReadKey();


public class Employee
{
    public int ID { get; set; }
    public string Name { get; set; }
    public decimal Salary { get; set; }
    public string Department { get; set; }
}