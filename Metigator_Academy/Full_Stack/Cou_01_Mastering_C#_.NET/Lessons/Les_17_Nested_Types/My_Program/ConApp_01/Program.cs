

Employee emp_01 = new Employee();
Console.WriteLine(emp_01.EmployeeInsurance.CompanyName);


Console.ReadKey();


/*
class A
{
    private int _X;

    class B
    {
        void Method()
        {
            A a = new A();
            a._X = 1;
        }
    }
}
*/

class Employee
{
    public int ID { get; set; }
    public string Name { get; set; }

    public class Insurance
    {
        public int PolicyID { get; set; }
        public string CompanyName { get; set; }
    }

    public Insurance EmployeeInsurance { get; set; }

    public Employee() => EmployeeInsurance = new Insurance { PolicyID = 1, CompanyName = "New Future." };

}



class Department
{
    public int ID { get; set; }
    public string Name { get; set; }
}