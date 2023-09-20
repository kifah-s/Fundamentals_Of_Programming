# More Learning ..

**INFO_1 : "Scope.."**

"In programming, the concept of "scope" refers to the extent and location of availability of a variable or a specific entity within the program. Scope determines how far the program can access and utilize that variable or entity.

There are two main scopes in programming:

1. **Global Scope**: This refers to variables and entities that can be accessed from anywhere in the program. Typically, global variables are defined outside of main functions and classes, and global entities can be accessed from anywhere.

2. **Local Scope**: This pertains to variables and entities that can only be accessed within the function or block (such as an if or for block) where they are defined. These variables and entities cannot be accessed from outside the function or block.

The concept of scope is crucial because it helps organize the program and prevents variables and entities from interfering with each other. Scope also determines the lifetime of variables, as local scope variables exist only as long as the function is active and are destroyed when the function execution ends." **(ChatGPT)**

---

<br>

**INFO_2 : "Scope.."**


1 :
```c++
/* >>> Example 1 <<< */

#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Hello" << endl;
        }
    }

    return 0;
}
```

2 :
```c++
/* >>> Example 2 <<< */

#include <iostream>

using namespace std;

int main()
{
    int i;
    for (i = 0; i < 3; i++)
    {
        for (i = 0; i < 3; i++)
        {
            cout << "Hello" << endl;
        }
    }

    return 0;
}
```