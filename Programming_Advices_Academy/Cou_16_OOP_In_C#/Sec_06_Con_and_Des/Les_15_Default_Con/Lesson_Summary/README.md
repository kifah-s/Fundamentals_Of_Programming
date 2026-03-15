## Lesson Summary.

---

#### Default Constructor

If we have not defined a constructor in our class, then the C# will automatically create a default constructor with an empty code and no parameters. For example,
```
using System;

class clsPerson
{
    public int Id { get; set; }
    public string Name { get; set; }
    public int Age { get; set; }
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

Output
```
ID: 0
Name:
Age: 0
```

In the above example, we have not created any constructor in the clsPerson class. However, while creating an object, we are calling the constructor.
```
clsPerson Person1 = new clsPerson();
```

Here, C# automatically creates a default constructor. The default constructor initializes any uninitialized variable with the default value.

Hence, we get 0 as the value of the numbers and empty string for strings.

Note: In the default constructor, all the numeric fields are initialized to 0, whereas string and object are initialized as null.