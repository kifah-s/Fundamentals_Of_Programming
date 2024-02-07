# More Learning ..

**INFO 1: "Exception"**

"Exception is a programming concept that allows developers to handle error conditions or exceptional events in an organized and effective way. In languages that support the concept of exceptions, a program can throw an exception when an unexpected condition or error occurs, and the exception can be caught and handled elsewhere in the program.

Handling exceptions makes code more readable and maintainable, and it allows the separation of error-handling code from the main code. The primary methods for dealing with exceptions include catching and throwing.

**Throwing an Exception:**
When an error or exceptional condition occurs, the program can throw an exception using the `throw` keyword. For example:

```cpp
#include <iostream>

void divide(int a, int b) {
    if (b == 0) {
        throw "Division by zero is not allowed.";
    }
    int result = a / b;
    std::cout << "Result: " << result << std::endl;
}

int main() {
    try {
        divide(10, 2);
        divide(8, 0);  // An exception will be thrown here
    } catch (const char* msg) {
        std::cerr << "Exception caught: " << msg << std::endl;
    }

    return 0;
}
```

**Catching an Exception:**
The program can catch the exception using the `catch` keyword. `catch` is used to appropriately handle the caught exception. In the above example, the exception is caught within the `catch` block, and a suitable error message is displayed.

Exception handling improves error management, enhances code robustness, and is recommended for effective code maintenance and stability." **(ChatGPT)**

---
