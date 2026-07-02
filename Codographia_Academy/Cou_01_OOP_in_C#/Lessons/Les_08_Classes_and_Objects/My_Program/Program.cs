

//Person person_01 = new Person();
//person_01.FirstName = "Kifah";
//person_01.LastName = "Saloum";
//person_01.PhoneNumber = "0998621421";
//person_01.Country = "Swiada";
//Console.WriteLine($"Person 01 - First name: {person_01.FirstName}");
//Console.WriteLine($"Person 01 - Last name: {person_01.LastName}");
//Console.WriteLine($"Person 01 - Phone number: {person_01.PhoneNumber}");
//Console.WriteLine($"Person 01 - Country: {person_01.Country}");

//Console.WriteLine("--------------------------------------------");

//Person person_02 = new Person();
//person_02.FirstName = "Ashraf";
//person_02.LastName = "Koroune";
//person_02.PhoneNumber = "123456789";
//person_02.Country = "Swiada";
//Console.WriteLine($"Person 02 - First name: {person_02.FirstName}");
//Console.WriteLine($"Person 02 - Last name: {person_02.LastName}");
//Console.WriteLine($"Person 02 - Phone number: {person_02.PhoneNumber}");
//Console.WriteLine($"Person 02 - Country: {person_02.Country}");

//---------------------------------------------------------------------------------

//Employee employee_01 = new Employee();
//employee_01.FirstName = "Kifah";
//employee_01.LastName = "Saloum";
//employee_01.PhoneNumber = "0998621421";
//employee_01.Country = "Swiada";
//Console.WriteLine($"Employee 01 - First name: {employee_01.FirstName}");
//Console.WriteLine($"Employee 01 - Last name: {employee_01.LastName}");
//Console.WriteLine($"Employee 01 - Phone number: {employee_01.PhoneNumber}");
//Console.WriteLine($"Employee 01 - Country: {employee_01.Country}");

//Console.WriteLine("--------------------------------------------");

//Employee employee_02 = new Employee();
//employee_02.FirstName = "Ashraf";
//employee_02.LastName = "Koroune";
//employee_02.PhoneNumber = "123456789";
//employee_02.Country = "Swiada";
//Console.WriteLine($"Employee 02 - First name: {employee_02.FirstName}");
//Console.WriteLine($"Employee 02 - Last name: {employee_02.LastName}");
//Console.WriteLine($"Employee 02 - Phone number: {employee_02.PhoneNumber}");
//Console.WriteLine($"Employee 02 - Country: {employee_02.Country}");

//---------------------------------------------------------------------------------

//Employee employee_01 = new Employee();
//employee_01.FirstName = "Kifah";
//employee_01.LastName = "Saloum";
//employee_01.PhoneNumber = "0998621421";
//employee_01.Country = "Swiada";

//employee_01.PrintEmployeeInfo();


//---------------------------------------------------------------------------------





Console.ReadKey();


//class Person
//{
//    // Variables.
//    string firstName;
//    string lastName;
//    string phoneNumber;
//    string country;


//    // Property.
//    public string FirstName
//    {
//        get
//        {
//            return firstName;
//        }
//        set
//        {
//            firstName = value;
//        }
//    }
//    public string LastName
//    {
//        get
//        {
//            return lastName;
//        }
//        set
//        {
//            lastName = value;
//        }
//    }
//    public string PhoneNumber
//    {
//        get
//        {
//            return phoneNumber;
//        }
//        set
//        {
//            phoneNumber = value;
//        }
//    }
//    public string Country
//    {
//        get
//        {
//            return country;
//        }
//        set
//        {
//            country = value;
//        }
//    }
//}

//class Employee
//{
//    // Property.
//    public string FirstName { get; set; }
//    public string LastName { get; set; }
//    public string PhoneNumber { get; set; }
//    public string Country { get; set; }
//}


class Employee
{
    // Property.
    public string FirstName { get; set; }
    public string LastName { get; set; }
    public string PhoneNumber { get; set; }
    public string Country { get; set; }


    // Methods.
    public void PrintEmployeeInfo()
    {
        Console.WriteLine($"Employee - First name: {FirstName}");
        Console.WriteLine($"Employee - Last name: {LastName}");
        Console.WriteLine($"Employee - Phone number: {PhoneNumber}");
        Console.WriteLine($"Employee - Country: {Country}");
    }
}