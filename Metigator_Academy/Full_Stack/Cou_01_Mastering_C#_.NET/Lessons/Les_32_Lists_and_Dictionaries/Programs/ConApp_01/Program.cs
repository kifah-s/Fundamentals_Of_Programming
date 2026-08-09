/*
Country[] countries = new Country[3];

countries[0] = new Country();
countries[0].Name = "A";
countries[0].ISOCode = "a";

countries[1] = new Country();
countries[1].Name = "B";
countries[1].ISOCode = "b";

countries[2] = new Country();
countries[2].Name = "C";
countries[2].ISOCode = "c";
*/

/*
Country[] countries = new Country[]
{
    new Country {Name = "A", ISOCode = "a"},
    new Country {Name = "B", ISOCode = "b"},
    new Country {Name = "C", ISOCode = "c"}
};
*/

/*
Country[] countries =
{
    new Country {Name = "A", ISOCode = "a"},
    new Country {Name = "B", ISOCode = "b"},
    new Country {Name = "C", ISOCode = "c"}
};

foreach (Country country in countries)
{
    //Console.WriteLine($"Country Name: {country.Name} | Country ISOCode: {country.ISOCode}");
    Console.WriteLine(country.ToString());
}
*/


//------------------------------------------------------------

Country syria = new Country { Name = "Syria", ISOCode = "SY" };
Country jordan = new Country { Name = "Jordan", ISOCode = "JOR" };
Country egypt = new Country { Name = "Egypt", ISOCode = "EGY" };

// Add Countries To Array.
//Country[] countriesArray =
//{
//    syria,
//    jordan,
//    egypt
//};

// Add Countries To List.
List<Country> countriesList = new List<Country>();

// 1:
//countriesList.Add(new Country { Name = "Syria", ISOCode = "SY" });   // O(1).
//countriesList.Add(new Country { Name = "Jordan", ISOCode = "JOR" }); // O(1).
//countriesList.Add(new Country { Name = "Egypt", ISOCode = "EGY" });  // O(1).


// countriesList.Add(syria);
//countriesList.Add(jordan);
//countriesList.Add(egypt);

// 2:
//countriesList.AddRange(countriesArray);  // O(1).


// 3:
//countriesList.Insert(0, syria); // O(n).
//countriesList.Insert(0, new Country { Name = "Syria", ISOCode = "SY" }); // O(n).





Print(countriesList);

Console.ReadKey();


static void Print(List<Country> countries)
{
    foreach (Country country in countries)
    {
        Console.WriteLine(country.ToString());
    }

    Console.WriteLine("------------------------------------------------");
    Console.WriteLine($"Count: {countries.Count}.");
    Console.WriteLine($"Capacity: {countries.Capacity}.");
}


public class Country
{
    public string Name { get; set; }
    public string ISOCode { get; set; }

    public override string ToString()
    {
        return $"Country Name: {Name} | Country ISOCode: {ISOCode}";
    }
}


