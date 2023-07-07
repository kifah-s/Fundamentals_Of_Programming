

/* >>> From 1 To Num Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter a number and applies the numbers from 1 to this number (using while). <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in From 1 To Num Program ( Version 1 ) ..\n\n");

    int i = 1, num;

    printf("Please enter a number : ");
    scanf("%d", &num);

    while (i <= num)
    {
        printf("\n%d", i);
        i++;
    }
    printf("\n\n\n");

    return 0;
}