

/* >>> Count From Num To 1 Program ( Version 2 )  <<< */

/* >>> A program that asks a person to enter any number and applies the numbers from the number I enter to the number 1. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Count From Num To 1 Program ( Version 2 ) ..\n\n");

    int i;

    printf("\nEnter any number : ");
    scanf("%d", &i);

    for (i = i; i >= 1; i--)
    {
        printf("\n%d", i);
    }
    printf("\n\n\n");

    return 0;
}