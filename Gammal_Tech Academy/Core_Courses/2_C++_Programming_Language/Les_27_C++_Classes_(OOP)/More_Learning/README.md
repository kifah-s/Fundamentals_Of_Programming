# More Learning ..

**INFO_1 : "class"**

In the C++ programming language, a class is a type of data that allows us to create specific models of real or abstract things. A class provides a way to organize data and functions related to it together.

In simple terms, we can say that a class is a template that we use to create objects. An object is an instance of a class.

Here is an example of how to create a class:

```c++
class Person
{
 public:
  // Attributes
  std::string name;
  int age;

  // Functions
  void say_hello()
  {
    std::cout << "Hello, my name is " << name << std::endl;
  }
};
```

In this example, we created a class called `Person`. This class has attributes for name and age. It also has a function called `say_hello()`.

We can create an object from the class using the keyword `new`:

```c++
Person* person = new Person();
```

This code will create a new object from the class `Person`. We can then access the object's attributes and functions using the asterisk (\*):

```c++
person->name = "Bard";
person->age = 25;
person->say_hello();
```

This code will set the object's name to "Bard" and the object's age to 25. It will also call the `say_hello()` function.

Here are some of the main advantages of classes in C++:

- **Reusability:** We can use classes to reuse code.
- **Organization:** Classes help organize code.
- **Encapsulation:** Classes help hide implementation details.

I hope this explanation is helpful." **(Google Bard)**

---

<br>

**INFO_2 : ""**

"" **()**
