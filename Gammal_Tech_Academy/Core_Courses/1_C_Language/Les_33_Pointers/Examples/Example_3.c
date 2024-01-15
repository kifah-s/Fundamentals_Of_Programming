

/* >>> Example 3 <<< */

#include <stdio.h>

int main()
{
    int x = 5;
    printf("\nvariable value : \n");
    printf("%d\n", x);
    printf("%d\n", *(&x));
    printf("-----------------");
    printf("\nvariable address : \n");
    printf("%p\n\n", &x);

    return 0;
}