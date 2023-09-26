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

**INFO_2 : ".."**

"" **()**
