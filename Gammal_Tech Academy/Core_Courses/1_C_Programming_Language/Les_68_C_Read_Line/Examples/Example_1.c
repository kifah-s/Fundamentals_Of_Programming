

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    FILE *f = fopen("gammal.txt", "r");

    char x[100];

    fscanf(f, "%[^\n]", x);

    printf("\n\n%s\n\n", x);

    return 0;
}