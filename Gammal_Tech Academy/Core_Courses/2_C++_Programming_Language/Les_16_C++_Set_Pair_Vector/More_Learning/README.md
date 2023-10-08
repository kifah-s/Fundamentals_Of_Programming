# More Learning ..

**INFO_1 : "Vector.."**

In the C++ programming language, a vector is a type of data container that can be used to store elements of the same type. A vector is similar to an array in many ways, but there are some key differences between them.

**Key differences between an array and a vector:**

- **Size:** An array can have a fixed size, while a vector can grow and shrink dynamically.
- **Random access:** Array elements can be accessed randomly, while vector elements can only be accessed through pointers.
- **Efficiency:** Array operations are more efficient than vector operations in most cases.

**How to create a vector:**

A vector can be created using the `std::vector()` keyword. For example, a vector of integers can be created as follows:

```c++
#include <iostream>
#include <vector>

int main()
{
  // Create a vector of integers
  std::vector<int> numbers;

  // Add elements to the vector
  numbers.push_back(1);
  numbers.push_back(2);
  numbers.push_back(3);

  // Print the elements of the vector
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
```

**Adding elements to a vector:**

Elements can be added to a vector using the `push_back()` method. For example, the number 4 can be added to the vector `numbers` as follows:

```c++
#include <iostream>
#include <vector>

int main()
{
  // Create a vector of integers
  std::vector<int> numbers;

  // Add elements to the vector
  numbers.push_back(1);
  numbers.push_back(2);
  numbers.push_back(3);

  // Add the number 4 to the vector
  numbers.push_back(4);

  // Print the elements of the vector
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
```

**Removing elements from a vector:**

Elements can be removed from a vector using the `pop_back()` method. For example, the last number from the vector `numbers` can be removed as follows:

```c++
#include <iostream>
#include <vector>

int main()
{
  // Create a vector of integers
  std::vector<int> numbers;

  // Add elements to the vector
  numbers.push_back(1);
  numbers.push_back(2);
  numbers.push_back(3);
  numbers.push_back(4);

  // Remove the last element from the vector
  numbers.pop_back();

  // Print the elements of the vector
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
```

**Accessing vector elements:**

Vector elements can be accessed using pointers. For example, the second number from the vector `numbers` can be accessed as follows:

```c++
#include <iostream>
#include <vector>

int main()
{
  // Create a vector of integers
  std::vector<int> numbers = {1, 2, 3, 4};

  // Access the second element of the vector
  int second_element = numbers[1];

  // Print the second element of the vector
  std::cout << second_element << std::endl;

  return 0;
}
```

This code will print the following output:

```
2
```

**Conclusion:**

A vector is a useful tool for storing elements of the same type. They are flexible and easy to use, and can be used in a variety of applications." **(Google Bard)**

---

<br>

**INFO_2 : ".."**

"" **()**
