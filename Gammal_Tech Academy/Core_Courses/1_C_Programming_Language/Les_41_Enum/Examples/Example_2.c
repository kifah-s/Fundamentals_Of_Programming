

/* >>> Example 2 <<< */

#include <stdio.h>

int main()
{
    enum years
    {
        Jan,
        Feb,
        Mar,
        Apr,
        May,
        Jun,
        Jul,
        Aug,
        Sep,
        Oct,
        Nov,
        Dec
    };

    for (size_t i = 0; i <= Dec; i++)
    {
        printf("\n%d", i);
    }
    printf("\n\n");
    

    // Using DataType " Enum "  I can create serial numbers for any names.

    return 0;
}