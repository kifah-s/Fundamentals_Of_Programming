

Manager m = new Manager
{
    ID = 1000,
    Name = "kifah",
    LoggedHours = 180,
    Wage = 10
};

Maintanence ms = new Maintanence
{
    ID = 1001,
    Name = "Salim",
    LoggedHours = 182,
    Wage = 10
};

Sales s = new Sales
{
    ID = 1002,
    Name = "Sally",
    LoggedHours = 176,
    Wage = 9,
    Commission = 0.05m,
    SalesVolume = 10000m
};

Devloper dv = new Devloper
{
    ID = 1003,
    Name = "saloum",
    LoggedHours = 8,
    Wage = 15,
    TaskCompleted = true,
};

Employee[] employees = { m, ms, s, dv };


foreach (Employee e in employees)
{
    Console.WriteLine("\n---------------------\n");
    Console.WriteLine(e);
}




Console.ReadKey();
