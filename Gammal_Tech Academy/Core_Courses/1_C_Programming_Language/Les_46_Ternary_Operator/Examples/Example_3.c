

/* >>> Example 3 <<< */

#include <stdio.h>

int main()
{
    int x;
    
    printf("Enter a number: ");
    scanf("%d", &x);
    
    printf(x % 2 == 0 ? "\neven\n\n" : "\nodd\n\n");
    /* printf(x % 2 == 1 ? "\nodd\n\n" : "\neven\n\n"); */
    /* printf(x % 2 ? "\nodd\n\n" : "\neven\n\n"); */

    return 0;
}