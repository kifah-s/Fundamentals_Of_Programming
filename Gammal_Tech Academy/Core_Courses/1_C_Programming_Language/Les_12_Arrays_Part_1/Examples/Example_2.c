

/* >>> Example - 2 <<< */

#include <stdio.h>

int main(void)
{
    printf("\n\nYou welcome in Example - 2 ..\n\n");

    int i, x[10];

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("\n");

    for (i = 9; i >= 0; i--)
    {
        printf("%d\n", x[i]);
    }
    printf("\n\n");

    return 0;
}
