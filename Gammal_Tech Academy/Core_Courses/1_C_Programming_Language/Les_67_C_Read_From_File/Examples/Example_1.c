

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    FILE *f = fopen("gammal.txt", "r");

    char x;

    while (fscanf(f, "%c", &x) != EOF)
    {
        printf("%c", x);
    }
    return 0;
}