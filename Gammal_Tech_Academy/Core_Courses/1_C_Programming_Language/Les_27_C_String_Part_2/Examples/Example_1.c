

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    char name[] = "Hello Gammal Tech";
    char name_2[] = "Hello Gammal\0Tech";

    printf("\n%s\n", name);
    printf("%s\n\n\n", name_2);

    return 0;
}