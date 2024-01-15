

/* >>> Example 5 <<< */

#include <stdio.h>

int main()
{
    int *p, x;
    x = 10;
    printf("\nAddress of x: %p\n", &x);
    printf("Value of x: %d\n\n", x); // 10
    p = &x;
    printf("Address of pointer p: %p\n", p);
    printf("Content of pointer p: %d\n\n", *p); // 10
    x = 15;
    printf("Address of pointer p: %p\n", p);
    printf("Content of pointer p: %d\n\n", *p); // 15
    *p = 25;
    printf("Address of x: %p\n", &x);
    printf("Value of x: %d\n\n", x); // 25

    return 0;
}