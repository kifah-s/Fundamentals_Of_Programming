

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    int y;
    
    scanf("%d", &y);
    
    int x = (y % 2 == 0 ? 200 : 3000);
    
    printf("%d\n", x);
    
    return 0;
}