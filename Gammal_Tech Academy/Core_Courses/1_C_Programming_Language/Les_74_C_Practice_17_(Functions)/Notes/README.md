# Notes ..

**1 : the difference between :**

```c
#include <stdio.h>

int fun(int x, int y)
{
    int t = x + y;

    return t;
}

int main()
{
    int x, y;

    printf("\nEnter 2 numbers: ");
    scanf("%d %d", &x, &y);

    printf("\n%d\n\n", fun(x, y));

    return 0;
}
```

**And :**

```c
#include <stdio.h>

int fun(int *x, int *y)
{
    int t = *x + *y;

    return t;
}

int main()
{
    int x, y;

    printf("\nEnter 2 numbers: ");
    scanf("%d %d", &x, &y);

    printf("\n%d\n\n", fun(&x, &y));

    return 0;
}
```

Both of the provided codes serve the same general purpose, which is to add two numbers together and return the result. However, there is a significant difference in how data is passed and used:

1 : **First Code (Using Local Variables):**

In this code, the values of `x` and `y` are passed to the `fun` function using local variable copies. This means that copies of `x` and `y` are sent to the `fun` function. Inside the function, the addition operation is performed using copies of the values.

2 : **Second Code (Using Pointers):**

In the second code, pointers to `x` and `y` are passed to the `fun` function instead of the actual values. Inside the function, pointers are used to access the actual values of `x` and `y` in the `fun` function using `*x` and `*y`.

The main difference is that the second code allows the `fun` function to modify the original values of `x` and `y` in the `main` function because it uses pointers to access the values. In contrast, the first code deals with copies of the values, and the `fun` function cannot change the original values of `x` and `y`.

So, if you modify the values of `x` and `y` inside the `fun` function in the second code, these changes will affect the original values of `x` and `y` in the `main` function. This makes the second code more powerful and flexible if you need to modify data inside the function. (Chat GPT)
