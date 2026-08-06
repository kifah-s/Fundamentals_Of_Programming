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

    public override bool Equals(object? obj)
    {
        if (obj == null || !(obj is Employee))
        {
            return false;
        }

        Employee emp = obj as Employee;

        return this.ID == emp.ID
        && this.Name == emp.Name
        && this.Salary == emp.Salary
        && this.Department == emp.Department;
    }

    public static bool operator ==(Employee a, Employee b) => a.Equals(b);
    public static bool operator !=(Employee a, Employee b) => a.Equals(b);


    public override int GetHashCode()
    {
        int hash = 13;

        hash = (hash * 7) + ID.GetHashCode();
        hash = (hash * 7) + Name.GetHashCode();
        hash = (hash * 7) + Salary.GetHashCode();
        hash = (hash * 7) + Department.GetHashCode();

        return hash;
    }

}