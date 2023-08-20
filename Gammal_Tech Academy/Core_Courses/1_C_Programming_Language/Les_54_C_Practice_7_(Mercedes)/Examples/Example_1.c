

/* >>> Example 1 <<< */

#include <stdio.h>
#include <string.h>

int main()
{
    char x[20][20] = {"Mercedes", "BMW", "Mazda", "Mercedes", "BMW", "Mercedes"}, y[20];
    int num = 0;

    printf("\nEnter the brand: ");
    scanf("%s", y);

    for (int i = 0; i < 6; i++)
    {
        if (strcmp(y, x[i]) == 0)
        {
            num++;
        }
    }
    printf("\n%d\n\n", num);

    return 0;
}
