# More Learning ..

**INFO_1 : "`tolower` function.."**

"The `tolower` function in C++ is one of the functions included in the C++ Standard Library. It is used to convert a character to its lowercase version (or lowercase characters remain unchanged). The function is useful when working with text and characters.

Here is a simplified explanation of how to use `tolower`:

```cpp
#include <iostream>
#include <cctype> // You must include this header to use tolower

int main()
{
    char myChar = 'A'; // An uppercase character

    // Use the tolower function to convert the character to its lowercase form
    char loweredChar = tolower(myChar);

    std::cout << "Original char: " << myChar << stdendl;
    std::cout << "Lowered char: " << loweredChar << std::endl;

    return 0;
}
```

The above code uses `tolower` to convert an uppercase character to its lowercase form. The `tolower` function takes a character as a parameter and returns the corresponding character in its lowercase form if the character is uppercase." **(ChatGPT)**

---

<br>

**INFO_2 : "`toupper` function.."**

"The `toupper` function in C++ is a part of the C++ Standard Library and is used to convert a character to its uppercase version (or uppercase characters remain unchanged). This function is handy when you need to manipulate or display characters in uppercase.

Here's a simplified explanation of how to use `toupper`:

```cpp
#include <iostream>
#include <cctype> // You must include this header to use toupper

int main()
{
    char myChar = 'a'; // A lowercase character

    // Use the toupper function to convert the character to its uppercase form
    char upperChar = toupper(myChar);

    std::cout << "Original char: " << myChar << std::endl;
    std::cout << "Uppercase char: " << upperChar << std::endl;

    return 0;
}
```

In this code, `toupper` is employed to convert a lowercase character to its uppercase form. The `toupper` function takes a character as a parameter and returns the corresponding character in its uppercase form if the character is lowercase. If the character is already in uppercase, it remains unchanged." **(ChatGPT)**
