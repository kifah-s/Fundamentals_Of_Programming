

/* >>> Example 1 <<< */

#include <stdio.h>
int main()
{
    char x[20];

    printf("\nWhat is your name? ");
    scanf("%s", x);

    printf("\nHi %s!\n\n", x);


    return 0;
}