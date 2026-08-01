


{
    Person per_01 = new Person();
    per_01.Name = "kifah";
}

{
}




Console.ReadKey();





public class Person
{
    public string Name { get; set; }

    public Person()
    {
        Console.WriteLine("This is Person Constructor.");
    }

    ~Person()
    {
        Console.WriteLine("This is Person Destructor.");
    }
}