

/* >>> Count From Num To 15 Program ( Version 2 )  <<< */

/* >>> A program that asks the user to enter a number smaller than 15 and then prints all the numbers from this number to the number 15. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Count From Num To 15 Program ( Version 2 ) ..\n\n");

    int i;
    printf("\nEnter any number smaller 15 : ");
    scanf("%d", &i);

    for (i = i; i <= 15; i++)
    {
        printf("\n%d", i);
    }
    printf("\n\n\n");

    return 0;
}