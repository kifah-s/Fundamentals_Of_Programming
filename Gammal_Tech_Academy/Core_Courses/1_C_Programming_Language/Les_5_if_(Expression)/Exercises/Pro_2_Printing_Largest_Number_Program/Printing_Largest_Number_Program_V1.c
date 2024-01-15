

/* >>> Printing largest Number Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter two digits and print the largest between them <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Printing Largest Number Program ( Version 1 ) ..\n\n");

    int x, y;

    printf("Please, enter the first number : ");
    scanf("%d", &x);

    printf("Please, enter the second number : ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("\n%d\n\n\n", x);
    }
    else
    {
        printf("\n%d\n\n\n", y);
    }

    return 0;
}