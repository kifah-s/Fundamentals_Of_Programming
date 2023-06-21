

/* >>> Year Salary Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter the value of his monthly salary and then calculates the value of his annual salary and prints it on the screen. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Year Salary Program ( Version 1 ) ..\n\n");

    int month,
        year;

    printf("The month salary : ");
    scanf("%d", &month);
    year = month * 12;
    printf("\nThe year salary : %d $\n\n\n", year);

    return 0;
}