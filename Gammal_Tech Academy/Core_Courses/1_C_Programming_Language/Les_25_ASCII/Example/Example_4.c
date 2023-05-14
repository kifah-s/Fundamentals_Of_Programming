

/* >>> Example 4 >>> */

#include <stdio.h>

int main()
{
    int i;
    for (i = 'A'; i <= 'Z'; i++)
    {
        printf("\n%c -> %d\n", i, i);
    }

    printf("\n------\n");

    for (i = 'a'; i <= 'z'; i++)
    {
        printf("\n%c -> %d\n", i, i);
    }
}