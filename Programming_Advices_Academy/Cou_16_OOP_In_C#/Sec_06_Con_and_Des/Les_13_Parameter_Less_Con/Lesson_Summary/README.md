## Lesson Summary.

---

#### Parameterless Constructor

When we create a constructor without parameters, it is known as a parameterless constructor. For example,
```
using System;

class clsPerson
{

    public int Id { get; set; }
    public string Name { get; set; }
    public int Age { get; set; }

    public clsPerson()
    {
        Id = -1;
        Name = "Empty";
        Age= 0;
    }
}

internal class Program
{
    static void Main(string[] args)
    {
        clsPerson Person1 = new clsPerson();

        Console.WriteLine("ID:= {0}", Person1.Id);
        Console.WriteLine("Name:= {0}", Person1.Name);
        Console.WriteLine("Age:= {0}", Person1.Age);
        Console.ReadKey();
    }
}
```

In the above example, we have created a constructor named clsPerson().
```
new clsPerson();
```

We can call a constructor by adding a new keyword to the constructor name.