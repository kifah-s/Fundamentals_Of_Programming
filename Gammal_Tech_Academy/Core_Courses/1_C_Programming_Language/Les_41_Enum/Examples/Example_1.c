

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    enum week
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

    // Using DataType " Enum "  I can create serial numbers for any names.

    return 0;
}