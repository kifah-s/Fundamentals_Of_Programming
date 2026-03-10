## Lesson Summary.

---

#### ReadOnly Properties

You can define a readonly property by only implementing the get method.

Look at the following example.
```
using System;

class clsEmployee
{
    // Private fields
    private int _ID;
    private string _Name = string.Empty;

    // ID Property Declaration as readonly
    public int ID
    {
        // Get is use for Reading field
        get
        {
            return _ID;
        }
    }

    // Name Property Declaration
    public string Name
    {
        // Get is use for Reading field
        get
        {
            return _Name;
        }

        // Set is use for writing field
        set
        {
            _Name = value;
        }
    }

    static void Main(string[] args)
    {
        // Create an object of Employee class.

        clsEmployee Employee1 = new clsEmployee();
        // You cannot modify the id value because it's readonly
        // Employee1.ID = 7;
        Employee1.Name = "Mohammed Abu-Hadhoud";

        Console.WriteLine("Employee Id: {0}", Employee1.ID);
        Console.WriteLine("Employee Name: {0}", Employee1.Name);

        Console.ReadLine();
    }
}
```

In the preceding example, we have the following two private fields:

- _ID (int) 
- _Name (string)

Note that property ID has only get method therefore it's read only.