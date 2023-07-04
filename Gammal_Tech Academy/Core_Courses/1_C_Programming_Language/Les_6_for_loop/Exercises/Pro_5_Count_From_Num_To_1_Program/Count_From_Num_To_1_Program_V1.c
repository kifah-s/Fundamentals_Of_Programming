

/* >>> Count From Num To 1 Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter any number and applies the numbers from the number I enter to the number 1. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Count From Num To 1 Program ( Version 1 ) ..\n\n");

    int i, num;

    printf("\nEnter any number : ");
    scanf("%d", &num);

    for (i = num; i >= 1; i--)
    {
        printf("\n%d", i);
    }
    printf("\n\n\n");

    return 0;
}