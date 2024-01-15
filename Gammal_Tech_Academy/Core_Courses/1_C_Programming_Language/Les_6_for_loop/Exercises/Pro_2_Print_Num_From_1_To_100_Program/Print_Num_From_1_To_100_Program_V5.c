

/* >>> Print Numbers From 1 To 100 Program ( Version 5 ) <<< */

/* >>> A program that prints numbers from 1 to 100. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Print Numbers From 1 To 100 Program ( Version 5 ) ..\n\n");

    int i;

    printf("\nPlease enter a number smaller from 100 and larger from 0 : ");
    scanf("%d", &i);

    for (i = i; i <= 100; i++)
    {
        printf("\n%d", i);
    }
    printf("\n\n\n");

    return 0;
}