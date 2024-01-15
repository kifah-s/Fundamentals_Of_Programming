# More Learning ..

**INFO_1 : "A "Pair" data structure.."**

"A "Pair" data structure in the C++ programming language is a data structure that can be used to store a pair of values. A "Pair" consists of two elements, and it can store data of any data type you desire in these elements.

In essence, the purpose of a "Pair" is to represent a pair of data or values in a way that makes them easily accessible and stored together. For example, a "Pair" can be used to represent a point in two-dimensional space where you can store the coordinates (x, y) as a pair.

The utility of a "Pair" becomes evident in cases where you need to store a pair of data together and access them consistently. It helps in organizing data and simplifying code.

Here's a simple example of how to use a "Pair" in C++:

```cpp
#include <iostream>
#include <utility>

int main()
{
    std::pair<int, double> myPair(42, 3.14);
    
    std::cout << "First value: " << myPair.first << std::endl;
    std::cout << "Second value: " << myPair.second << std::endl;
    
    return 0;
}
```

In this example, a pair ("Pair") containing two values, 42 and 3.14, is created. The first element can be accessed using `first`, and the second element can be accessed using `second`." **(ChatGPT)**

---

<br>

**INFO_2 : "A "Pair" data structure.."**

In the C++ programming language, a `pair` is a simple data structure that is used to store two related values. These values are known as `first` and `second`.

For example, a `pair` can be used to store the name and age of a person. In this case, `first` would be the person's name and `second` would be their age.

A `pair` can be created using the `std::make_pair()` keyword. For example, the following code creates a `pair` that contains the name "John" and the age 25:

```c++
#include <iostream>
#include <utility>

int main()
{
  // Create a pair of strings
  std::pair<std::string, int> person = std::make_pair("John", 25);

  // Print the first element
  std::cout << person.first << std::endl;

  // Print the second element
  std::cout << person.second << std::endl;

  return 0;
}
```

This code will print the following output:

```
John
25
```

A `pair` can also be created using a square bracket list. For example, the following code creates a `pair` that contains the name "John" and the age 25:

```c++
#include <iostream>

int main()
{
  // Create a pair of strings
  std::pair<std::string, int> person = {"John", 25};

  // Print the first element
  std::cout << person.first << std::endl;

  // Print the second element
  std::cout << person.second << std::endl;

  return 0;
}
```

This code will print the following output:

```
John
25
```

The elements of a `pair` can be accessed using the `.first` and `.second` methods. For example, the following code prints the person's name and age:

```c++
#include <iostream>

int main()
{
  // Create a pair of strings
  std::pair<std::string, int> person = {"John", 25};

  // Print the first element
  std::cout << person.first << std::endl;

  // Print the second element
  std::cout << person.second << std::endl;

  return 0;
}
```

This code will print the following output:

```
John
25
```

A `pair` can also be used to compare the values stored in it. For example, the following code compares the ages of two people:

```c++
#include <iostream>

int main()
{
  // Create a pair of strings
  std::pair<std::string, int> person1 = {"John", 25};
  std::pair<std::string, int> person2 = {"Mary", 26};

  // Compare the ages
  if (person1.second < person2.second) {
    std::cout << "John is younger than Mary." << std::endl;
  } else {
    std::cout << "John is older than Mary." << std::endl;
  }

  return 0;
}
```

This code will print the following output:

```
John is younger than Mary.
```

In conclusion, a `pair` is a simple data structure that can be used to store two related values. It is useful for a variety of applications, such as storing information about people, things, or events." **(Google Bard)**
