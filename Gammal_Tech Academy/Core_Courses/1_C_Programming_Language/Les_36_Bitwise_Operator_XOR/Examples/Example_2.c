

/* >>> Example 2 <<< */
/* >>> Swap the value of variables without the need for a third variable using ( XOR ^ ) <<< */

#include <stdio.h>

int main()
{
    int x = 5;
    int y = 7;

    printf("\nBefore swap : x = %d , y = %d\n", x, y);

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("\nAfter swap : x = %d , y = %d\n\n", x, y);

    return 0;
}