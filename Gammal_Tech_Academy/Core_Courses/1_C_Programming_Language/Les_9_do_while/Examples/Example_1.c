

/*  >>> Example 1 <<<  */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Example ..\n\n");

    int sum = 0, x;

    do
    {
        printf("Enter Item price : ");
        scanf("%d", &x);
        sum += x;
    } while (x != 0);

    printf("Total = %d\n", sum);

    return 0;
}