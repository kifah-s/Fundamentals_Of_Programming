
Vehicle veh_01 = new Hounda("Hounda", "Civic", 2021);
Hounda veh_02 = new Hounda("Hounda", "Accord", 2021);
ILoader veh_03 = new Caterpillar("Caterpillar", "aaa", 2020);

veh_03.Load();

Console.ReadKey();


abstract class Vehicle
{
    protected string Brand;
    protected string Model;
    protected int Year;

    public Vehicle(string brand, string model, int year)
    {
        Brand = brand;
        Model = model;
        Year = year;
    }
}


interface IDrivable
{
    void Move();
    void Stop();
}

class Hounda : Vehicle, IDrivable
{
    public Hounda(string brand, string model, int year) : base(brand, model, year)
    {

    }

    public void Move()
    {
        Console.WriteLine("Moving");
    }

    public void Stop()
    {
        Console.WriteLine("Stoping");
    }
}


interface ILoader
{
    void Load();
    void UnLoad();
}

class Caterpillar : Vehicle, ILoader, IDrivable
{
    public Caterpillar(string brand, string model, int year) : base(brand, model, year)
    {

    }

    public void Load()
    {
        Console.WriteLine("Loading");
    }

    public void UnLoad()
    {
        Console.WriteLine("UnLoading");
    }

    public void Move()
    {
        Console.WriteLine("Moving");
    }

    public void Stop()
    {
        Console.WriteLine("Stoping");
    }
}