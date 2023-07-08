

/* >>> Greater Or Smaller Than 20 Program ( Version 3 ) <<< */

/* >>> A program that asks the user to enter a number if the number is greater than 20 prints all the numbers from 20 to this number, and if smaller than 20 prints all the numbers from this number to 20. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Greater Or Smaller Than 20 Program ( Version 3 ) ..\n\n");

    int num, i;

    printf("Please enter number Greater or smaller than 20 : ");
    scanf("%d", &num);

    while (num == 20)
    {
        printf("Please enter number larger or smaller than 20 : ");
        scanf("%d", &num);
    }

    if (num > 20)
    {
        i = 20;
        while (i <= num)
        {
            printf("\n%d", i);
            i++;
        }
    }
    else
    {
        i = num;
        while (i <= 20)
        {
            printf("\n%d", i);
            i++;
        }
    }
    printf("\n\n\n");

    return 0;
}