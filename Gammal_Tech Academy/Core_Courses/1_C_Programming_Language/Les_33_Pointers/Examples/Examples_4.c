

/* >>> Example 4 <<< */

#include <stdio.h>

int main()
{
    int x = 2, *p;
    printf("\n%p\n\n", &x);

    p = &x;
    printf("%p\n\n", p);
    printf("%d\n\n", *p);

    *p = 5;
    printf("%d\n\n", x);

    return 0;
}