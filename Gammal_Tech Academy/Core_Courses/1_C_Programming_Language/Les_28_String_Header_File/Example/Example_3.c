

/* >>> Example 3 <<< */

#include <stdio.h>
#include <string.h>

int main()
{
    char x[] = "amr", y[5];

    printf("\nplease enter your name : ");
    scanf("%s", y);

    if (strcmp(x, y) == 0)
    {
        printf("\ntrue\n\n");
    }
    else
    {
        printf("\nfalse\n\n");
    }
}