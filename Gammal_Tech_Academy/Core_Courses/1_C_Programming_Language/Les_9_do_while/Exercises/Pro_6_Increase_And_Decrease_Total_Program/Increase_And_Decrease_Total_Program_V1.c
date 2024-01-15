

/* >>> Increase And Decrease Total Program ( Version 1 ) <<< */

/* >>> A program that requires the user to enter a set of numbers whenever the user enters a positive number. The tally is provided with 1. Whenever it enters a negative number, 1 of the tally is decreased and the program stops working when zero enters and prints the tally (using do.. while ). <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Increase And Decrease Total Program ( Version 1 ) ..\n\n");

    int num, sum = 0;
    do
    {
        printf("Please enter number : ");
        scanf("%d", &num);
        sum = sum + num;

    } while (num != 0);

    printf("\nTotal is : %d", sum);

    printf("\n\n\n");

    return 0;
}