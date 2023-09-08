

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    char address[] = "66 Gammal Tech street";
    
    int x;

    sscanf(address, "%d", &x);

    printf("\n%d\n\n", x);

    return 0;
}
