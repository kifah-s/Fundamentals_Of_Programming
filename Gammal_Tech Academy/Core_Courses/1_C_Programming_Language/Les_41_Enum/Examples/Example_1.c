

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    enum
    {
        sat,
        sun,
        mon,
        tue = 20,
        wed,
        thu,
        fri
    };
    printf("\n%d\n", mon);
    printf("%d\n", tue);
    printf("%d\n\n", wed);

    return 0;
}