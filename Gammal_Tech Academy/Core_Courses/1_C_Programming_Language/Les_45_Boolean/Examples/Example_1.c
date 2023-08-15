

/* >>> Example 1 <<< */

#include <stdio.h>
#include <stdbool.h>

bool isEven(int x)
{
    return !(x % 2);
}

int main()
{
    if (isEven(9))
    {
        printf("\nEven\n\n");
    }
    else
    {
        printf("\nOdd\n\n");
    }

    return 0;
}