

/* >>> Example 5 <<< */

#include <stdio.h>

#define loop(i, n) for (int i = 0; i < n; i++)
#define hi printf("\nHello Gammal Tech\n\n");
#define r return 0;

int main()
{
    loop(i, 5)
    {
        hi
    }

    r
}