

/* >>> Example - 2 <<< */

#include <stdio.h>

int add(int x, int y);

int main()
{
    int x, y;

    printf("\n\nPlease enter two numbers : ");
    scanf("%d %d", &x, &y);

    int total = add(x, y);

    printf("\nTotal = %d \n\n\n", total);

    return 0;
}

int add(int x, int y)
{
    return x + y;
}
