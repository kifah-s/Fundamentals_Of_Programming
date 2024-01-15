

/* >>> Example 1 <<< */

#include <stdio.h>
#include <string.h>

int main()
{
    char x[20][100] = {"Mercedes", "BMW", "Mazda", "Mercedes", "BMW", "Mercedes"}, y[20];

    int i, a, num = 0;

    printf("\nEnter the brand: ");
    scanf("%s", y);

    for (i = 0; y[i]; i++)
    {
        if (y[i] >= 'A' && y[i] <= 'Z')
        {
            y[i] = y[i] + 32;
        }
    }

    for (i = 0; i < 6; i++)
    {
        for (a = 0; x[i][a]; a++)
        {
            if (x[i][a] >= 'A' && x[i][a] <= 'Z')
            {
                x[i][a] += 32;
            }
        }
        
        if (strcmp(y, x[i]) == 0)
        {
            num++;
        }
    }

    printf("\n%d\n\n", num);
    return 0;
}