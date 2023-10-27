# More Learning ..

**INFO_1 : "Member operators"**

**Member operators** are **member functions** that can be used as operators.

**An operator** is a symbol or word used to perform a mathematical or logical operation. For example, the `+` operator is used to add two values.

**A function** is a part of code that is used to perform a specific task.

**A member** is a part of an object. It can be a member variable, function, or property.

**Member operators** are a way to extend the functionality of member functions to include mathematical or logical operations. For example, you can create a member operator to increment the value of an object or to compare two values.

**Example**

Here is an example of a member operator:

```c++
class Integer
{
 public:
  int value;

  // Increment the value of the object by 1.
  void operator++()
  {
    value++;
  }
};

int main()
{
  Integer i = 10;

  // Increment the value of i by 1.
  i++;

  // Print the value of i.
  std::cout << i << std::endl;

  return 0;
}
```

In this example, the `Integer` class has a member function called `operator++()`. This function increments the value of the object by 1.

You can use the `++` operator to increment the value of an object from the `Integer` class. For example, the following code will print the value 11:

```c++
Integer i = 10;

// Increment the value of i by 1.
i++;

// Print the value of i.
std::cout << i << std::endl;
```

**Summary**

- **Member operators** are **member functions** that can be used as operators.
- **An operator** is a symbol or word used to perform a mathematical or logical operation.
- **A function** is a part of code that is used to perform a specific task.
- **A member** is a part of an object. It can be a member variable, function, or property.

**Questions?**

Do you have any questions about member operators?

I hope this helps! Let me know if you have any other questions." **(Google Bard)**

---

<br>

**INFO_2 : ""**

"" **()**
