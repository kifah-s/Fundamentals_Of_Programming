

/* >>> Smaller Than 15 Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter a number smaller than 15 and then prints all the numbers from this number to the number 15 (using while). <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Smaller Than 15 Program ( Version 1 ) ..\n\n");

    int i = 1, num;

    printf("Please enter number smaller than 15 : ");
    scanf("%d", &num);

    while (i <= num)
    {
        printf("\n%d", i);
        i++;
    }

    printf("\n\n\n");

    return 0;
}