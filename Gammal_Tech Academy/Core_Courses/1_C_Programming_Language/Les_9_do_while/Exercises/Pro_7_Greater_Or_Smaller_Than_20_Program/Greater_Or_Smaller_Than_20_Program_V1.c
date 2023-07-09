

/* >>> Greater Or Smaller Than 20 Program ( Version 1 ) <<< */

/* >>> A program that requests the user to enter a number if the number is greater than 20 prints all the numbers from 20 to this number, and if smaller than 20 prints all the numbers from this number to 20. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Greater Or Smaller Than 20 Program ( Version 1 ) ..\n\n");

    int num, i = 20;
    printf("Please enter number : ");
    scanf("%d", &num);

    if (num > 20)
    {
        do
        {
            printf("\n%d", i);
            i++;
            num--;
        } while (num >= 20);
    }
    else if (num < 20)
    {
        do
        {
            printf("\n%d", num);
            num++;
        } while (num <= 20);
    }
    else
    {
        printf("\n%d = 20", num);
    }
    printf("\n\n\n");

    return 0;
}