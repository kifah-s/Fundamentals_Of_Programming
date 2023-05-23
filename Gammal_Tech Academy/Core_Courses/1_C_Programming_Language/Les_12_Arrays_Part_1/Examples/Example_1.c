

/* >>> Example - 1 <<< */

#include <stdio.h>

int main(void)
{
    printf("\n\nYou welcome in Example - 1 ..\n\n");

    int i, x[10];

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", x[i]);
    }
    printf("\n\n");

    return 0;
}
