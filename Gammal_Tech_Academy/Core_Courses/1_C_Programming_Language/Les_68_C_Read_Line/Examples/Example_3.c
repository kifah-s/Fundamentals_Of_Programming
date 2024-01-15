

/* >>> Example 3 <<< */

#include <stdio.h>

int main()
{
    char x[50];

    printf("\nType something: ");

    scanf("%[^w]", x);

    printf("\n%s\n\n", x);

    return 0;
}