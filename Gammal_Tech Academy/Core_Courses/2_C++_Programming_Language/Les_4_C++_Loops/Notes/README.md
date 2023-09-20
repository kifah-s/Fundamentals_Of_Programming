# Notes ..

**N_1 : Scope ..**  

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