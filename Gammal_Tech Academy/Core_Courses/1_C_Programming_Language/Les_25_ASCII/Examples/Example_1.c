

/* >>> Example 1 >>> */

#include <stdio.h>
int main()
{
    int i;
    
    for (i = '0'; i <= '9'; i++)
    {
        printf("%c\t%d\n", i, i);
    }

    return 0;
}