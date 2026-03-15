using System;

class clsPerson
{
    public int id { set; get; }
    public string name { set; get; }
    public int age { set; get; }
    public string userName { set; get; }
    public string password { set; get; }

    public clsPerson(int id, string name, int age)
    {
        this.id = id;
        this.name = name;
        this.age = age;
    }

    public static clsPerson Find(int id)
    {
        // We simulate the result for now, later on we will connect to database.

        if (id == 1)
        {
            return new clsPerson(1, "kifah", 30);
        }
        else
        {
            return null;
        }
    }

    public static clsPerson Find(string userName, string password)
    {
        // We simulate the result for now, later on we will connect to database.

        if (userName == "user1" && password == "p1234")
        {
            return new clsPerson(1, "kifah", 30);
        }
        else
        {
            return null;
        }
    }
}

internal class Program
{
    static void Main(string[] args)
    {
        //clsPerson person1 = new clsPerson(1, "kifah", 30);

        Console.WriteLine("Fiding person 1 by id");
        clsPerson person1 = clsPerson.Find(1);
        if (person1 != null)
        {
            Console.WriteLine("ID: {0}", person1.id);
            Console.WriteLine("Name: {0}", person1.name);
            Console.WriteLine("Age: {0}", person1.age);
        }
        else
        {
            Console.WriteLine("Could not find the person by the givin id.");
        }


        Console.WriteLine("\n\nFiding person 2 by userName and password");
        clsPerson person2 = clsPerson.Find(1);
        if (person1 != null)
        {
            Console.WriteLine("ID: {0}", person2.id);
            Console.WriteLine("Name: {0}", person2.name);
            Console.WriteLine("Age: {0}", person2.age);
        }
        else
        {
            Console.WriteLine("Could not find the person by the givin userName and password.");
        }


    }
}
