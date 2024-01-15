

/* >>> Example 2 <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Example 2 ..\n\n");

    int i, j;

    for (i = 1, j = 5; i <= 5 || j >= 1; i++, j--)
    {
        printf("i = %d\n", i);
        printf("j = %d\n", j);
        printf("\n");
    }

    printf("\n\n\n");

    return 0;
}
