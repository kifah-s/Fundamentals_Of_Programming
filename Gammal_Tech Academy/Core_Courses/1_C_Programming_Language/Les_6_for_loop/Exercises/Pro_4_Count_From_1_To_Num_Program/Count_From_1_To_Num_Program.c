

/* >>> Count From 1 To Num Program <<< */

/* >>> A program that asks a person to enter any number and applies the numbers from 1 to the number that I enter. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Count From 1 To Num Program ..\n\n");

    int i, num;

    printf("\nEnter any number : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        printf("\n%d", i);
    }
    printf("\n\n\n");

    return 0;
}