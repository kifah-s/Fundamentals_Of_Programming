# More Learning ..

**INFO_1 : "Code hashing"**

```c++
/* >>> Example 1 <<< */

#include <iostream>

using namespace std;

int main()
{
    int a, i;

    cin >> a;

    while (a) // Block 1.
    {
        if (a <= 2) // Block 2.
        {
            if (a == 2)
            {
                cout << a << endl;
            }
            break;
        }

        int b = a / 2;

        if (b * 2 != a) // Block 3.
        {
            for (i = 2; i * i <= a; i++)
            {
                if (a % i == 0)
                {
                    break;
                }
            }
            if (i * i > a)
            {
                cout << a << endl;
            }
        }
        a--;
    }

    return 0;
}
```

---

<br>

**INFO_2 : ""**

"" **()**
