

/* >>> Example 4 <<< */

#include <stdio.h>

int main()
{
    int x;
    
    printf("Enter a number: ");
    scanf("%d", &x);
    
    x % 2 == 0 ? printf("even") : NULL /* OR 0 */;
    /* x % 2 == 1 ? printf("odd") : NULL  OR 0 ; */
    /* x % 2 ? printf("odd") : NULL OR 0; */

    return 0;
}