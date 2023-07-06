

/* >>> Number 10 Program ( Version 2 ) <<< */

/* >>> Write a program. If the user enters a number greater than 10, he will be printed "greater than 10", and if he enters a smaller number, he will print "less than 10", and if he enters the same 10, he will print "equal 10". <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Number 10 Program ( Version 2 ) ..\n\n");

    int number;

    printf("Please enter the number : ");
    scanf("%d", &number);

    if (number > 10)
    {
        printf("\nGreater than 10\n\n\n");
    }
    else if (number < 10)
    {
        printf("\nLess than 10\n\n\n");
    }
    else
    {
        printf("\nEqual 10\n\n\n");
    }

    return 0;
}