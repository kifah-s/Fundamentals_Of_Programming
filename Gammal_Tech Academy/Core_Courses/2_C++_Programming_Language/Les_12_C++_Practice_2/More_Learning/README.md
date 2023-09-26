# More Learning ..

**INFO_1 : "`substr` function.."**

"The `substr` function in the C++ programming language is used to extract a portion of a string and work with it separately. The function takes two main parameters:

1. Start position: This is the position in the original string where the extraction should begin. It's represented by an index that starts from zero, where 0 refers to the first character in the string.

2. Length: This is the number of characters you want to extract from the string. If this parameter is left empty, it will extract all characters from the start position to the end of the string.

For example, if you have the string "Hello, World!" and you want to extract the word "World" from it, you can use `substr` like this:

```cpp
#include <iostream>
#include <string>

int main()
{
    std::string str = "Hello, World!";

    // Extract the word "World" starting from character number 7 (W) for a length of 5 characters.
    std::string result = str.substr(7, 5);

    std::cout << result << std::endl; // This will print "World"

    return 0;
}
```

This is a simple example demonstrating how to use `substr` to extract a portion of a string. The resulting string ("World" in this case) is independent and can be used for other string operations like a regular string." **(ChatGPT)**

---

<br>

**INFO_2 : "`max_element` function.."**

"The `std::max_element` function in C++ is used to find the largest element in an array or sequence. Here's a simplified explanation of how to use it:

1. **Include the Relevant Library**: First, you need to include the necessary library in your program:

   ```cpp
   #include <algorithm>
   ```

2. **Create the Array or Sequence**: Create the array or sequence that you want to search for the largest element in.

3. **Use `std::max_element`**: Use the `std::max_element` function to search for the largest element. This function takes a range as inputs. You can pass it the beginning and end of the array or sequence.

   ```cpp
   int myArray[] = {12, 5, 9, 27, 6, 18};
   int length = sizeof(myArray) / sizeof(myArray[0]);

   int *maxElement = std::max_element(myArray, myArray + length);
   ```

   In this example, the `myArray` array is passed as input to the `std::max_element` function, indicating the beginning and end of the array using `myArray` and `myArray + length`.

4. **Accessing the Largest Value**: `std::.max_element` returns a pointer (by reference) to the largest element in the array. To access the value of this element, you need to use the `*` operator as shown in the example above.

   ```cpp
   std::cout << "The largest number in the array: " << *maxElement << std::endl;
   ```

Using `std::max_element`, you can easily find the largest element in your array or sequence without the need to write manual loop-based searches." **(ChatGPT)**

<br>

- **My Example for `max_element` function:**

```c++
// >>> Maximum Elements Program ( Version 2 ) <<< */

/* >>> Write a C++ program to find the maximum elements in an array. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
int maximumElementsFun(int m, int arr[], int l);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     int maxEle = 0,
         myArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
         myArrayLength = sizeof(myArray) / sizeof(myArray[0]);
     // ... End Variables ...

     // ... Functions ...
     maxEle = maximumElementsFun(maxEle, myArray, myArrayLength);
     // ... End Functions ...

     cout << "Max Element is: " << maxEle << endl
          << endl
          << endl;

     return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Maximum Elements Program ( Version 2 ) .." << endl
          << endl;
}

// find the maximum elements / Function.
int maximumElementsFun(int m, int arr[], int l)
{
     int *pointerToMaxEle = max_element(arr, arr + l);

     //* Important Note ..
     m = *pointerToMaxEle;
     //* Important Note ..

     return m;
}
// ... End Functions ...
```

---

<br>

**INFO_2 : ".."**

"" **(ChatGPT)**
