## Lesson Summary.

---

### Private Constructor

We can create a private constructor using the private access specifier. This is known as a private constructor in C#.

Once the constructor is declared private, we cannot create objects of the class in other classes.

Example 1: Private Constructor
```
using System;

class Settings
{
    public static int DayNumber
    {
        get
        {
            return DateTime.Today.Day;
        }
    }

    public static string DayName
    {
        get
        {
            return DateTime.Today.DayOfWeek.ToString();
        }
    }

    public static string ProjectPath
    {
        get;
        set;
    }
    
    //this is a private constructor to prevent creating object from this class
    private Settings()
    {

    }
}


class Program
{
    static void Main()
    {

        // You cannot create an object here because class has private constructor
        // Settings Obj1 = new Settings();

        // Read the static properties.
        Console.WriteLine(Settings.DayNumber);
        Console.WriteLine(Settings.DayName);
      
        // Change the value of the static bool property.
        Settings.ProjectPath = @"C:\MyProjects\";
        Console.WriteLine(Settings.ProjectPath);
        Console.ReadKey();
    }
}
```

In the above example, we have created a private constructor Settings(). Since private members are not accessed outside of the class, when we try to create an object of Settings
```
// when you try to create an object of this class
 Settings Obj1 = new Settings();
 ```
we get an error

Note: If a constructor is private, we cannot create objects of the class. Hence, all fields and methods of the class should be declared static, so that they can be accessed using the class name.

---

#### Static Class

A static class is basically the same as a non-static class, but there is one difference: a static class cannot be instantiated. In other words, you cannot use the new operator to create a variable of the class type.

Example 1: Static Class instead of Private Constructor
```
using System;

static class Settings
{
    public static int DayNumber
    {
        get
        {
            return DateTime.Today.Day;
        }
    }

    public static string DayName
    {
        get
        {
            return DateTime.Today.DayOfWeek.ToString();
        }
    }

    public static string ProjectPath
    {
        get;
        set;
    }
    
}


class Program
{
    static void Main()
    {

        // You cannot create an object here because class is static
        // Settings Obj1 = new Settings();

        // Read the static properties.
        Console.WriteLine(Settings.DayNumber);
        Console.WriteLine(Settings.DayName);
      
        // Change the value of the static bool property.
        Settings.ProjectPath = @"C:\MyProjects\";
        Console.WriteLine(Settings.ProjectPath);

        Console.ReadKey();
    }
}
```