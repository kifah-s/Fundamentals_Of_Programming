

/* >>> Example <<< */

#include <stdio.h>
#include <math.h>

int main()
{
    long x = 1010, y = 0, i = 0, j;

    while (x != 0)
    {
        j = x % 10;
        x = x / 10;
        y = y + j * pow(2, i);
        i++;
    }
    printf("\n\n%d\n\n\n", y);
    return 0;
}