

/* >>> Just A Number Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter a number and if the number is equal to 0 prints "not positive or negative" if not printed "just a number" (using switch). <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Just A Number Program ( Version 1 ) ..\n\n");

    int num;

    printf("Please enter a number : ");
    scanf("%d", &num);

    switch (num)
    {
    case 0:
        printf("\nNot positive or negative");
        break;

    default:
        printf("\nJust a number");
        break;
    }

    printf("\n\n\n");

    return 0;
}