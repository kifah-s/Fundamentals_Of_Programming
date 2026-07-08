


Company.CompanyName = "New Future";
Company.CompanyLocation = "Swida";


Console.WriteLine(Company.CompanyName);
Console.WriteLine(Company.CompanyLocation);


Console.ReadKey();

/*
    1. Only static members allowed.
    2. cannot be instantiated.
    3. Is sealed by default.
    4. cannot contain constructor.
*/


public static class Company
{
    public static string CompanyName;
    public static string CompanyLocation;
}