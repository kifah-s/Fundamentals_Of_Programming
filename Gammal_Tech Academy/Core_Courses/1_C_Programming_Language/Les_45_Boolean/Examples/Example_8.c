

/* >>> Example 8 <<< */

#include <stdio.h>
#include <stdbool.h>

bool isEven(int x)
{
    if (x % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num;
    printf("\nEnter num : ");
    scanf("%d", &num);

    if (isEven(num))
    {
        printf("\nEven\n\n");
    }
    else
    {
        printf("\nodd\n\n");
    }

    return 0;
}
