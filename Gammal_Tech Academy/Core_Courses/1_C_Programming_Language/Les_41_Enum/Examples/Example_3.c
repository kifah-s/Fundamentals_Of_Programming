

/* >>> Example 3 <<< */

#include <stdio.h>

int main()
{
    enum years
    {
        Jan = 1,
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

    for (size_t i = Jan; i <= Dec; i++)
    {
        printf("\n%d", i);
    }
    printf("\n\n");
    

    // Using DataType " Enum " I can create serial numbers for any names.

    return 0;
}