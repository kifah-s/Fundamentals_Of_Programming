

/* >>> Example 4 <<< */

#include <stdio.h>

#define loop(i, n) for (int i = 0; i < n; i++)
#define hi printf("\nHello Gammal Tech\n\n");

int main()
{
    loop(i, 5)
    {
        hi
    }

    return 0;
}