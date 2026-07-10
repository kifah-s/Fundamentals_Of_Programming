




Console.ReadKey();

public enum Counter
{
    Syria,
    Lebanon,
    USA,
    Spain,
    Japan
}

public class Employee
{
    public string Name { get; set; }
    public Counter Country { get; set; }
    public decimal Salary { get; set; }

    public Employee(string name, Counter country, decimal salary)
    {
        this.Name = name;
        this.Country = country;
        this.Salary = salary;
    }


}