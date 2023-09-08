

/* >>> Example 4 <<< */

#include <stdio.h>
#include <string.h>

int main()
{
    char x[100];

    x[0] = 0; // OR x[0] = '\0';
    strcat(x, "Programming is fun");

    printf("\n%s\n\n", x);

    return 0;
}