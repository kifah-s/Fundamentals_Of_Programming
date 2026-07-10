

Person persopn_01 = new Person();
persopn_01.Name = "kifah";
persopn_01.Country = Country.Syria;

Console.WriteLine($"Person name: {persopn_01.Name}, Person country: {persopn_01.Country}");
Console.WriteLine($"Person name: {persopn_01.Name}, Person country: {(byte)persopn_01.Country}");



Console.ReadKey();



public enum Country
{
    Syria = 1,
    Lebanon = 2,
    Usa = 3,
    Austrlia = 4
}

public class Person
{
    public string Name { get; set; }

    public Country Country { get; set; }
}

