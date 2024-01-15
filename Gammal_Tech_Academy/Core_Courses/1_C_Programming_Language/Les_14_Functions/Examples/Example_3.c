

/* >>> Example 3 <<< */

#include <stdio.h>

int add(int num1, int num2);

int main()
{
    int x, y;

    printf("\n\nPlease enter two numbers : ");
    scanf("%d %d", &x, &y);

    int total = add(x, y);

    printf("\nTotal = %d \n\n\n", total);

    return 0;
}

int add(int num1, int num2)
{
    return num1 + num2;
}