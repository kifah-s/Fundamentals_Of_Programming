# More Learning ..

**INFO_1 : "Constructor"**


In the C++ programming language, a constructor is a function that creates an object of a particular class. The constructor is called automatically when a new object is created.

Constructors are typically used to:

* Allocate memory for the object
* Initialize the values of the variables in the object
* Perform any logic required to create the object

A constructor can be either default or non-default. A default constructor is a constructor that takes no arguments. A non-default constructor is a constructor that takes arguments.

Here is an example of a default constructor:

```c++
class Animal
{
public:
  Animal() // Default constructor
  {
    // Implement object creation logic
  }
};
```

Here is an example of a non-default constructor:

```c++
class Animal
{
public:
  Animal(int age) // Non-default constructor
  {
    // Allocate memory for the object
    // Initialize the value of the variable age
    // Implement any logic required to create the object
  }
};
```

When a new object is created, the default constructor is called if no non-default constructor is specified.

For example, the following code will create a new object of the Animal class:

```c++
Animal animal; // Will call the default constructor
```

This will cause the default constructor in the Animal class to be called.

A non-default constructor can also be called explicitly. For example, the following code will create a new object of the Animal class with an age of 10 years:

```c++
Animal animal(10); // Will call the non-default constructor
```

This will cause the non-default constructor in the Animal class to be called with an age argument of 10 years.

The benefit of a constructor is that it allows you to properly initialize a new object." **(Google Bard)**

---

<br>

**INFO_2 : ""**

"" **()**
