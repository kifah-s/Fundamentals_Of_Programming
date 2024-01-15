

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    char x[3][10];
    
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("\nName '%d' : ", i + 1);
        scanf("%s", x[i]);
    }

    for (i = 0; i < 3; i++)
    {
        printf("\n%s ", x[i]);
    }
    printf("\n\n\n");
    return 0;
}