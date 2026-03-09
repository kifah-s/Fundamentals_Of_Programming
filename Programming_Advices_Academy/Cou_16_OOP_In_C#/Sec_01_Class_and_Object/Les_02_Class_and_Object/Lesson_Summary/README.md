## Lesson Summary.

---

#### C# Class and Object

C# is an object-oriented program. In object-oriented programming(OOP), we solve complex problems by dividing them into objects.

To work with objects, we need to perform the following activities:

- create a class
- create objects from the class

---

#### C# Class

Before we learn about objects, we need to understand the working of classes. Class is the blueprint for the object.

We can think of the class as a sketch (prototype) of a house. It contains all the details about the floors, doors, windows, etc. We can build a house based on these descriptions. House is the object.

Like many houses can be made from the sketch, we can create many objects from a class.

Create a class in C#

We use the class keyword to create an object. For example,
```
class ClassName
{

}
```

Here, we have created a class named ClassName. A class can contain

- fields - variables to store data
- methods - functions to perform specific tasks

Let's see an example,
```
class clsPerson
{
    // Fileds
    public string FirstName;
    public string LastName;


    // Method
    public string FullName() 
    { 
        return FirstName + ' ' + LastName; 
    }

}
```
In the above example,

- clsPerson- class name
- FirstName, LastName - fields
- FullName() - method

Note: In C#, fields and methods inside a class are called members of a class.

---

#### C# Objects

An object is an instance of a class. Suppose, we have a class clsPerson. Person1, Person2 are objects of the class.

Creating an Object of a class

In C#, here's how we create an object of the class.
```
ClassName obj = new ClassName();
```

Here, we have used the new keyword to create an object of the class. And, obj is the name of the object. Now, let us create an object from the clsPerson class.
```
clsPerson Person1 = new clsPerson();
```

Now, the Person1 object can access the fields and methods of the clsPerson class.

---

#### Access Class Members using Object

We use the name of objects along with the . operator to access members of a class. For example,

```
using System;
namespace ConsoleApp1
{
    class clsPerson
    {
        //Fileds
        public string FirstName;
        public string LastName;

        //Method
        public string FullName()
        {
            return FirstName + ' ' + LastName;
        }
    }


    internal class Program
    {
        static void Main(string[] args)
        {
            // Create object from class
            clsPerson Person1= new clsPerson();


            Console.WriteLine("Accessing Object 1 (Person1):");
            Person1.FirstName = "Mohammed";
            Person1.LastName = "Abu-Hadhoud";
            Console.WriteLine(Person1.FullName());


            // Create another object from class
            clsPerson Person2 = new clsPerson();
            Console.WriteLine("\nAccessing Object 2 (Person2):");
            Person2.FirstName = "Ali";
            Person2.LastName = "Maher";
            Console.WriteLine(Person2.FullName());
            
            Console.ReadKey();
        }
    }
}
```



Output
```
Accessing Object 1 (Person1):
Mohammed Abu-Hadhoud

Accessing Object 2 (Person2):
Ali Maher
```


In the above program, we have created two objects named Person1, Person2 from the clsPerson class. Notice that we have used the object name and the . (dot operator) to access the fields
```
// access fields of Person1
 Person1.FirstName = "Mohammed";
 Person1.LastName = "Abu-Hadhoud";
 ```


and the FullName() method
```
// access method of the Person1
Person1.FullName();
```

---

#### Why Objects and Classes?

Objects and classes help us to divide a large project into smaller sub-problems, and have control over the code, dealing with classes and objects will make our life easier and we dont have to remember anything. classes will increase code reusability and will make it easier to maintain.

This helps to manage complexity as well as make our code reusable.