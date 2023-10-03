# More Learning ..

**INFO_1 : "Concept of set in C++.."**

A set is a data structure that is used to store a collection of unique values. The elements of a set are automatically sorted in ascending order.

**Creating a set**

A set can be created using the `std::set()` keyword. For example, the following code creates a set that contains the numbers 1, 2, 3, 4, and 5:

```c++
#include <iostream>
#include <set>

int main()
{
  // Create a set of integers
  std::set<int> numbers = {1, 2, 3, 4, 5};

  // Print the elements of the set
  for (int number : numbers)
  {
    std::cout << number << std::endl;
  }

  return 0;
}
```

This code will print the following output:

```
1
2
3
4
5
```

**Adding elements to a set**

Elements can be added to a set using the `insert()` method. For example, the following code adds the number 6 to the set:

```c++
#include <iostream>
#include <set>

int main()
{
  // Create a set of integers
  std::set<int> numbers = {1, 2, 3, 4, 5};

  // Add the number 6 to the set
  numbers.insert(6);

  // Print the elements of the set
  for (int number : numbers)
  {
    std::cout << number << std::endl;
  }

  return 0;
}
```

This code will print the following output:

```
1
2
3
4
5
6
```

**Removing elements from a set**

Elements can be removed from a set using the `erase()` method. For example, the following code removes the number 2 from the set:

```c++
#include <iostream>
#include <set>

int main()
{
  // Create a set of integers
  std::set<int> numbers = {1, 2, 3, 4, 5};

  // Remove the number 2 from the set
  numbers.erase(2);

  // Print the elements of the set
  for (int number : numbers)
  {
    std::cout << number << std::endl;
  }

  return 0;
}
```

This code will print the following output:

```
1
3
4
5
```

**Searching for elements in a set**

Elements can be searched for in a set using the `find()` method. For example, the following code searches for the number 3 in the set:

```c++
#include <iostream>
#include <set>

int main()
{
  // Create a set of integers
  std::set<int> numbers = {1, 2, 3, 4, 5};

  // Search for the number 3 in the set
  auto it = numbers.find(3);

  // Check if the number was found
  if (it != numbers.end())
  {
    std::cout << "The number 3 was found." << std::endl;
  }
  else
  {
    std::cout << "The number 3 was not found." << std::endl;
  }

  return 0;
}
```

This code will print the following output:

```
The number 3 was found.
```

**Using a set**

Sets are used in a variety of applications, such as:

- Storing a collection of unique elements
- Searching for elements in a collection
- Removing duplicate elements from a collection

**Notes**

- Sets can be very useful in applications that require storing a collection of unique elements.
- Sets are an efficient data structure, as they can search for elements very quickly.
- Sets can also be useful in applications that require removing duplicate elements from a collection." **(Google Bard)**

---

<br>

**INFO_2 : ".."**

"" **()**
