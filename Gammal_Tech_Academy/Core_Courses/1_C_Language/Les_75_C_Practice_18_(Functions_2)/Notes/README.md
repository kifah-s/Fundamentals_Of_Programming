# Notes ..

**N_1 : How i can return array from function ?**

<br>

1 : function from type char ..

```c
#include <stdio.h>

char *Upper(char y[]);

int main()
{
    char x[100];
    printf("\nWhat is your name: ");
    scanf("%s", &x[0]); // OR .. scanf("%s", x);

    printf("\n%s\n\n", Upper(x));

    return 0;
}

// Functions ..
char *Upper(char y[])
{
    for (int i = 0; y[i]; i++)
    {
        if (y[i] >= 'a' && y[i] <= 'z')
        {
            y[i] = y[i] - 32;
        }
    }

    return y; // return array name.
    //" OR " ..
    // return &y[0]; //return first element in array.
}
```

<br>

2 : function from type void ..

```c
#include <stdio.h>

void Upper(char y[]);

int main()
{
    char x[100];
    printf("\nWhat is your name: ");
    scanf("%s", &x[0]); // OR .. scanf("%s", x);

    Upper(x);

    printf("\n%s\n\n", x);

    return 0;
}

// Functions ..
void Upper(char y[])
{
    for (int i = 0; y[i]; i++)
    {
        if (y[i] >= 'a' && y[i] <= 'z')
        {
            y[i] = y[i] - 32;
        }
    }
}
```
