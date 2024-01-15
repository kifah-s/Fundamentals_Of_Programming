

/* >>> Example 9 <<< */

#include <stdio.h>
#include <stdbool.h>

bool isEven(int x)
{
    return x % 2 == 0;
}

int main()
{
    if (isEven(5))
    {
        printf("\nEven\n\n");
    }
    else
    {
        printf("\nodd\n\n");
    }

    return 0;
}
